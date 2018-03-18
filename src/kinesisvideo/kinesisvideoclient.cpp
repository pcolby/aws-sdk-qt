/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "kinesisvideoclient.h"
#include "kinesisvideoclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace KinesisVideo {

/**
 * @class  KinesisVideoClient
 *
 * @brief  Client for Amazon Kinesis Video Streams
 *
 */

/**
 * @brief  Constructs a new KinesisVideoClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
KinesisVideoClient::KinesisVideoClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new KinesisVideoClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
KinesisVideoClient::KinesisVideoClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KinesisVideoClientPrivate(this), parent)
{
    Q_D(KinesisVideoClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
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
 * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How it Works</a>.
 *
 * </p
 *
 * You must have permissions for the <code>KinesisVideo:CreateStream</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamResponse * KinesisVideoClient::createStream(const CreateStreamRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStreamResponse * KinesisVideoClient::deleteStream(const DeleteStreamRequest &request)
{

}

/**
 * Returns the most current information about the specified stream. You must specify either the <code>StreamName</code> or
 * the <code>StreamARN</code>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStreamResponse * KinesisVideoClient::describeStream(const DescribeStreamRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDataEndpointResponse * KinesisVideoClient::getDataEndpoint(const GetDataEndpointRequest &request)
{

}

/**
 * Returns an array of <code>StreamInfo</code> objects. Each object describes a stream. To retrieve only streams that
 * satisfy a specific condition, you can specify a <code>StreamNameCondition</code>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStreamsResponse * KinesisVideoClient::listStreams(const ListStreamsRequest &request)
{

}

/**
 * Returns a list of tags associated with the specified
 *
 * stream>
 *
 * In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForStreamResponse * KinesisVideoClient::listTagsForStream(const ListTagsForStreamRequest &request)
{

}

/**
 * Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the value is optional) that you can define and
 * assign to AWS resources. If you specify a tag that already exists, the tag value is replaced with the value that you
 * specify in the request. For more information, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagStreamResponse * KinesisVideoClient::tagStream(const TagStreamRequest &request)
{

}

/**
 * Removes one or more tags from a stream. In the request, specify only a tag key or keys; don't specify the value. If you
 * specify a tag key that does not exist, it's
 *
 * ignored>
 *
 * In the request, you must provide the <code>StreamName</code> or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagStreamResponse * KinesisVideoClient::untagStream(const UntagStreamRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDataRetentionResponse * KinesisVideoClient::updateDataRetention(const UpdateDataRetentionRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStreamResponse * KinesisVideoClient::updateStream(const UpdateStreamRequest &request)
{

}

/**
 * @internal
 *
 * @class  KinesisVideoClientPrivate
 *
 * @brief  Private implementation for KinesisVideoClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoClientPrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoClient instance.
 */
KinesisVideoClientPrivate::KinesisVideoClientPrivate(KinesisVideoClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace KinesisVideo
} // namespace AWS
