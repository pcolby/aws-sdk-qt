// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatarepositoryassociationrequest.h"
#include "createdatarepositoryassociationrequest_p.h"
#include "createdatarepositoryassociationresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateDataRepositoryAssociationRequest
 * \brief The CreateDataRepositoryAssociationRequest class provides an interface for FSx CreateDataRepositoryAssociation requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createDataRepositoryAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataRepositoryAssociationRequest::CreateDataRepositoryAssociationRequest(const CreateDataRepositoryAssociationRequest &other)
    : FSxRequest(new CreateDataRepositoryAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataRepositoryAssociationRequest object.
 */
CreateDataRepositoryAssociationRequest::CreateDataRepositoryAssociationRequest()
    : FSxRequest(new CreateDataRepositoryAssociationRequestPrivate(FSxRequest::CreateDataRepositoryAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataRepositoryAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataRepositoryAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataRepositoryAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataRepositoryAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateDataRepositoryAssociationRequestPrivate
 * \brief The CreateDataRepositoryAssociationRequestPrivate class provides private implementation for CreateDataRepositoryAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateDataRepositoryAssociationRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateDataRepositoryAssociationRequestPrivate::CreateDataRepositoryAssociationRequestPrivate(
    const FSxRequest::Action action, CreateDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataRepositoryAssociationRequest
 * class' copy constructor.
 */
CreateDataRepositoryAssociationRequestPrivate::CreateDataRepositoryAssociationRequestPrivate(
    const CreateDataRepositoryAssociationRequestPrivate &other, CreateDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
