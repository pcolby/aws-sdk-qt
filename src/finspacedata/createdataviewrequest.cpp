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

#include "createdataviewrequest.h"
#include "createdataviewrequest_p.h"
#include "createdataviewresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateDataViewRequest
 * \brief The CreateDataViewRequest class provides an interface for FinspaceData CreateDataView requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createDataView
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataViewRequest::CreateDataViewRequest(const CreateDataViewRequest &other)
    : FinspaceDataRequest(new CreateDataViewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataViewRequest object.
 */
CreateDataViewRequest::CreateDataViewRequest()
    : FinspaceDataRequest(new CreateDataViewRequestPrivate(FinspaceDataRequest::CreateDataViewAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataViewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataViewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataViewRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataViewResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::CreateDataViewRequestPrivate
 * \brief The CreateDataViewRequestPrivate class provides private implementation for CreateDataViewRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateDataViewRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
CreateDataViewRequestPrivate::CreateDataViewRequestPrivate(
    const FinspaceDataRequest::Action action, CreateDataViewRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataViewRequest
 * class' copy constructor.
 */
CreateDataViewRequestPrivate::CreateDataViewRequestPrivate(
    const CreateDataViewRequestPrivate &other, CreateDataViewRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
