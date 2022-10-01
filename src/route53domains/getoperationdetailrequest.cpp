// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoperationdetailrequest.h"
#include "getoperationdetailrequest_p.h"
#include "getoperationdetailresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetOperationDetailRequest
 * \brief The GetOperationDetailRequest class provides an interface for Route53Domains GetOperationDetail requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getOperationDetail
 */

/*!
 * Constructs a copy of \a other.
 */
GetOperationDetailRequest::GetOperationDetailRequest(const GetOperationDetailRequest &other)
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOperationDetailRequest object.
 */
GetOperationDetailRequest::GetOperationDetailRequest()
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(Route53DomainsRequest::GetOperationDetailAction, this))
{

}

/*!
 * \reimp
 */
bool GetOperationDetailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOperationDetailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationDetailResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::GetOperationDetailRequestPrivate
 * \brief The GetOperationDetailRequestPrivate class provides private implementation for GetOperationDetailRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetOperationDetailRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const Route53DomainsRequest::Action action, GetOperationDetailRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOperationDetailRequest
 * class' copy constructor.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const GetOperationDetailRequestPrivate &other, GetOperationDetailRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
