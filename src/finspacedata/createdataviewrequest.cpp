// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
