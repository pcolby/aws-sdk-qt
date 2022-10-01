// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::CreateProjectRequest
 * \brief The CreateProjectRequest class provides an interface for LookoutVision CreateProject requests.
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
 * \sa LookoutVisionClient::createProject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : LookoutVisionRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : LookoutVisionRequest(new CreateProjectRequestPrivate(LookoutVisionRequest::CreateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::CreateProjectRequestPrivate
 * \brief The CreateProjectRequestPrivate class provides private implementation for CreateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a CreateProjectRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const LookoutVisionRequest::Action action, CreateProjectRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProjectRequest
 * class' copy constructor.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CreateProjectRequestPrivate &other, CreateProjectRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
