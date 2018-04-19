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

#include "setvisibletoallusersrequest.h"
#include "setvisibletoallusersrequest_p.h"
#include "setvisibletoallusersresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::SetVisibleToAllUsersRequest
 * \brief The SetVisibleToAllUsersRequest class provides an interface for EMR SetVisibleToAllUsers requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::setVisibleToAllUsers
 */

/*!
 * Constructs a copy of \a other.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest(const SetVisibleToAllUsersRequest &other)
    : EMRRequest(new SetVisibleToAllUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetVisibleToAllUsersRequest object.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest()
    : EMRRequest(new SetVisibleToAllUsersRequestPrivate(EMRRequest::SetVisibleToAllUsersAction, this))
{

}

/*!
 * \reimp
 */
bool SetVisibleToAllUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetVisibleToAllUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetVisibleToAllUsersRequest::response(QNetworkReply * const reply) const
{
    return new SetVisibleToAllUsersResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::SetVisibleToAllUsersRequestPrivate
 * \brief The SetVisibleToAllUsersRequestPrivate class provides private implementation for SetVisibleToAllUsersRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a SetVisibleToAllUsersRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const EMRRequest::Action action, SetVisibleToAllUsersRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetVisibleToAllUsersRequest
 * class' copy constructor.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const SetVisibleToAllUsersRequestPrivate &other, SetVisibleToAllUsersRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
