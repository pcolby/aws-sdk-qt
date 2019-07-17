/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteidentityrequest.h"
#include "deleteidentityrequest_p.h"
#include "deleteidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteIdentityRequest
 * \brief The DeleteIdentityRequest class provides an interface for SES DeleteIdentity requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::deleteIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityRequest::DeleteIdentityRequest(const DeleteIdentityRequest &other)
    : SesRequest(new DeleteIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityRequest object.
 */
DeleteIdentityRequest::DeleteIdentityRequest()
    : SesRequest(new DeleteIdentityRequestPrivate(SesRequest::DeleteIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::SES::DeleteIdentityRequestPrivate
 * \brief The DeleteIdentityRequestPrivate class provides private implementation for DeleteIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteIdentityRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const SesRequest::Action action, DeleteIdentityRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityRequest
 * class' copy constructor.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const DeleteIdentityRequestPrivate &other, DeleteIdentityRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
