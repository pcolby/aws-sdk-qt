// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changeresourcerecordsetsrequest.h"
#include "changeresourcerecordsetsrequest_p.h"
#include "changeresourcerecordsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsRequest
 * \brief The ChangeResourceRecordSetsRequest class provides an interface for Route53 ChangeResourceRecordSets requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::changeResourceRecordSets
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest(const ChangeResourceRecordSetsRequest &other)
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeResourceRecordSetsRequest object.
 */
ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest()
    : Route53Request(new ChangeResourceRecordSetsRequestPrivate(Route53Request::ChangeResourceRecordSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeResourceRecordSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangeResourceRecordSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeResourceRecordSetsRequest::response(QNetworkReply * const reply) const
{
    return new ChangeResourceRecordSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ChangeResourceRecordSetsRequestPrivate
 * \brief The ChangeResourceRecordSetsRequestPrivate class provides private implementation for ChangeResourceRecordSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeResourceRecordSetsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const Route53Request::Action action, ChangeResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangeResourceRecordSetsRequest
 * class' copy constructor.
 */
ChangeResourceRecordSetsRequestPrivate::ChangeResourceRecordSetsRequestPrivate(
    const ChangeResourceRecordSetsRequestPrivate &other, ChangeResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
