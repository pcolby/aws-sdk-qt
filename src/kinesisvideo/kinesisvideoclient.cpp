/*
    Copyright 2013-2020 Paul Colby

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

#include "kinesisvideoclient.h"
#include "kinesisvideoclient_p.h"

#include "core/awssignaturev4.h"
#include "createstreamrequest.h"
#include "createstreamresponse.h"
#include "deletestreamrequest.h"
#include "deletestreamresponse.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "getdataendpointrequest.h"
#include "getdataendpointresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforstreamrequest.h"
#include "listtagsforstreamresponse.h"
#include "tagstreamrequest.h"
#include "tagstreamresponse.h"
#include "untagstreamrequest.h"
#include "untagstreamresponse.h"
#include "updatedataretentionrequest.h"
#include "updatedataretentionresponse.h"
#include "updatestreamrequest.h"
#include "updatestreamresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideo
 * \brief Contains classess for accessing Amazon Kinesis Video Streams.
 *
 * \inmodule QtAwsKinesisVideo
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::KinesisVideoClient
 * \brief The KinesisVideoClient class provides access to the Amazon Kinesis Video Streams service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideo
 *
 */

/*!
 * \brief Constructs a KinesisVideoClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoClient::KinesisVideoClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * \overload KinesisVideoClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoClient::KinesisVideoClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * CreateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Kinesis video stream.
 *
 * </p
 *
 * When you create a new stream, Kinesis Video Streams assigns it a version number. When you change the stream's metadata,
 * Kinesis Video Streams updates the version.
 *
 * </p
 *
 * <code>CreateStream</code> is an asynchronous
 *
 * operation>
 *
 * For information about how the service works, see <a
 * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How it Works</a>.
 *
 * </p
 *
 * You must have permissions for the <code>KinesisVideo:CreateStream</code>
 */
CreateStreamResponse * KinesisVideoClient::createStream(const CreateStreamRequest &request)
{
    return qobject_cast<CreateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DeleteStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Kinesis video stream and the data contained in the stream.
 *
 * </p
 *
 * This method marks the stream for deletion, and makes the data in the stream inaccessible
 *
 * immediately>
 *
 *
 * </p
 *
 * To ensure that you have the latest version of the stream before deleting it, you can specify the stream version. Kinesis
 * Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version
 * number. To get the latest stream version, use the <code>DescribeStream</code> API.
 *
 * </p
 *
 * This operation requires permission for the <code>KinesisVideo:DeleteStream</code>
 */
DeleteStreamResponse * KinesisVideoClient::deleteStream(const DeleteStreamRequest &request)
{
    return qobject_cast<DeleteStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the most current information about the specified stream. You must specify either the <code>StreamName</code> or
 * the <code>StreamARN</code>.
 */
DescribeStreamResponse * KinesisVideoClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * GetDataEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an endpoint for a specified stream for either reading or writing. Use this endpoint in your application to read
 * from the specified stream (using the <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or write
 * to it (using the <code>PutMedia</code> operation).
 *
 * </p <note>
 *
 * The returned endpoint does not have the API name appended. The client needs to add the API name to the returned
 *
 * endpoint> </note>
 *
 * In the request, specify the stream either by <code>StreamName</code> or
 */
GetDataEndpointResponse * KinesisVideoClient::getDataEndpoint(const GetDataEndpointRequest &request)
{
    return qobject_cast<GetDataEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>StreamInfo</code> objects. Each object describes a stream. To retrieve only streams that
 * satisfy a specific condition, you can specify a <code>StreamNameCondition</code>.
 */
ListStreamsResponse * KinesisVideoClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * ListTagsForStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags associated with the specified
 *
 * stream>
 *
 * In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>.
 */
ListTagsForStreamResponse * KinesisVideoClient::listTagsForStream(const ListTagsForStreamRequest &request)
{
    return qobject_cast<ListTagsForStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * TagStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the value is optional) that you can define and
 * assign to AWS resources. If you specify a tag that already exists, the tag value is replaced with the value that you
 * specify in the request. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>AWS Billing and Cost Management User Guide</i>.
 *
 * </p
 *
 * You must provide either the <code>StreamName</code> or the
 *
 * <code>StreamARN</code>>
 *
 * This operation requires permission for the <code>KinesisVideo:TagStream</code>
 *
 * action>
 *
 * Kinesis video streams support up to 50
 */
TagStreamResponse * KinesisVideoClient::tagStream(const TagStreamRequest &request)
{
    return qobject_cast<TagStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UntagStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a stream. In the request, specify only a tag key or keys; don't specify the value. If you
 * specify a tag key that does not exist, it's
 *
 * ignored>
 *
 * In the request, you must provide the <code>StreamName</code> or
 */
UntagStreamResponse * KinesisVideoClient::untagStream(const UntagStreamRequest &request)
{
    return qobject_cast<UntagStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateDataRetentionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Increases or decreases the stream's data retention period by the value that you specify. To indicate whether you want to
 * increase or decrease the data retention period, specify the <code>Operation</code> parameter in the request body. In the
 * request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>.
 *
 * </p <note>
 *
 * The retention period that you specify replaces the current
 *
 * value> </note>
 *
 * This operation requires permission for the <code>KinesisVideo:UpdateDataRetention</code>
 *
 * action>
 *
 * Changing the data retention period affects the data in the stream as
 *
 * follows> <ul> <li>
 *
 * If the data retention period is increased, existing data is retained for the new retention period. For example, if the
 * data retention period is increased from one hour to seven hours, all existing data is retained for seven
 *
 * hours> </li> <li>
 *
 * If the data retention period is decreased, existing data is retained for the new retention period. For example, if the
 * data retention period is decreased from seven hours to one hour, all existing data is retained for one hour, and any
 * data older than one hour is deleted
 */
UpdateDataRetentionResponse * KinesisVideoClient::updateDataRetention(const UpdateDataRetentionRequest &request)
{
    return qobject_cast<UpdateDataRetentionResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoClient service, and returns a pointer to an
 * UpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates stream metadata, such as the device name and media
 *
 * type>
 *
 * You must provide the stream name or the Amazon Resource Name (ARN) of the
 *
 * stream>
 *
 * To make sure that you have the latest version of the stream before updating it, you can specify the stream version.
 * Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new
 * version number. To get the latest stream version, use the <code>DescribeStream</code> API.
 *
 * </p
 *
 * <code>UpdateStream</code> is an asynchronous operation, and takes time to
 */
UpdateStreamResponse * KinesisVideoClient::updateStream(const UpdateStreamRequest &request)
{
    return qobject_cast<UpdateStreamResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideo::KinesisVideoClientPrivate
 * \brief The KinesisVideoClientPrivate class provides private implementation for KinesisVideoClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoClientPrivate object with public implementation \a q.
 */
KinesisVideoClientPrivate::KinesisVideoClientPrivate(KinesisVideoClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideo
} // namespace QtAws
