// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DeleteProjectRequest
 * \brief The DeleteProjectRequest class provides an interface for LookoutVision DeleteProject requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::deleteProject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : LookoutVisionRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : LookoutVisionRequest(new DeleteProjectRequestPrivate(LookoutVisionRequest::DeleteProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::DeleteProjectRequestPrivate
 * \brief The DeleteProjectRequestPrivate class provides private implementation for DeleteProjectRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DeleteProjectRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const LookoutVisionRequest::Action action, DeleteProjectRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
