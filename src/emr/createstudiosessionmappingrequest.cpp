// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiosessionmappingrequest.h"
#include "createstudiosessionmappingrequest_p.h"
#include "createstudiosessionmappingresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateStudioSessionMappingRequest
 * \brief The CreateStudioSessionMappingRequest class provides an interface for Emr CreateStudioSessionMapping requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createStudioSessionMapping
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioSessionMappingRequest::CreateStudioSessionMappingRequest(const CreateStudioSessionMappingRequest &other)
    : EmrRequest(new CreateStudioSessionMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioSessionMappingRequest object.
 */
CreateStudioSessionMappingRequest::CreateStudioSessionMappingRequest()
    : EmrRequest(new CreateStudioSessionMappingRequestPrivate(EmrRequest::CreateStudioSessionMappingAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioSessionMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioSessionMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioSessionMappingRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioSessionMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::CreateStudioSessionMappingRequestPrivate
 * \brief The CreateStudioSessionMappingRequestPrivate class provides private implementation for CreateStudioSessionMappingRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateStudioSessionMappingRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
CreateStudioSessionMappingRequestPrivate::CreateStudioSessionMappingRequestPrivate(
    const EmrRequest::Action action, CreateStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioSessionMappingRequest
 * class' copy constructor.
 */
CreateStudioSessionMappingRequestPrivate::CreateStudioSessionMappingRequestPrivate(
    const CreateStudioSessionMappingRequestPrivate &other, CreateStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
