/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getmaciesessionrequest.h"
#include "getmaciesessionrequest_p.h"
#include "getmaciesessionresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetMacieSessionRequest
 * \brief The GetMacieSessionRequest class provides an interface for Macie2 GetMacieSession requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getMacieSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetMacieSessionRequest::GetMacieSessionRequest(const GetMacieSessionRequest &other)
    : Macie2Request(new GetMacieSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMacieSessionRequest object.
 */
GetMacieSessionRequest::GetMacieSessionRequest()
    : Macie2Request(new GetMacieSessionRequestPrivate(Macie2Request::GetMacieSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetMacieSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMacieSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMacieSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetMacieSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetMacieSessionRequestPrivate
 * \brief The GetMacieSessionRequestPrivate class provides private implementation for GetMacieSessionRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetMacieSessionRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetMacieSessionRequestPrivate::GetMacieSessionRequestPrivate(
    const Macie2Request::Action action, GetMacieSessionRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMacieSessionRequest
 * class' copy constructor.
 */
GetMacieSessionRequestPrivate::GetMacieSessionRequestPrivate(
    const GetMacieSessionRequestPrivate &other, GetMacieSessionRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
