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

#include "createcomponentrequest.h"
#include "createcomponentrequest_p.h"
#include "createcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateComponentRequest
 * \brief The CreateComponentRequest class provides an interface for imagebuilder CreateComponent requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComponentRequest::CreateComponentRequest(const CreateComponentRequest &other)
    : imagebuilderRequest(new CreateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComponentRequest object.
 */
CreateComponentRequest::CreateComponentRequest()
    : imagebuilderRequest(new CreateComponentRequestPrivate(imagebuilderRequest::CreateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateComponentRequestPrivate
 * \brief The CreateComponentRequestPrivate class provides private implementation for CreateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateComponentRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const imagebuilderRequest::Action action, CreateComponentRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComponentRequest
 * class' copy constructor.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const CreateComponentRequestPrivate &other, CreateComponentRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
