// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetAppRequest
 * \brief The GetAppRequest class provides an interface for Sms GetApp requests.
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
 * \sa SmsClient::getApp
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : SmsRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : SmsRequest(new GetAppRequestPrivate(SmsRequest::GetAppAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetAppRequestPrivate
 * \brief The GetAppRequestPrivate class provides private implementation for GetAppRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetAppRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const SmsRequest::Action action, GetAppRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
