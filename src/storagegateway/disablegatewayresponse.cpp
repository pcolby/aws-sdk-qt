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

#include "disablegatewayresponse.h"
#include "disablegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::DisableGatewayResponse
 * \brief The DisableGatewayResponse class provides an interace for StorageGateway DisableGateway responses.
 *
 * \inmodule QtAwsStorageGateway
 *
 *  <fullname>AWS Storage Gateway Service</fullname>
 * 
 *  AWS Storage Gateway is the service that connects an on-premises software appliance with cloud-based storage to provide
 *  seamless and secure integration between an organization's on-premises IT environment and the AWS storage infrastructure.
 *  The service enables you to securely upload data to the AWS Cloud for cost effective backup and rapid disaster
 * 
 *  recovery>
 * 
 *  Use the following links to get started using the <i>AWS Storage Gateway Service API
 * 
 *  Reference</i>> <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewayHTTPRequestsHeaders">AWS
 *  Storage Gateway required request headers</a>: Describes the required headers that you must send with every POST request
 *  to AWS Storage
 * 
 *  Gateway> </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewaySigningRequests">Signing
 *  requests</a>: AWS Storage Gateway requires that you authenticate every request you send; this topic describes how sign
 *  such a
 * 
 *  request> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#APIErrorResponses">Error
 *  responses</a>: Provides reference information about AWS Storage Gateway
 * 
 *  errors> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/storagegateway/latest/APIReference/API_Operations.html">Operations in AWS Storage
 *  Gateway</a>: Contains detailed descriptions of all AWS Storage Gateway operations, their request parameters, response
 *  elements, possible errors, and examples of requests and
 * 
 *  responses> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/sg.html">AWS Storage Gateway endpoints and quotas</a>: Provides a
 *  list of each AWS Region and the endpoints available for use with AWS Storage
 * 
 *  Gateway> </li> </ul> <note>
 * 
 *  AWS Storage Gateway resource IDs are in uppercase. When you use these resource IDs with the Amazon EC2 API, EC2 expects
 *  resource IDs in lowercase. You must change your resource ID to lowercase to use it with the EC2 API. For example, in
 *  Storage Gateway the ID for a volume might be <code>vol-AA22BB012345DAF670</code>. When you use this ID with the EC2 API,
 *  you must change it to <code>vol-aa22bb012345daf670</code>. Otherwise, the EC2 API might not behave as
 * 
 *  expected> </note> <b>
 * 
 *  IDs for Storage Gateway volumes and Amazon EBS snapshots created from gateway volumes are changing to a longer format.
 *  Starting in December 2016, all new volumes and snapshots will be created with a 17-character string. Starting in April
 *  2016, you will be able to use these longer IDs so you can test your systems with the new format. For more information,
 *  see <a href="http://aws.amazon.com/ec2/faqs/#longer-ids">Longer EC2 and EBS resource
 * 
 *  IDs</a>>
 * 
 *  For example, a volume Amazon Resource Name (ARN) with the longer volume ID format looks like the
 * 
 *  following>
 * 
 * 
 *  <code>arn:aws:storagegateway:us-west-2:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABBCCDDEEFFG</code>>
 * 
 *  A snapshot ID with the longer ID format looks like the following:
 * 
 *  <code>snap-78e226633445566ee</code>>
 * 
 *  For more information, see <a href="http://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up – Longer AWS
 *  Storage Gateway volume and snapshot IDs coming in
 *
 * \sa StorageGatewayClient::disableGateway
 */

/*!
 * Constructs a DisableGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DisableGatewayResponse::DisableGatewayResponse(
        const DisableGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DisableGatewayResponsePrivate(this), parent)
{
    setRequest(new DisableGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableGatewayRequest * DisableGatewayResponse::request() const
{
    return static_cast<const DisableGatewayRequest *>(StorageGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful StorageGateway DisableGateway \a response.
 */
void DisableGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::StorageGateway::DisableGatewayResponsePrivate
 * \brief The DisableGatewayResponsePrivate class provides private implementation for DisableGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a DisableGatewayResponsePrivate object with public implementation \a q.
 */
DisableGatewayResponsePrivate::DisableGatewayResponsePrivate(
    DisableGatewayResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/*!
 * Parses a StorageGateway DisableGateway response element from \a xml.
 */
void DisableGatewayResponsePrivate::parseDisableGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace StorageGateway
} // namespace QtAws
