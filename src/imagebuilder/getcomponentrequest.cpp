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

#include "getcomponentrequest.h"
#include "getcomponentrequest_p.h"
#include "getcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetComponentRequest
 * \brief The GetComponentRequest class provides an interface for imagebuilder GetComponent requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getComponent
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentRequest::GetComponentRequest(const GetComponentRequest &other)
    : imagebuilderRequest(new GetComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentRequest object.
 */
GetComponentRequest::GetComponentRequest()
    : imagebuilderRequest(new GetComponentRequestPrivate(imagebuilderRequest::GetComponentAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetComponentRequestPrivate
 * \brief The GetComponentRequestPrivate class provides private implementation for GetComponentRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetComponentRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const imagebuilderRequest::Action action, GetComponentRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentRequest
 * class' copy constructor.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const GetComponentRequestPrivate &other, GetComponentRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
