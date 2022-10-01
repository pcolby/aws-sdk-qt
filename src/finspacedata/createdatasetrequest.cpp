// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateDatasetRequest
 * \brief The CreateDatasetRequest class provides an interface for FinspaceData CreateDataset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createDataset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetRequest::CreateDatasetRequest(const CreateDatasetRequest &other)
    : FinspaceDataRequest(new CreateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetRequest object.
 */
CreateDatasetRequest::CreateDatasetRequest()
    : FinspaceDataRequest(new CreateDatasetRequestPrivate(FinspaceDataRequest::CreateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::CreateDatasetRequestPrivate
 * \brief The CreateDatasetRequestPrivate class provides private implementation for CreateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateDatasetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const FinspaceDataRequest::Action action, CreateDatasetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetRequest
 * class' copy constructor.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const CreateDatasetRequestPrivate &other, CreateDatasetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
