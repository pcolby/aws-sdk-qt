/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticinferenceclient.h"
#include "elasticinferenceclient_p.h"

#include "core/awssignaturev4.h"
#include "describeacceleratorofferingsrequest.h"
#include "describeacceleratorofferingsresponse.h"
#include "describeacceleratortypesrequest.h"
#include "describeacceleratortypesresponse.h"
#include "describeacceleratorsrequest.h"
#include "describeacceleratorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticInference
 * \brief Contains classess for accessing Amazon Elastic  Inference ( Elastic Inference).
 *
 * \inmodule QtAwsElasticInference
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::ElasticInferenceClient
 * \brief The ElasticInferenceClient class provides access to the Amazon Elastic  Inference ( Elastic Inference) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 */

/*!
 * \brief Constructs a ElasticInferenceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticInferenceClient::ElasticInferenceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("api.elastic-inference"),
    QStringLiteral("Amazon Elastic  Inference"),
    QStringLiteral("elastic-inference"),
    parent), d_ptr(new ElasticInferenceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ElasticInferenceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticInferenceClient::ElasticInferenceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("api.elastic-inference"),
    QStringLiteral("Amazon Elastic  Inference"),
    QStringLiteral("elastic-inference"),
    parent), d_ptr(new ElasticInferenceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * DescribeAcceleratorOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the locations in which a given accelerator type or set of types is present in a given region.
 */
DescribeAcceleratorOfferingsResponse * ElasticInferenceClient::describeAcceleratorOfferings(const DescribeAcceleratorOfferingsRequest &request)
{
    return qobject_cast<DescribeAcceleratorOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * DescribeAcceleratorTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the accelerator types available in a given region, as well as their characteristics, such as memory and
 * throughput.
 */
DescribeAcceleratorTypesResponse * ElasticInferenceClient::describeAcceleratorTypes(const DescribeAcceleratorTypesRequest &request)
{
    return qobject_cast<DescribeAcceleratorTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * DescribeAcceleratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes information over a provided set of accelerators belonging to an account.
 */
DescribeAcceleratorsResponse * ElasticInferenceClient::describeAccelerators(const DescribeAcceleratorsRequest &request)
{
    return qobject_cast<DescribeAcceleratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags of an Elastic Inference Accelerator.
 */
ListTagsForResourceResponse * ElasticInferenceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to an Elastic Inference Accelerator.
 */
TagResourceResponse * ElasticInferenceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticInferenceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from an Elastic Inference Accelerator.
 */
UntagResourceResponse * ElasticInferenceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::ElasticInference::ElasticInferenceClientPrivate
 * \brief The ElasticInferenceClientPrivate class provides private implementation for ElasticInferenceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a ElasticInferenceClientPrivate object with public implementation \a q.
 */
ElasticInferenceClientPrivate::ElasticInferenceClientPrivate(ElasticInferenceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ElasticInference
} // namespace QtAws
