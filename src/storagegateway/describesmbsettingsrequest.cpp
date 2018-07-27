/*
    Copyright 2013-2018 Paul Colby

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

#include "describesmbsettingsrequest.h"
#include "describesmbsettingsrequest_p.h"
#include "describesmbsettingsresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::DescribeSMBSettingsRequest
 * \brief The DescribeSMBSettingsRequest class provides an interface for StorageGateway DescribeSMBSettings requests.
 *
 * \inmodule QtAwsStorageGateway
 *
 *  <fullname>AWS Storage Gateway Service</fullname>
 * 
 *  AWS Storage Gateway is the service that connects an on-premises software appliance with cloud-based storage to provide
 *  seamless and secure integration between an organization's on-premises IT environment and AWS's storage infrastructure.
 *  The service enables you to securely upload data to the AWS cloud for cost effective backup and rapid disaster
 * 
 *  recovery>
 * 
 *  Use the following links to get started using the <i>AWS Storage Gateway Service API
 * 
 *  Reference</i>> <ul> <li>
 * 
 *  <a
 *  href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewayHTTPRequestsHeaders">AWS
 *  Storage Gateway Required Request Headers</a>: Describes the required headers that you must send with every POST request
 *  to AWS Storage
 * 
 *  Gateway> </li> <li>
 * 
 *  <a
 *  href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewaySigningRequests">Signing
 *  Requests</a>: AWS Storage Gateway requires that you authenticate every request you send; this topic describes how sign
 *  such a
 * 
 *  request> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#APIErrorResponses">Error
 *  Responses</a>: Provides reference information about AWS Storage Gateway
 * 
 *  errors> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/API_Operations.html">Operations in AWS Storage
 *  Gateway</a>: Contains detailed descriptions of all AWS Storage Gateway operations, their request parameters, response
 *  elements, possible errors, and examples of requests and
 * 
 *  responses> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS Storage Gateway Regions and
 *  Endpoints:</a> Provides a list of each region and endpoints available for use with AWS Storage Gateway.
 * 
 *  </p </li> </ul> <note>
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
 *  see <a href="https://aws.amazon.com/ec2/faqs/#longer-ids">Longer EC2 and EBS Resource IDs</a>.
 * 
 *  </p
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
 *  For more information, see <a href="https://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up – Longer
 *  AWS Storage Gateway volume and snapshot IDs coming in
 *
 * \sa StorageGatewayClient::describeSMBSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSMBSettingsRequest::DescribeSMBSettingsRequest(const DescribeSMBSettingsRequest &other)
    : StorageGatewayRequest(new DescribeSMBSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSMBSettingsRequest object.
 */
DescribeSMBSettingsRequest::DescribeSMBSettingsRequest()
    : StorageGatewayRequest(new DescribeSMBSettingsRequestPrivate(StorageGatewayRequest::DescribeSMBSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSMBSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSMBSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSMBSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSMBSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::StorageGateway::DescribeSMBSettingsRequestPrivate
 * \brief The DescribeSMBSettingsRequestPrivate class provides private implementation for DescribeSMBSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a DescribeSMBSettingsRequestPrivate object for StorageGateway \a action,
 * with public implementation \a q.
 */
DescribeSMBSettingsRequestPrivate::DescribeSMBSettingsRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeSMBSettingsRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSMBSettingsRequest
 * class' copy constructor.
 */
DescribeSMBSettingsRequestPrivate::DescribeSMBSettingsRequestPrivate(
    const DescribeSMBSettingsRequestPrivate &other, DescribeSMBSettingsRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
