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

#include "createstudiosessionmappingrequest.h"
#include "createstudiosessionmappingrequest_p.h"
#include "createstudiosessionmappingresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CreateStudioSessionMappingRequest
 * \brief The CreateStudioSessionMappingRequest class provides an interface for EMR CreateStudioSessionMapping requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
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
 * \class QtAws::EMR::CreateStudioSessionMappingRequestPrivate
 * \brief The CreateStudioSessionMappingRequestPrivate class provides private implementation for CreateStudioSessionMappingRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
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

} // namespace EMR
} // namespace QtAws
