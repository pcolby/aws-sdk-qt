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

#include "createlenssharerequest.h"
#include "createlenssharerequest_p.h"
#include "createlensshareresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateLensShareRequest
 * \brief The CreateLensShareRequest class provides an interface for WellArchitected CreateLensShare requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::createLensShare
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLensShareRequest::CreateLensShareRequest(const CreateLensShareRequest &other)
    : WellArchitectedRequest(new CreateLensShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLensShareRequest object.
 */
CreateLensShareRequest::CreateLensShareRequest()
    : WellArchitectedRequest(new CreateLensShareRequestPrivate(WellArchitectedRequest::CreateLensShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLensShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLensShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLensShareRequest::response(QNetworkReply * const reply) const
{
    return new CreateLensShareResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::CreateLensShareRequestPrivate
 * \brief The CreateLensShareRequestPrivate class provides private implementation for CreateLensShareRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateLensShareRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
CreateLensShareRequestPrivate::CreateLensShareRequestPrivate(
    const WellArchitectedRequest::Action action, CreateLensShareRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLensShareRequest
 * class' copy constructor.
 */
CreateLensShareRequestPrivate::CreateLensShareRequestPrivate(
    const CreateLensShareRequestPrivate &other, CreateLensShareRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
