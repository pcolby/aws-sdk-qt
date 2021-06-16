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

#include "updateworldtemplaterequest.h"
#include "updateworldtemplaterequest_p.h"
#include "updateworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateRequest
 * \brief The UpdateWorldTemplateRequest class provides an interface for RoboMaker UpdateWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorldTemplateRequest::UpdateWorldTemplateRequest(const UpdateWorldTemplateRequest &other)
    : RoboMakerRequest(new UpdateWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorldTemplateRequest object.
 */
UpdateWorldTemplateRequest::UpdateWorldTemplateRequest()
    : RoboMakerRequest(new UpdateWorldTemplateRequestPrivate(RoboMakerRequest::UpdateWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateRequestPrivate
 * \brief The UpdateWorldTemplateRequestPrivate class provides private implementation for UpdateWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UpdateWorldTemplateRequestPrivate::UpdateWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, UpdateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorldTemplateRequest
 * class' copy constructor.
 */
UpdateWorldTemplateRequestPrivate::UpdateWorldTemplateRequestPrivate(
    const UpdateWorldTemplateRequestPrivate &other, UpdateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
