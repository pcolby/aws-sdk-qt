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

#include "createdatasetgrouprequest.h"
#include "createdatasetgrouprequest_p.h"
#include "createdatasetgroupresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetGroupRequest
 * \brief The CreateDatasetGroupRequest class provides an interface for Personalize CreateDatasetGroup requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest(const CreateDatasetGroupRequest &other)
    : PersonalizeRequest(new CreateDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetGroupRequest object.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest()
    : PersonalizeRequest(new CreateDatasetGroupRequestPrivate(PersonalizeRequest::CreateDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateDatasetGroupRequestPrivate
 * \brief The CreateDatasetGroupRequestPrivate class provides private implementation for CreateDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetGroupRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const PersonalizeRequest::Action action, CreateDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetGroupRequest
 * class' copy constructor.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const CreateDatasetGroupRequestPrivate &other, CreateDatasetGroupRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
