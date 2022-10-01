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

#include "liststudiosessionmappingsrequest.h"
#include "liststudiosessionmappingsrequest_p.h"
#include "liststudiosessionmappingsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStudioSessionMappingsRequest
 * \brief The ListStudioSessionMappingsRequest class provides an interface for Emr ListStudioSessionMappings requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudioSessionMappings
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioSessionMappingsRequest::ListStudioSessionMappingsRequest(const ListStudioSessionMappingsRequest &other)
    : EmrRequest(new ListStudioSessionMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioSessionMappingsRequest object.
 */
ListStudioSessionMappingsRequest::ListStudioSessionMappingsRequest()
    : EmrRequest(new ListStudioSessionMappingsRequestPrivate(EmrRequest::ListStudioSessionMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioSessionMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioSessionMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioSessionMappingsRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioSessionMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListStudioSessionMappingsRequestPrivate
 * \brief The ListStudioSessionMappingsRequestPrivate class provides private implementation for ListStudioSessionMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStudioSessionMappingsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListStudioSessionMappingsRequestPrivate::ListStudioSessionMappingsRequestPrivate(
    const EmrRequest::Action action, ListStudioSessionMappingsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioSessionMappingsRequest
 * class' copy constructor.
 */
ListStudioSessionMappingsRequestPrivate::ListStudioSessionMappingsRequestPrivate(
    const ListStudioSessionMappingsRequestPrivate &other, ListStudioSessionMappingsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
