/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "retrievedomainauthcoderequest.h"
#include "retrievedomainauthcoderequest_p.h"
#include "retrievedomainauthcoderesponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeRequest
 * \brief The RetrieveDomainAuthCodeRequest class provides an interface for Route53Domains RetrieveDomainAuthCode requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::retrieveDomainAuthCode
 */

/*!
 * Constructs a copy of \a other.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest(const RetrieveDomainAuthCodeRequest &other)
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetrieveDomainAuthCodeRequest object.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest()
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(Route53DomainsRequest::RetrieveDomainAuthCodeAction, this))
{

}

/*!
 * \reimp
 */
bool RetrieveDomainAuthCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetrieveDomainAuthCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetrieveDomainAuthCodeRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveDomainAuthCodeResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeRequestPrivate
 * \brief The RetrieveDomainAuthCodeRequestPrivate class provides private implementation for RetrieveDomainAuthCodeRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 *
 * Constructs a RetrieveDomainAuthCodeRequestPrivate object for Route53Domains \a action with,
 * public implementation \a q.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const Route53DomainsRequest::Action action, RetrieveDomainAuthCodeRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetrieveDomainAuthCodeRequest
 * class' copy constructor.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const RetrieveDomainAuthCodeRequestPrivate &other, RetrieveDomainAuthCodeRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
