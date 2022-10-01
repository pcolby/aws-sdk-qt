// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getqueryloggingconfigrequest.h"
#include "getqueryloggingconfigrequest_p.h"
#include "getqueryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigRequest
 * \brief The GetQueryLoggingConfigRequest class provides an interface for Route53 GetQueryLoggingConfig requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getQueryLoggingConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest(const GetQueryLoggingConfigRequest &other)
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryLoggingConfigRequest object.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest()
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(Route53Request::GetQueryLoggingConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryLoggingConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryLoggingConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigRequestPrivate
 * \brief The GetQueryLoggingConfigRequestPrivate class provides private implementation for GetQueryLoggingConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetQueryLoggingConfigRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, GetQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryLoggingConfigRequest
 * class' copy constructor.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const GetQueryLoggingConfigRequestPrivate &other, GetQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
