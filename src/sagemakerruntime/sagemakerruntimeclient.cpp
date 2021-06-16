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

#include "sagemakerruntimeclient.h"
#include "sagemakerruntimeclient_p.h"

#include "core/awssignaturev4.h"
#include "invokeendpointrequest.h"
#include "invokeendpointresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SageMakerRuntime
 * \brief Contains classess for accessing Amazon SageMaker Runtime.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeClient
 * \brief The SageMakerRuntimeClient class provides access to the Amazon SageMaker Runtime service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 */

/*!
 * \brief Constructs a SageMakerRuntimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SageMakerRuntimeClient::SageMakerRuntimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerRuntimeClient);
    d->apiVersion = QStringLiteral("2017-05-13");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("runtime.sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * \overload SageMakerRuntimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SageMakerRuntimeClient::SageMakerRuntimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerRuntimeClient);
    d->apiVersion = QStringLiteral("2017-05-13");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("runtime.sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon SageMaker Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * Sends \a request to the SageMakerRuntimeClient service, and returns a pointer to an
 * InvokeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * After you deploy a model into production using Amazon SageMaker hosting services, your client applications use this API
 * to get inferences from the model hosted at the specified endpoint.
 *
 * </p
 *
 * For an overview of Amazon SageMaker, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How
 * It Works</a>.
 *
 * </p
 *
 * Amazon SageMaker strips all POST headers except those supported by the API. Amazon SageMaker might add additional
 * headers. You should not rely on the behavior of headers outside those enumerated in the request syntax.
 *
 * </p
 *
 * Calls to <code>InvokeEndpoint</code> are authenticated by using AWS Signature Version 4. For information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating Requests (AWS
 * Signature Version 4)</a> in the <i>Amazon S3 API
 *
 * Reference</i>>
 *
 * A customer's model containers must respond to requests within 60 seconds. The model itself can have a maximum processing
 * time of 60 seconds before responding to invocations. If your model is going to take 50-60 seconds of processing time,
 * the SDK socket timeout should be set to be 70
 *
 * seconds> <note>
 *
 * Endpoints are scoped to an individual account, and are not public. The URL does not contain the account ID, but Amazon
 * SageMaker determines the account ID from the authentication token that is supplied by the
 */
InvokeEndpointResponse * SageMakerRuntimeClient::invokeEndpoint(const InvokeEndpointRequest &request)
{
    return qobject_cast<InvokeEndpointResponse *>(send(request));
}

/*!
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeClientPrivate
 * \brief The SageMakerRuntimeClientPrivate class provides private implementation for SageMakerRuntimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a SageMakerRuntimeClientPrivate object with public implementation \a q.
 */
SageMakerRuntimeClientPrivate::SageMakerRuntimeClientPrivate(SageMakerRuntimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SageMakerRuntime
} // namespace QtAws
