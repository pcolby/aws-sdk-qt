// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudiosessionmappingrequest.h"
#include "updatestudiosessionmappingrequest_p.h"
#include "updatestudiosessionmappingresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingRequest
 * \brief The UpdateStudioSessionMappingRequest class provides an interface for Emr UpdateStudioSessionMapping requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudioSessionMapping
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioSessionMappingRequest::UpdateStudioSessionMappingRequest(const UpdateStudioSessionMappingRequest &other)
    : EmrRequest(new UpdateStudioSessionMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioSessionMappingRequest object.
 */
UpdateStudioSessionMappingRequest::UpdateStudioSessionMappingRequest()
    : EmrRequest(new UpdateStudioSessionMappingRequestPrivate(EmrRequest::UpdateStudioSessionMappingAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioSessionMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioSessionMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioSessionMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioSessionMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingRequestPrivate
 * \brief The UpdateStudioSessionMappingRequestPrivate class provides private implementation for UpdateStudioSessionMappingRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a UpdateStudioSessionMappingRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
UpdateStudioSessionMappingRequestPrivate::UpdateStudioSessionMappingRequestPrivate(
    const EmrRequest::Action action, UpdateStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioSessionMappingRequest
 * class' copy constructor.
 */
UpdateStudioSessionMappingRequestPrivate::UpdateStudioSessionMappingRequestPrivate(
    const UpdateStudioSessionMappingRequestPrivate &other, UpdateStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
