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

#include "cancelstepsrequest.h"
#include "cancelstepsrequest_p.h"
#include "cancelstepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CancelStepsRequest
 * \brief The CancelStepsRequest class provides an interface for EMR CancelSteps requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::cancelSteps
 */

/*!
 * Constructs a copy of \a other.
 */
CancelStepsRequest::CancelStepsRequest(const CancelStepsRequest &other)
    : EmrRequest(new CancelStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelStepsRequest object.
 */
CancelStepsRequest::CancelStepsRequest()
    : EmrRequest(new CancelStepsRequestPrivate(EmrRequest::CancelStepsAction, this))
{

}

/*!
 * \reimp
 */
bool CancelStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelStepsRequest::response(QNetworkReply * const reply) const
{
    return new CancelStepsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::CancelStepsRequestPrivate
 * \brief The CancelStepsRequestPrivate class provides private implementation for CancelStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a CancelStepsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const EmrRequest::Action action, CancelStepsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelStepsRequest
 * class' copy constructor.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const CancelStepsRequestPrivate &other, CancelStepsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
