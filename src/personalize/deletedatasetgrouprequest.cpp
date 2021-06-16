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

#include "deletedatasetgrouprequest.h"
#include "deletedatasetgrouprequest_p.h"
#include "deletedatasetgroupresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupRequest
 * \brief The DeleteDatasetGroupRequest class provides an interface for Personalize DeleteDatasetGroup requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest(const DeleteDatasetGroupRequest &other)
    : PersonalizeRequest(new DeleteDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetGroupRequest object.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest()
    : PersonalizeRequest(new DeleteDatasetGroupRequestPrivate(PersonalizeRequest::DeleteDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupRequestPrivate
 * \brief The DeleteDatasetGroupRequestPrivate class provides private implementation for DeleteDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteDatasetGroupRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const PersonalizeRequest::Action action, DeleteDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetGroupRequest
 * class' copy constructor.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const DeleteDatasetGroupRequestPrivate &other, DeleteDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
