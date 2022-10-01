// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatarepositoryassociationrequest.h"
#include "updatedatarepositoryassociationrequest_p.h"
#include "updatedatarepositoryassociationresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateDataRepositoryAssociationRequest
 * \brief The UpdateDataRepositoryAssociationRequest class provides an interface for FSx UpdateDataRepositoryAssociation requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateDataRepositoryAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataRepositoryAssociationRequest::UpdateDataRepositoryAssociationRequest(const UpdateDataRepositoryAssociationRequest &other)
    : FSxRequest(new UpdateDataRepositoryAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataRepositoryAssociationRequest object.
 */
UpdateDataRepositoryAssociationRequest::UpdateDataRepositoryAssociationRequest()
    : FSxRequest(new UpdateDataRepositoryAssociationRequestPrivate(FSxRequest::UpdateDataRepositoryAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataRepositoryAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataRepositoryAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataRepositoryAssociationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataRepositoryAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::UpdateDataRepositoryAssociationRequestPrivate
 * \brief The UpdateDataRepositoryAssociationRequestPrivate class provides private implementation for UpdateDataRepositoryAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateDataRepositoryAssociationRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
UpdateDataRepositoryAssociationRequestPrivate::UpdateDataRepositoryAssociationRequestPrivate(
    const FSxRequest::Action action, UpdateDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataRepositoryAssociationRequest
 * class' copy constructor.
 */
UpdateDataRepositoryAssociationRequestPrivate::UpdateDataRepositoryAssociationRequestPrivate(
    const UpdateDataRepositoryAssociationRequestPrivate &other, UpdateDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
