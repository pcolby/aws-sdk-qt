// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequeryloggingconfigrequest.h"
#include "deletequeryloggingconfigrequest_p.h"
#include "deletequeryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigRequest
 * \brief The DeleteQueryLoggingConfigRequest class provides an interface for Route53 DeleteQueryLoggingConfig requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteQueryLoggingConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest(const DeleteQueryLoggingConfigRequest &other)
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQueryLoggingConfigRequest object.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest()
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(Route53Request::DeleteQueryLoggingConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQueryLoggingConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueryLoggingConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteQueryLoggingConfigRequestPrivate
 * \brief The DeleteQueryLoggingConfigRequestPrivate class provides private implementation for DeleteQueryLoggingConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteQueryLoggingConfigRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, DeleteQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueryLoggingConfigRequest
 * class' copy constructor.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const DeleteQueryLoggingConfigRequestPrivate &other, DeleteQueryLoggingConfigRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
