// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyappvalidationoutputrequest.h"
#include "notifyappvalidationoutputrequest_p.h"
#include "notifyappvalidationoutputresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::NotifyAppValidationOutputRequest
 * \brief The NotifyAppValidationOutputRequest class provides an interface for Sms NotifyAppValidationOutput requests.
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
 * \sa SmsClient::notifyAppValidationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyAppValidationOutputRequest::NotifyAppValidationOutputRequest(const NotifyAppValidationOutputRequest &other)
    : SmsRequest(new NotifyAppValidationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyAppValidationOutputRequest object.
 */
NotifyAppValidationOutputRequest::NotifyAppValidationOutputRequest()
    : SmsRequest(new NotifyAppValidationOutputRequestPrivate(SmsRequest::NotifyAppValidationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyAppValidationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyAppValidationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyAppValidationOutputRequest::response(QNetworkReply * const reply) const
{
    return new NotifyAppValidationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::NotifyAppValidationOutputRequestPrivate
 * \brief The NotifyAppValidationOutputRequestPrivate class provides private implementation for NotifyAppValidationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a NotifyAppValidationOutputRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
NotifyAppValidationOutputRequestPrivate::NotifyAppValidationOutputRequestPrivate(
    const SmsRequest::Action action, NotifyAppValidationOutputRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyAppValidationOutputRequest
 * class' copy constructor.
 */
NotifyAppValidationOutputRequestPrivate::NotifyAppValidationOutputRequestPrivate(
    const NotifyAppValidationOutputRequestPrivate &other, NotifyAppValidationOutputRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
