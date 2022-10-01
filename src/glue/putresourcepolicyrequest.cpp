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

#include "putresourcepolicyrequest.h"
#include "putresourcepolicyrequest_p.h"
#include "putresourcepolicyresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutResourcePolicyRequest
 * \brief The PutResourcePolicyRequest class provides an interface for Glue PutResourcePolicy requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::putResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest(const PutResourcePolicyRequest &other)
    : GlueRequest(new PutResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourcePolicyRequest object.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest()
    : GlueRequest(new PutResourcePolicyRequestPrivate(GlueRequest::PutResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::PutResourcePolicyRequestPrivate
 * \brief The PutResourcePolicyRequestPrivate class provides private implementation for PutResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutResourcePolicyRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const GlueRequest::Action action, PutResourcePolicyRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourcePolicyRequest
 * class' copy constructor.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const PutResourcePolicyRequestPrivate &other, PutResourcePolicyRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
