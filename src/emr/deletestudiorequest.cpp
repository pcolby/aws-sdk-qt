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

#include "deletestudiorequest.h"
#include "deletestudiorequest_p.h"
#include "deletestudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioRequest
 * \brief The DeleteStudioRequest class provides an interface for Emr DeleteStudio requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudio
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioRequest::DeleteStudioRequest(const DeleteStudioRequest &other)
    : EmrRequest(new DeleteStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioRequest object.
 */
DeleteStudioRequest::DeleteStudioRequest()
    : EmrRequest(new DeleteStudioRequestPrivate(EmrRequest::DeleteStudioAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DeleteStudioRequestPrivate
 * \brief The DeleteStudioRequestPrivate class provides private implementation for DeleteStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const EmrRequest::Action action, DeleteStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioRequest
 * class' copy constructor.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const DeleteStudioRequestPrivate &other, DeleteStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
