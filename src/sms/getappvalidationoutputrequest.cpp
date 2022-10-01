// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappvalidationoutputrequest.h"
#include "getappvalidationoutputrequest_p.h"
#include "getappvalidationoutputresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetAppValidationOutputRequest
 * \brief The GetAppValidationOutputRequest class provides an interface for Sms GetAppValidationOutput requests.
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
 * \sa SmsClient::getAppValidationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppValidationOutputRequest::GetAppValidationOutputRequest(const GetAppValidationOutputRequest &other)
    : SmsRequest(new GetAppValidationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppValidationOutputRequest object.
 */
GetAppValidationOutputRequest::GetAppValidationOutputRequest()
    : SmsRequest(new GetAppValidationOutputRequestPrivate(SmsRequest::GetAppValidationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppValidationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppValidationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppValidationOutputRequest::response(QNetworkReply * const reply) const
{
    return new GetAppValidationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetAppValidationOutputRequestPrivate
 * \brief The GetAppValidationOutputRequestPrivate class provides private implementation for GetAppValidationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetAppValidationOutputRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetAppValidationOutputRequestPrivate::GetAppValidationOutputRequestPrivate(
    const SmsRequest::Action action, GetAppValidationOutputRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppValidationOutputRequest
 * class' copy constructor.
 */
GetAppValidationOutputRequestPrivate::GetAppValidationOutputRequestPrivate(
    const GetAppValidationOutputRequestPrivate &other, GetAppValidationOutputRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
