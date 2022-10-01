// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectorsrequest.h"
#include "getconnectorsrequest_p.h"
#include "getconnectorsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetConnectorsRequest
 * \brief The GetConnectorsRequest class provides an interface for Sms GetConnectors requests.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::getConnectors
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectorsRequest::GetConnectorsRequest(const GetConnectorsRequest &other)
    : SmsRequest(new GetConnectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectorsRequest object.
 */
GetConnectorsRequest::GetConnectorsRequest()
    : SmsRequest(new GetConnectorsRequestPrivate(SmsRequest::GetConnectorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectorsResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetConnectorsRequestPrivate
 * \brief The GetConnectorsRequestPrivate class provides private implementation for GetConnectorsRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetConnectorsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const SmsRequest::Action action, GetConnectorsRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectorsRequest
 * class' copy constructor.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const GetConnectorsRequestPrivate &other, GetConnectorsRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
