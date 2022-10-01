// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "launchapprequest.h"
#include "launchapprequest_p.h"
#include "launchappresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::LaunchAppRequest
 * \brief The LaunchAppRequest class provides an interface for Sms LaunchApp requests.
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
 * \sa SmsClient::launchApp
 */

/*!
 * Constructs a copy of \a other.
 */
LaunchAppRequest::LaunchAppRequest(const LaunchAppRequest &other)
    : SmsRequest(new LaunchAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a LaunchAppRequest object.
 */
LaunchAppRequest::LaunchAppRequest()
    : SmsRequest(new LaunchAppRequestPrivate(SmsRequest::LaunchAppAction, this))
{

}

/*!
 * \reimp
 */
bool LaunchAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a LaunchAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * LaunchAppRequest::response(QNetworkReply * const reply) const
{
    return new LaunchAppResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::LaunchAppRequestPrivate
 * \brief The LaunchAppRequestPrivate class provides private implementation for LaunchAppRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a LaunchAppRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
LaunchAppRequestPrivate::LaunchAppRequestPrivate(
    const SmsRequest::Action action, LaunchAppRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the LaunchAppRequest
 * class' copy constructor.
 */
LaunchAppRequestPrivate::LaunchAppRequestPrivate(
    const LaunchAppRequestPrivate &other, LaunchAppRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
