// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiosessionmappingrequest.h"
#include "deletestudiosessionmappingrequest_p.h"
#include "deletestudiosessionmappingresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioSessionMappingRequest
 * \brief The DeleteStudioSessionMappingRequest class provides an interface for Emr DeleteStudioSessionMapping requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudioSessionMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioSessionMappingRequest::DeleteStudioSessionMappingRequest(const DeleteStudioSessionMappingRequest &other)
    : EmrRequest(new DeleteStudioSessionMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioSessionMappingRequest object.
 */
DeleteStudioSessionMappingRequest::DeleteStudioSessionMappingRequest()
    : EmrRequest(new DeleteStudioSessionMappingRequestPrivate(EmrRequest::DeleteStudioSessionMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioSessionMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioSessionMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioSessionMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioSessionMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DeleteStudioSessionMappingRequestPrivate
 * \brief The DeleteStudioSessionMappingRequestPrivate class provides private implementation for DeleteStudioSessionMappingRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioSessionMappingRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DeleteStudioSessionMappingRequestPrivate::DeleteStudioSessionMappingRequestPrivate(
    const EmrRequest::Action action, DeleteStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioSessionMappingRequest
 * class' copy constructor.
 */
DeleteStudioSessionMappingRequestPrivate::DeleteStudioSessionMappingRequestPrivate(
    const DeleteStudioSessionMappingRequestPrivate &other, DeleteStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
