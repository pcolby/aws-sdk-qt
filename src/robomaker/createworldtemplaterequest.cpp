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

#include "createworldtemplaterequest.h"
#include "createworldtemplaterequest_p.h"
#include "createworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateRequest
 * \brief The CreateWorldTemplateRequest class provides an interface for RoboMaker CreateWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorldTemplateRequest::CreateWorldTemplateRequest(const CreateWorldTemplateRequest &other)
    : RoboMakerRequest(new CreateWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorldTemplateRequest object.
 */
CreateWorldTemplateRequest::CreateWorldTemplateRequest()
    : RoboMakerRequest(new CreateWorldTemplateRequestPrivate(RoboMakerRequest::CreateWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateRequestPrivate
 * \brief The CreateWorldTemplateRequestPrivate class provides private implementation for CreateWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateWorldTemplateRequestPrivate::CreateWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, CreateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorldTemplateRequest
 * class' copy constructor.
 */
CreateWorldTemplateRequestPrivate::CreateWorldTemplateRequestPrivate(
    const CreateWorldTemplateRequestPrivate &other, CreateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
