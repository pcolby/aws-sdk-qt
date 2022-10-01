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

#include "updatestudiorequest.h"
#include "updatestudiorequest_p.h"
#include "updatestudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::UpdateStudioRequest
 * \brief The UpdateStudioRequest class provides an interface for Emr UpdateStudio requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudio
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioRequest::UpdateStudioRequest(const UpdateStudioRequest &other)
    : EmrRequest(new UpdateStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioRequest object.
 */
UpdateStudioRequest::UpdateStudioRequest()
    : EmrRequest(new UpdateStudioRequestPrivate(EmrRequest::UpdateStudioAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::UpdateStudioRequestPrivate
 * \brief The UpdateStudioRequestPrivate class provides private implementation for UpdateStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a UpdateStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const EmrRequest::Action action, UpdateStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioRequest
 * class' copy constructor.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const UpdateStudioRequestPrivate &other, UpdateStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
