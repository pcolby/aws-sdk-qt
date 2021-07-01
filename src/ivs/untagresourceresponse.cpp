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

#include "untagresourceresponse.h"
#include "untagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IVS {

/*!
 * \class QtAws::IVS::UntagResourceResponse
 * \brief The UntagResourceResponse class provides an interace for IVS UntagResource responses.
 *
 * \inmodule QtAwsIVS
 *
 *  <b>Introduction</b>
 * 
 *  </p
 * 
 *  The Amazon Interactive Video Service (IVS) API is REST compatible, using a standard HTTP API and an AWS EventBridge
 *  event stream for responses. JSON is used for both requests and responses, including
 * 
 *  errors>
 * 
 *  The API is an AWS regional service, currently in these regions: us-west-2, us-east-1, and
 * 
 *  eu-west-1>
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
 *  <b>Service Endpoints</b>
 * 
 *  </p
 * 
 *  The following are the Amazon IVS service endpoints (all HTTPS):
 * 
 *  </p
 * 
 *  Region name: US West
 * 
 *  (Oregon> <ul> <li>
 * 
 *  Region: <code>us-west-2</code>
 * 
 *  </p </li> <li>
 * 
 *  Endpoint: <code>ivs.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  Region name: US East
 * 
 *  (Virginia> <ul> <li>
 * 
 *  Region: <code>us-east-1</code>
 * 
 *  </p </li> <li>
 * 
 *  Endpoint: <code>ivs.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  Region name: EU West
 * 
 *  (Dublin> <ul> <li>
 * 
 *  Region: <code>eu-west-1</code>
 * 
 *  </p </li> <li>
 * 
 *  Endpoint: <code>ivs.eu-west-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
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
 *  A <i>tag</i> is a metadata label that you assign to an AWS resource. A tag comprises a <i>key</i> and a <i>value</i>,
 *  both set by you. For example, you might set a tag as <code>topic:nature</code> to label a particular video category. See
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS Resources</a> for more information,
 *  including restrictions that apply to
 * 
 *  tags>
 * 
 *  Tags can help you identify and organize your AWS resources. For example, you can use the same tag for different
 *  resources to indicate that they are related. You can also use tags to manage access (see <a
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
 *  <i>Authorization</i> is about granting permissions. You need to be authorized to view <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Amazon IVS private channels</a>. (Private
 *  channels are channels that are enabled for "playback
 * 
 *  authorization."> </li> </ul>
 * 
 *  <b>Authentication</b>
 * 
 *  </p
 * 
 *  All Amazon IVS API requests must be authenticated with a signature. The AWS Command-Line Interface (CLI) and Amazon IVS
 *  Player SDKs take care of signing the underlying API calls for you. However, if your application calls the Amazon IVS API
 *  directly, it’s your responsibility to sign the
 * 
 *  requests>
 * 
 *  You generate a signature using valid AWS credentials that have permission to perform the requested action. For example,
 *  you must sign PutMetadata requests with a signature generated from an IAM user account that has the
 *  <code>ivs:PutMetadata</code>
 * 
 *  permission>
 * 
 *  For more
 * 
 *  information> <ul> <li>
 * 
 *  Authentication and generating signatures — See <a
 *  href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating Requests (AWS
 *  Signature Version 4)</a> in the <i>AWS General
 * 
 *  Reference</i>> </li> <li>
 * 
 *  Managing Amazon IVS permissions — See <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity and Access Management</a> on the
 *  Security page of the <i>Amazon IVS User
 * 
 *  Guide</i>> </li> </ul>
 * 
 *  <b>Channel Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateChannel</a> — Creates a new channel and an associated stream key to start
 * 
 *  streaming> </li> <li>
 * 
 *  <a>GetChannel</a> — Gets the channel configuration for the specified channel ARN (Amazon Resource
 * 
 *  Name)> </li> <li>
 * 
 *  <a>BatchGetChannel</a> — Performs <a>GetChannel</a> on multiple ARNs
 * 
 *  simultaneously> </li> <li>
 * 
 *  <a>ListChannels</a> — Gets summary information about all channels in your account, in the AWS region where the API
 *  request is processed. This list can be filtered to match a specified name or recording-configuration ARN. Filters are
 *  mutually exclusive and cannot be used together. If you try to use both filters, you will get an error (409 Conflict
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
 *  <a>ListStreams</a> — Gets summary information about live streams in your account, in the AWS region where the API
 *  request is
 * 
 *  processed> </li> <li>
 * 
 *  <a>StopStream</a> — Disconnects the incoming RTMPS stream for the specified channel. Can be used in conjunction with
 *  <a>DeleteStreamKey</a> to prevent further streaming to a
 * 
 *  channel> </li> <li>
 * 
 *  <a>PutMetadata</a> — Inserts metadata into the active stream of the specified channel. A maximum of 5 requests per
 *  second per channel is allowed, each with a maximum 1 KB payload. (If 5 TPS is not sufficient for your needs, we
 *  recommend batching your data into a single PutMetadata
 * 
 *  call.> </li> </ul>
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
 *  AWS region where the API request is
 * 
 *  processed> </li> <li>
 * 
 *  <a>DeleteRecordingConfiguration</a> — Deletes the recording configuration for the specified
 * 
 *  ARN> </li> </ul>
 * 
 *  <b>AWS Tags Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>TagResource</a> — Adds or updates tags for the AWS resource with the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>UntagResource</a> — Removes tags from the resource with the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>ListTagsForResource</a> — Gets information about AWS tags for the specified
 *
 * \sa IvsClient::untagResource
 */

/*!
 * Constructs a UntagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UntagResourceResponse::UntagResourceResponse(
        const UntagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IvsResponse(new UntagResourceResponsePrivate(this), parent)
{
    setRequest(new UntagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagResourceRequest * UntagResourceResponse::request() const
{
    Q_D(const UntagResourceResponse);
    return static_cast<const UntagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IVS UntagResource \a response.
 */
void UntagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IVS::UntagResourceResponsePrivate
 * \brief The UntagResourceResponsePrivate class provides private implementation for UntagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsIVS
 */

/*!
 * Constructs a UntagResourceResponsePrivate object with public implementation \a q.
 */
UntagResourceResponsePrivate::UntagResourceResponsePrivate(
    UntagResourceResponse * const q) : IvsResponsePrivate(q)
{

}

/*!
 * Parses a IVS UntagResource response element from \a xml.
 */
void UntagResourceResponsePrivate::parseUntagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IVS
} // namespace QtAws
