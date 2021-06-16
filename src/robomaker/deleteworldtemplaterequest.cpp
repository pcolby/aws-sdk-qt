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

#include "deleteworldtemplaterequest.h"
#include "deleteworldtemplaterequest_p.h"
#include "deleteworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateRequest
 * \brief The DeleteWorldTemplateRequest class provides an interface for RoboMaker DeleteWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorldTemplateRequest::DeleteWorldTemplateRequest(const DeleteWorldTemplateRequest &other)
    : RoboMakerRequest(new DeleteWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorldTemplateRequest object.
 */
DeleteWorldTemplateRequest::DeleteWorldTemplateRequest()
    : RoboMakerRequest(new DeleteWorldTemplateRequestPrivate(RoboMakerRequest::DeleteWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateRequestPrivate
 * \brief The DeleteWorldTemplateRequestPrivate class provides private implementation for DeleteWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteWorldTemplateRequestPrivate::DeleteWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, DeleteWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorldTemplateRequest
 * class' copy constructor.
 */
DeleteWorldTemplateRequestPrivate::DeleteWorldTemplateRequestPrivate(
    const DeleteWorldTemplateRequestPrivate &other, DeleteWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
