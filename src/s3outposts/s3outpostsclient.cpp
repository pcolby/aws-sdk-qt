// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "s3outpostsclient.h"
#include "s3outpostsclient_p.h"

#include "core/awssignaturev4.h"
#include "createendpointrequest.h"
#include "createendpointresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "listendpointsrequest.h"
#include "listendpointsresponse.h"
#include "listsharedendpointsrequest.h"
#include "listsharedendpointsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::S3Outposts
 * \brief Contains classess for accessing Amazon S3 on Outposts.
 *
 * \inmodule QtAwsS3Outposts
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::S3OutpostsClient
 * \brief The S3OutpostsClient class provides access to the Amazon S3 on Outposts service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 */

/*!
 * \brief Constructs a S3OutpostsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
S3OutpostsClient::S3OutpostsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3OutpostsClientPrivate(this), parent)
{
    Q_D(S3OutpostsClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("s3-outposts");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon S3 on Outposts");
    d->serviceName = QStringLiteral("s3-outposts");
}

/*!
 * \overload S3OutpostsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
S3OutpostsClient::S3OutpostsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3OutpostsClientPrivate(this), parent)
{
    Q_D(S3OutpostsClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("s3-outposts");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon S3 on Outposts");
    d->serviceName = QStringLiteral("s3-outposts");
}

/*!
 * Sends \a request to the S3OutpostsClient service, and returns a pointer to an
 * CreateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint and associates it with the specified
 *
 * Outpost> <note>
 *
 * It can take up to 5 minutes for this action to
 *
 * finish> </note>
 *
 * </p
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_ListEndpoints.html">ListEndpoints</a>
 */
CreateEndpointResponse * S3OutpostsClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the S3OutpostsClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 *
 * endpoint> <note>
 *
 * It can take up to 5 minutes for this action to
 *
 * finish> </note>
 *
 * </p
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_ListEndpoints.html">ListEndpoints</a>
 */
DeleteEndpointResponse * S3OutpostsClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the S3OutpostsClient service, and returns a pointer to an
 * ListEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists endpoints associated with the specified Outpost.
 *
 * </p
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
 */
ListEndpointsResponse * S3OutpostsClient::listEndpoints(const ListEndpointsRequest &request)
{
    return qobject_cast<ListEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the S3OutpostsClient service, and returns a pointer to an
 * ListSharedEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all endpoints associated with an Outpost that has been shared by Amazon Web Services Resource Access Manager
 *
 * (RAM)>
 *
 * Related actions
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
 */
ListSharedEndpointsResponse * S3OutpostsClient::listSharedEndpoints(const ListSharedEndpointsRequest &request)
{
    return qobject_cast<ListSharedEndpointsResponse *>(send(request));
}

/*!
 * \class QtAws::S3Outposts::S3OutpostsClientPrivate
 * \brief The S3OutpostsClientPrivate class provides private implementation for S3OutpostsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsClientPrivate object with public implementation \a q.
 */
S3OutpostsClientPrivate::S3OutpostsClientPrivate(S3OutpostsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace S3Outposts
} // namespace QtAws
