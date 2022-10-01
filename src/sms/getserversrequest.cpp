// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserversrequest.h"
#include "getserversrequest_p.h"
#include "getserversresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetServersRequest
 * \brief The GetServersRequest class provides an interface for Sms GetServers requests.
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
 * \sa SmsClient::getServers
 */

/*!
 * Constructs a copy of \a other.
 */
GetServersRequest::GetServersRequest(const GetServersRequest &other)
    : SmsRequest(new GetServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServersRequest object.
 */
GetServersRequest::GetServersRequest()
    : SmsRequest(new GetServersRequestPrivate(SmsRequest::GetServersAction, this))
{

}

/*!
 * \reimp
 */
bool GetServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServersRequest::response(QNetworkReply * const reply) const
{
    return new GetServersResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetServersRequestPrivate
 * \brief The GetServersRequestPrivate class provides private implementation for GetServersRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetServersRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const SmsRequest::Action action, GetServersRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServersRequest
 * class' copy constructor.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const GetServersRequestPrivate &other, GetServersRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
