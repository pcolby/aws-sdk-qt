// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ivsclient.h"
#include "ivsclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetchannelrequest.h"
#include "batchgetchannelresponse.h"
#include "batchgetstreamkeyrequest.h"
#include "batchgetstreamkeyresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createrecordingconfigurationrequest.h"
#include "createrecordingconfigurationresponse.h"
#include "createstreamkeyrequest.h"
#include "createstreamkeyresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deleteplaybackkeypairrequest.h"
#include "deleteplaybackkeypairresponse.h"
#include "deleterecordingconfigurationrequest.h"
#include "deleterecordingconfigurationresponse.h"
#include "deletestreamkeyrequest.h"
#include "deletestreamkeyresponse.h"
#include "getchannelrequest.h"
#include "getchannelresponse.h"
#include "getplaybackkeypairrequest.h"
#include "getplaybackkeypairresponse.h"
#include "getrecordingconfigurationrequest.h"
#include "getrecordingconfigurationresponse.h"
#include "getstreamrequest.h"
#include "getstreamresponse.h"
#include "getstreamkeyrequest.h"
#include "getstreamkeyresponse.h"
#include "getstreamsessionrequest.h"
#include "getstreamsessionresponse.h"
#include "importplaybackkeypairrequest.h"
#include "importplaybackkeypairresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listplaybackkeypairsrequest.h"
#include "listplaybackkeypairsresponse.h"
#include "listrecordingconfigurationsrequest.h"
#include "listrecordingconfigurationsresponse.h"
#include "liststreamkeysrequest.h"
#include "liststreamkeysresponse.h"
#include "liststreamsessionsrequest.h"
#include "liststreamsessionsresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putmetadatarequest.h"
#include "putmetadataresponse.h"
#include "stopstreamrequest.h"
#include "stopstreamresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Ivs
 * \brief Contains classess for accessing Amazon Interactive Video Service.
 *
 * \inmodule QtAwsIvs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Ivs {

/*!
 * \class QtAws::Ivs::IvsClient
 * \brief The IvsClient class provides access to the Amazon Interactive Video Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIvs
 *
 *  <b>Introduction</b>
 * 
 *  </p
 * 
 *  The Amazon Interactive Video Service (IVS) API is REST compatible, using a standard HTTP API and an Amazon Web Services
 *  EventBridge event stream for responses. JSON is used for both requests and responses, including
 * 
 *  errors>
 * 
 *  The API is an Amazon Web Services regional service. For a list of supported regions and Amazon IVS HTTPS service
 *  endpoints, see the <a href="https://docs.aws.amazon.com/general/latest/gr/ivs.html">Amazon IVS page</a> in the <i>Amazon
 *  Web Services General
 * 
 *  Reference</i>>
 * 
 *  <i> <b>All API request parameters and URLs are case sensitive. </b> </i>
 * 
 *  </p
 * 
 *  For a summary of notable documentation changes in each release, see <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/doc-history.html"> Document
 * 
 *  History</a>>
 * 
 *  <b>Allowed Header Values</b>
 * 
 *  </p <ul> <li>
 * 
 *  <code> <b>Accept:</b> </code>
 * 
 *  application/jso> </li> <li>
 * 
 *  <code> <b>Accept-Encoding:</b> </code> gzip,
 * 
 *  deflat> </li> <li>
 * 
 *  <code> <b>Content-Type:</b>
 * 
 *  </code>application/jso> </li> </ul>
 * 
 *  <b>Resources</b>
 * 
 *  </p
 * 
 *  The following resources contain information about your IVS live stream (see <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/getting-started.html"> Getting Started with Amazon
 * 
 *  IVS</a>)> <ul> <li>
 * 
 *  Channel — Stores configuration data related to your live stream. You first create a channel and then use the channel’s
 *  stream key to start your live stream. See the Channel endpoints for more information.
 * 
 *  </p </li> <li>
 * 
 *  Stream key — An identifier assigned by Amazon IVS when you create a channel, which is then used to authorize streaming.
 *  See the StreamKey endpoints for more information. <i> <b>Treat the stream key like a secret, since it allows anyone to
 *  stream to the channel.</b> </i>
 * 
 *  </p </li> <li>
 * 
 *  Playback key pair — Video playback may be restricted using playback-authorization tokens, which use public-key
 *  encryption. A playback key pair is the public-private pair of keys used to sign and validate the playback-authorization
 *  token. See the PlaybackKeyPair endpoints for more
 * 
 *  information> </li> <li>
 * 
 *  Recording configuration — Stores configuration related to recording a live stream and where to store the recorded
 *  content. Multiple channels can reference the same recording configuration. See the Recording Configuration endpoints for
 *  more
 * 
 *  information> </li> </ul>
 * 
 *  <b>Tagging</b>
 * 
 *  </p
 * 
 *  A <i>tag</i> is a metadata label that you assign to an Amazon Web Services resource. A tag comprises a <i>key</i> and a
 *  <i>value</i>, both set by you. For example, you might set a tag as <code>topic:nature</code> to label a particular video
 *  category. See <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging Amazon Web Services
 *  Resources</a> for more information, including restrictions that apply to tags and "Tag naming limits and requirements";
 *  Amazon IVS has no service-specific constraints beyond what is documented
 * 
 *  there>
 * 
 *  Tags can help you identify and organize your Amazon Web Services resources. For example, you can use the same tag for
 *  different resources to indicate that they are related. You can also use tags to manage access (see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html"> Access Tags</a>).
 * 
 *  </p
 * 
 *  The Amazon IVS API has these tag-related endpoints: <a>TagResource</a>, <a>UntagResource</a>, and
 *  <a>ListTagsForResource</a>. The following resources support tagging: Channels, Stream Keys, Playback Key Pairs, and
 *  Recording
 * 
 *  Configurations>
 * 
 *  At most 50 tags can be applied to a resource.
 * 
 *  </p
 * 
 *  <b>Authentication versus Authorization</b>
 * 
 *  </p
 * 
 *  Note the differences between these
 * 
 *  concepts> <ul> <li>
 * 
 *  <i>Authentication</i> is about verifying identity. You need to be authenticated to sign Amazon IVS API
 * 
 *  requests> </li> <li>
 * 
 *  <i>Authorization</i> is about granting permissions. Your IAM roles need to have permissions for Amazon IVS API requests.
 *  In addition, authorization is needed to view <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Amazon IVS private channels</a>. (Private
 *  channels are channels that are enabled for "playback
 * 
 *  authorization."> </li> </ul>
 * 
 *  <b>Authentication</b>
 * 
 *  </p
 * 
 *  All Amazon IVS API requests must be authenticated with a signature. The Amazon Web Services Command-Line Interface (CLI)
 *  and Amazon IVS Player SDKs take care of signing the underlying API calls for you. However, if your application calls the
 *  Amazon IVS API directly, it’s your responsibility to sign the
 * 
 *  requests>
 * 
 *  You generate a signature using valid Amazon Web Services credentials that have permission to perform the requested
 *  action. For example, you must sign PutMetadata requests with a signature generated from an IAM user account that has the
 *  <code>ivs:PutMetadata</code>
 * 
 *  permission>
 * 
 *  For more
 * 
 *  information> <ul> <li>
 * 
 *  Authentication and generating signatures — See <a
 *  href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating Requests
 *  (Amazon Web Services Signature Version 4)</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>> </li> <li>
 * 
 *  Managing Amazon IVS permissions — See <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity and Access Management</a> on the
 *  Security page of the <i>Amazon IVS User
 * 
 *  Guide</i>> </li> </ul>
 * 
 *  <b>Amazon Resource Names (ARNs)</b>
 * 
 *  </p
 * 
 *  ARNs uniquely identify AWS resources. An ARN is required when you need to specify a resource unambiguously across all of
 *  AWS, such as in IAM policies and API calls. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names</a> in the
 *  <i>AWS General
 * 
 *  Reference</i>>
 * 
 *  <b>Channel Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateChannel</a> — Creates a new channel and an associated stream key to start
 * 
 *  streaming> </li> <li>
 * 
 *  <a>GetChannel</a> — Gets the channel configuration for the specified channel
 * 
 *  ARN> </li> <li>
 * 
 *  <a>BatchGetChannel</a> — Performs <a>GetChannel</a> on multiple ARNs
 * 
 *  simultaneously> </li> <li>
 * 
 *  <a>ListChannels</a> — Gets summary information about all channels in your account, in the Amazon Web Services region
 *  where the API request is processed. This list can be filtered to match a specified name or recording-configuration ARN.
 *  Filters are mutually exclusive and cannot be used together. If you try to use both filters, you will get an error (409
 *  Conflict
 * 
 *  Exception)> </li> <li>
 * 
 *  <a>UpdateChannel</a> — Updates a channel's configuration. This does not affect an ongoing stream of this channel. You
 *  must stop and restart the stream for the changes to take
 * 
 *  effect> </li> <li>
 * 
 *  <a>DeleteChannel</a> — Deletes the specified
 * 
 *  channel> </li> </ul>
 * 
 *  <b>StreamKey Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateStreamKey</a> — Creates a stream key, used to initiate a stream, for the specified channel
 * 
 *  ARN> </li> <li>
 * 
 *  <a>GetStreamKey</a> — Gets stream key information for the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>BatchGetStreamKey</a> — Performs <a>GetStreamKey</a> on multiple ARNs
 * 
 *  simultaneously> </li> <li>
 * 
 *  <a>ListStreamKeys</a> — Gets summary information about stream keys for the specified
 * 
 *  channel> </li> <li>
 * 
 *  <a>DeleteStreamKey</a> — Deletes the stream key for the specified ARN, so it can no longer be used to
 * 
 *  stream> </li> </ul>
 * 
 *  <b>Stream Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>GetStream</a> — Gets information about the active (live) stream on a specified
 * 
 *  channel> </li> <li>
 * 
 *  <a>GetStreamSession</a> — Gets metadata on a specified
 * 
 *  stream> </li> <li>
 * 
 *  <a>ListStreams</a> — Gets summary information about live streams in your account, in the Amazon Web Services region
 *  where the API request is
 * 
 *  processed> </li> <li>
 * 
 *  <a>ListStreamSessions</a> — Gets a summary of current and previous streams for a specified channel in your account, in
 *  the AWS region where the API request is
 * 
 *  processed> </li> <li>
 * 
 *  <a>StopStream</a> — Disconnects the incoming RTMPS stream for the specified channel. Can be used in conjunction with
 *  <a>DeleteStreamKey</a> to prevent further streaming to a
 * 
 *  channel> </li> <li>
 * 
 *  <a>PutMetadata</a> — Inserts metadata into the active stream of the specified channel. At most 5 requests per second per
 *  channel are allowed, each with a maximum 1 KB payload. (If 5 TPS is not sufficient for your needs, we recommend batching
 *  your data into a single PutMetadata call.) At most 155 requests per second per account are
 * 
 *  allowed> </li> </ul>
 * 
 *  <b>PlaybackKeyPair Endpoints</b>
 * 
 *  </p
 * 
 *  For more information, see <a href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting Up
 *  Private Channels</a> in the <i>Amazon IVS User
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a>ImportPlaybackKeyPair</a> — Imports the public portion of a new key pair and returns its <code>arn</code> and
 *  <code>fingerprint</code>. The <code>privateKey</code> can then be used to generate viewer authorization tokens, to grant
 *  viewers access to private channels (channels enabled for playback
 * 
 *  authorization)> </li> <li>
 * 
 *  <a>GetPlaybackKeyPair</a> — Gets a specified playback authorization key pair and returns the <code>arn</code> and
 *  <code>fingerprint</code>. The <code>privateKey</code> held by the caller can be used to generate viewer authorization
 *  tokens, to grant viewers access to private
 * 
 *  channels> </li> <li>
 * 
 *  <a>ListPlaybackKeyPairs</a> — Gets summary information about playback key
 * 
 *  pairs> </li> <li>
 * 
 *  <a>DeletePlaybackKeyPair</a> — Deletes a specified authorization key pair. This invalidates future viewer tokens
 *  generated using the key pair’s
 * 
 *  <code>privateKey</code>> </li> </ul>
 * 
 *  <b>RecordingConfiguration Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateRecordingConfiguration</a> — Creates a new recording configuration, used to enable recording to Amazon
 * 
 *  S3> </li> <li>
 * 
 *  <a>GetRecordingConfiguration</a> — Gets the recording-configuration metadata for the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>ListRecordingConfigurations</a> — Gets summary information about all recording configurations in your account, in the
 *  Amazon Web Services region where the API request is
 * 
 *  processed> </li> <li>
 * 
 *  <a>DeleteRecordingConfiguration</a> — Deletes the recording configuration for the specified
 * 
 *  ARN> </li> </ul>
 * 
 *  <b>Amazon Web Services Tags Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>TagResource</a> — Adds or updates tags for the Amazon Web Services resource with the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>UntagResource</a> — Removes tags from the resource with the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>ListTagsForResource</a> — Gets information about Amazon Web Services tags for the specified
 */

/*!
 * \brief Constructs a IvsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IvsClient::IvsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IvsClientPrivate(this), parent)
{
    Q_D(IvsClient);
    d->apiVersion = QStringLiteral("2020-07-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ivs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Interactive Video Service");
    d->serviceName = QStringLiteral("ivs");
}

/*!
 * \overload IvsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IvsClient::IvsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IvsClientPrivate(this), parent)
{
    Q_D(IvsClient);
    d->apiVersion = QStringLiteral("2020-07-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ivs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Interactive Video Service");
    d->serviceName = QStringLiteral("ivs");
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * BatchGetChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs <a>GetChannel</a> on multiple ARNs
 */
BatchGetChannelResponse * IvsClient::batchGetChannel(const BatchGetChannelRequest &request)
{
    return qobject_cast<BatchGetChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * BatchGetStreamKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs <a>GetStreamKey</a> on multiple ARNs
 */
BatchGetStreamKeyResponse * IvsClient::batchGetStreamKey(const BatchGetStreamKeyRequest &request)
{
    return qobject_cast<BatchGetStreamKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new channel and an associated stream key to start
 */
CreateChannelResponse * IvsClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * CreateRecordingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new recording configuration, used to enable recording to Amazon
 *
 * S3>
 *
 * <b>Known issue:</b> In the us-east-1 region, if you use the Amazon Web Services CLI to create a recording configuration,
 * it returns success even if the S3 bucket is in a different region. In this case, the <code>state</code> of the recording
 * configuration is <code>CREATE_FAILED</code> (instead of <code>ACTIVE</code>). (In other regions, the CLI correctly
 * returns failure if the bucket is in a different
 *
 * region.>
 *
 * <b>Workaround:</b> Ensure that your S3 bucket is in the same region as the recording configuration. If you create a
 * recording configuration in a different region as your S3 bucket, delete that recording configuration and create a new
 * one with an S3 bucket from the correct
 */
CreateRecordingConfigurationResponse * IvsClient::createRecordingConfiguration(const CreateRecordingConfigurationRequest &request)
{
    return qobject_cast<CreateRecordingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * CreateStreamKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stream key, used to initiate a stream, for the specified channel
 *
 * ARN>
 *
 * Note that <a>CreateChannel</a> creates a stream key. If you subsequently use CreateStreamKey on the same channel, it
 * will fail because a stream key already exists and there is a limit of 1 stream key per channel. To reset the stream key
 * on a channel, use <a>DeleteStreamKey</a> and then
 */
CreateStreamKeyResponse * IvsClient::createStreamKey(const CreateStreamKeyRequest &request)
{
    return qobject_cast<CreateStreamKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified channel and its associated stream
 *
 * keys>
 *
 * If you try to delete a live channel, you will get an error (409 ConflictException). To delete a channel that is live,
 * call <a>StopStream</a>, wait for the Amazon EventBridge "Stream End" event (to verify that the stream's state was
 * changed from Live to Offline), then call DeleteChannel. (See <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html"> Using EventBridge with Amazon IVS</a>.)
 */
DeleteChannelResponse * IvsClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * DeletePlaybackKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified authorization key pair. This invalidates future viewer tokens generated using the key pair’s
 * <code>privateKey</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting Up Private Channels</a> in the
 * <i>Amazon IVS User
 */
DeletePlaybackKeyPairResponse * IvsClient::deletePlaybackKeyPair(const DeletePlaybackKeyPairRequest &request)
{
    return qobject_cast<DeletePlaybackKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * DeleteRecordingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the recording configuration for the specified
 *
 * ARN>
 *
 * If you try to delete a recording configuration that is associated with a channel, you will get an error (409
 * ConflictException). To avoid this, for all channels that reference the recording configuration, first use
 * <a>UpdateChannel</a> to set the <code>recordingConfigurationArn</code> field to an empty string, then use
 */
DeleteRecordingConfigurationResponse * IvsClient::deleteRecordingConfiguration(const DeleteRecordingConfigurationRequest &request)
{
    return qobject_cast<DeleteRecordingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * DeleteStreamKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the stream key for the specified ARN, so it can no longer be used to
 */
DeleteStreamKeyResponse * IvsClient::deleteStreamKey(const DeleteStreamKeyRequest &request)
{
    return qobject_cast<DeleteStreamKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the channel configuration for the specified channel ARN. See also
 */
GetChannelResponse * IvsClient::getChannel(const GetChannelRequest &request)
{
    return qobject_cast<GetChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetPlaybackKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a specified playback authorization key pair and returns the <code>arn</code> and <code>fingerprint</code>. The
 * <code>privateKey</code> held by the caller can be used to generate viewer authorization tokens, to grant viewers access
 * to private channels. For more information, see <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting Up Private Channels</a> in the
 * <i>Amazon IVS User
 */
GetPlaybackKeyPairResponse * IvsClient::getPlaybackKeyPair(const GetPlaybackKeyPairRequest &request)
{
    return qobject_cast<GetPlaybackKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetRecordingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the recording configuration for the specified
 */
GetRecordingConfigurationResponse * IvsClient::getRecordingConfiguration(const GetRecordingConfigurationRequest &request)
{
    return qobject_cast<GetRecordingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the active (live) stream on a specified
 */
GetStreamResponse * IvsClient::getStream(const GetStreamRequest &request)
{
    return qobject_cast<GetStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetStreamKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets stream-key information for a specified
 */
GetStreamKeyResponse * IvsClient::getStreamKey(const GetStreamKeyRequest &request)
{
    return qobject_cast<GetStreamKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * GetStreamSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets metadata on a specified
 */
GetStreamSessionResponse * IvsClient::getStreamSession(const GetStreamSessionRequest &request)
{
    return qobject_cast<GetStreamSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ImportPlaybackKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the public portion of a new key pair and returns its <code>arn</code> and <code>fingerprint</code>. The
 * <code>privateKey</code> can then be used to generate viewer authorization tokens, to grant viewers access to private
 * channels. For more information, see <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting Up Private Channels</a> in the
 * <i>Amazon IVS User
 */
ImportPlaybackKeyPairResponse * IvsClient::importPlaybackKeyPair(const ImportPlaybackKeyPairRequest &request)
{
    return qobject_cast<ImportPlaybackKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about all channels in your account, in the Amazon Web Services region where the API request is
 * processed. This list can be filtered to match a specified name or recording-configuration ARN. Filters are mutually
 * exclusive and cannot be used together. If you try to use both filters, you will get an error (409
 */
ListChannelsResponse * IvsClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListPlaybackKeyPairsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about playback key pairs. For more information, see <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting Up Private Channels</a> in the
 * <i>Amazon IVS User
 */
ListPlaybackKeyPairsResponse * IvsClient::listPlaybackKeyPairs(const ListPlaybackKeyPairsRequest &request)
{
    return qobject_cast<ListPlaybackKeyPairsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListRecordingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about all recording configurations in your account, in the Amazon Web Services region where the
 * API request is
 */
ListRecordingConfigurationsResponse * IvsClient::listRecordingConfigurations(const ListRecordingConfigurationsRequest &request)
{
    return qobject_cast<ListRecordingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListStreamKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about stream keys for the specified
 */
ListStreamKeysResponse * IvsClient::listStreamKeys(const ListStreamKeysRequest &request)
{
    return qobject_cast<ListStreamKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListStreamSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a summary of current and previous streams for a specified channel in your account, in the AWS region where the API
 * request is
 */
ListStreamSessionsResponse * IvsClient::listStreamSessions(const ListStreamSessionsRequest &request)
{
    return qobject_cast<ListStreamSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about live streams in your account, in the Amazon Web Services region where the API request is
 */
ListStreamsResponse * IvsClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about Amazon Web Services tags for the specified
 */
ListTagsForResourceResponse * IvsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * PutMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inserts metadata into the active stream of the specified channel. At most 5 requests per second per channel are allowed,
 * each with a maximum 1 KB payload. (If 5 TPS is not sufficient for your needs, we recommend batching your data into a
 * single PutMetadata call.) At most 155 requests per second per account are allowed. Also see <a
 * href="https://docs.aws.amazon.com/ivs/latest/userguide/metadata.html">Embedding Metadata within a Video Stream</a> in
 * the <i>Amazon IVS User
 */
PutMetadataResponse * IvsClient::putMetadata(const PutMetadataRequest &request)
{
    return qobject_cast<PutMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * StopStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects the incoming RTMPS stream for the specified channel. Can be used in conjunction with <a>DeleteStreamKey</a>
 * to prevent further streaming to a
 *
 * channel> <note>
 *
 * Many streaming client-software libraries automatically reconnect a dropped RTMPS session, so to stop the stream
 * permanently, you may want to first revoke the <code>streamKey</code> attached to the
 */
StopStreamResponse * IvsClient::stopStream(const StopStreamRequest &request)
{
    return qobject_cast<StopStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for the Amazon Web Services resource with the specified
 */
TagResourceResponse * IvsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the resource with the specified
 */
UntagResourceResponse * IvsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a channel's configuration. This does not affect an ongoing stream of this channel. You must stop and restart the
 * stream for the changes to take
 */
UpdateChannelResponse * IvsClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * \class QtAws::Ivs::IvsClientPrivate
 * \brief The IvsClientPrivate class provides private implementation for IvsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIvs
 */

/*!
 * Constructs a IvsClientPrivate object with public implementation \a q.
 */
IvsClientPrivate::IvsClientPrivate(IvsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Ivs
} // namespace QtAws
