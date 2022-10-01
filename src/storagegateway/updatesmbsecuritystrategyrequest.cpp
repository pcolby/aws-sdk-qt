// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesmbsecuritystrategyrequest.h"
#include "updatesmbsecuritystrategyrequest_p.h"
#include "updatesmbsecuritystrategyresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::UpdateSMBSecurityStrategyRequest
 * \brief The UpdateSMBSecurityStrategyRequest class provides an interface for StorageGateway UpdateSMBSecurityStrategy requests.
 *
 * \inmodule QtAwsStorageGateway
 *
 *  <fullname>Storage Gateway Service</fullname>
 * 
 *  Storage Gateway is the service that connects an on-premises software appliance with cloud-based storage to provide
 *  seamless and secure integration between an organization's on-premises IT environment and the Amazon Web Services storage
 *  infrastructure. The service enables you to securely upload data to the Amazon Web Services Cloud for cost effective
 *  backup and rapid disaster
 * 
 *  recovery>
 * 
 *  Use the following links to get started using the <i>Storage Gateway Service API
 * 
 *  Reference</i>> <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewayHTTPRequestsHeaders">Storage
 *  Gateway required request headers</a>: Describes the required headers that you must send with every POST request to
 *  Storage
 * 
 *  Gateway> </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewaySigningRequests">Signing
 *  requests</a>: Storage Gateway requires that you authenticate every request you send; this topic describes how sign such
 *  a
 * 
 *  request> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#APIErrorResponses">Error
 *  responses</a>: Provides reference information about Storage Gateway
 * 
 *  errors> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/storagegateway/latest/APIReference/API_Operations.html">Operations in Storage
 *  Gateway</a>: Contains detailed descriptions of all Storage Gateway operations, their request parameters, response
 *  elements, possible errors, and examples of requests and
 * 
 *  responses> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/sg.html">Storage Gateway endpoints and quotas</a>: Provides a
 *  list of each Amazon Web Services Region and the endpoints available for use with Storage
 * 
 *  Gateway> </li> </ul> <note>
 * 
 *  Storage Gateway resource IDs are in uppercase. When you use these resource IDs with the Amazon EC2 API, EC2 expects
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
 *  For more information, see <a href="http://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up – Longer
 *  Storage Gateway volume and snapshot IDs coming in
 *
 * \sa StorageGatewayClient::updateSMBSecurityStrategy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSMBSecurityStrategyRequest::UpdateSMBSecurityStrategyRequest(const UpdateSMBSecurityStrategyRequest &other)
    : StorageGatewayRequest(new UpdateSMBSecurityStrategyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSMBSecurityStrategyRequest object.
 */
UpdateSMBSecurityStrategyRequest::UpdateSMBSecurityStrategyRequest()
    : StorageGatewayRequest(new UpdateSMBSecurityStrategyRequestPrivate(StorageGatewayRequest::UpdateSMBSecurityStrategyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSMBSecurityStrategyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSMBSecurityStrategyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSMBSecurityStrategyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSMBSecurityStrategyResponse(*this, reply);
}

/*!
 * \class QtAws::StorageGateway::UpdateSMBSecurityStrategyRequestPrivate
 * \brief The UpdateSMBSecurityStrategyRequestPrivate class provides private implementation for UpdateSMBSecurityStrategyRequest.
 * \internal
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a UpdateSMBSecurityStrategyRequestPrivate object for StorageGateway \a action,
 * with public implementation \a q.
 */
UpdateSMBSecurityStrategyRequestPrivate::UpdateSMBSecurityStrategyRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateSMBSecurityStrategyRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSMBSecurityStrategyRequest
 * class' copy constructor.
 */
UpdateSMBSecurityStrategyRequestPrivate::UpdateSMBSecurityStrategyRequestPrivate(
    const UpdateSMBSecurityStrategyRequestPrivate &other, UpdateSMBSecurityStrategyRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
