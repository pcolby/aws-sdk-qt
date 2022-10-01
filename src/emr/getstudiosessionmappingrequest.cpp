/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
