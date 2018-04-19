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

#include "createdetectorrequest.h"
#include "createdetectorrequest_p.h"
#include "createdetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateDetectorRequest
 * \brief The CreateDetectorRequest class provides an interface for GuardDuty CreateDetector requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createDetector
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDetectorRequest::CreateDetectorRequest(const CreateDetectorRequest &other)
    : GuardDutyRequest(new CreateDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDetectorRequest object.
 */
CreateDetectorRequest::CreateDetectorRequest()
    : GuardDutyRequest(new CreateDetectorRequestPrivate(GuardDutyRequest::CreateDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDetectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateDetectorRequestPrivate
 * \brief The CreateDetectorRequestPrivate class provides private implementation for CreateDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a CreateDetectorRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
CreateDetectorRequestPrivate::CreateDetectorRequestPrivate(
    const GuardDutyRequest::Action action, CreateDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDetectorRequest
 * class' copy constructor.
 */
CreateDetectorRequestPrivate::CreateDetectorRequestPrivate(
    const CreateDetectorRequestPrivate &other, CreateDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
