/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletedetectorrequest.h"
#include "deletedetectorrequest_p.h"
#include "deletedetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteDetectorRequest
 * \brief The DeleteDetectorRequest class provides an interface for GuardDuty DeleteDetector requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDetectorRequest::DeleteDetectorRequest(const DeleteDetectorRequest &other)
    : GuardDutyRequest(new DeleteDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDetectorRequest object.
 */
DeleteDetectorRequest::DeleteDetectorRequest()
    : GuardDutyRequest(new DeleteDetectorRequestPrivate(GuardDutyRequest::DeleteDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteDetectorRequestPrivate
 * \brief The DeleteDetectorRequestPrivate class provides private implementation for DeleteDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteDetectorRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const GuardDutyRequest::Action action, DeleteDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDetectorRequest
 * class' copy constructor.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const DeleteDetectorRequestPrivate &other, DeleteDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
