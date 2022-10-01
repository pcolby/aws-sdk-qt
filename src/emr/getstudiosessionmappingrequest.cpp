// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiosessionmappingrequest.h"
#include "getstudiosessionmappingrequest_p.h"
#include "getstudiosessionmappingresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetStudioSessionMappingRequest
 * \brief The GetStudioSessionMappingRequest class provides an interface for Emr GetStudioSessionMapping requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getStudioSessionMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioSessionMappingRequest::GetStudioSessionMappingRequest(const GetStudioSessionMappingRequest &other)
    : EmrRequest(new GetStudioSessionMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioSessionMappingRequest object.
 */
GetStudioSessionMappingRequest::GetStudioSessionMappingRequest()
    : EmrRequest(new GetStudioSessionMappingRequestPrivate(EmrRequest::GetStudioSessionMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioSessionMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioSessionMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioSessionMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioSessionMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::GetStudioSessionMappingRequestPrivate
 * \brief The GetStudioSessionMappingRequestPrivate class provides private implementation for GetStudioSessionMappingRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetStudioSessionMappingRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
GetStudioSessionMappingRequestPrivate::GetStudioSessionMappingRequestPrivate(
    const EmrRequest::Action action, GetStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioSessionMappingRequest
 * class' copy constructor.
 */
GetStudioSessionMappingRequestPrivate::GetStudioSessionMappingRequestPrivate(
    const GetStudioSessionMappingRequestPrivate &other, GetStudioSessionMappingRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
