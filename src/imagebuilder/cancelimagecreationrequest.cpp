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

#include "cancelimagecreationrequest.h"
#include "cancelimagecreationrequest_p.h"
#include "cancelimagecreationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CancelImageCreationRequest
 * \brief The CancelImageCreationRequest class provides an interface for imagebuilder CancelImageCreation requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::cancelImageCreation
 */

/*!
 * Constructs a copy of \a other.
 */
CancelImageCreationRequest::CancelImageCreationRequest(const CancelImageCreationRequest &other)
    : imagebuilderRequest(new CancelImageCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelImageCreationRequest object.
 */
CancelImageCreationRequest::CancelImageCreationRequest()
    : imagebuilderRequest(new CancelImageCreationRequestPrivate(imagebuilderRequest::CancelImageCreationAction, this))
{

}

/*!
 * \reimp
 */
bool CancelImageCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelImageCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelImageCreationRequest::response(QNetworkReply * const reply) const
{
    return new CancelImageCreationResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CancelImageCreationRequestPrivate
 * \brief The CancelImageCreationRequestPrivate class provides private implementation for CancelImageCreationRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CancelImageCreationRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CancelImageCreationRequestPrivate::CancelImageCreationRequestPrivate(
    const imagebuilderRequest::Action action, CancelImageCreationRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelImageCreationRequest
 * class' copy constructor.
 */
CancelImageCreationRequestPrivate::CancelImageCreationRequestPrivate(
    const CancelImageCreationRequestPrivate &other, CancelImageCreationRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
