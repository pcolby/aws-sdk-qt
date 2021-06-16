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

#include "getimagerecipepolicyrequest.h"
#include "getimagerecipepolicyrequest_p.h"
#include "getimagerecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImageRecipePolicyRequest
 * \brief The GetImageRecipePolicyRequest class provides an interface for imagebuilder GetImageRecipePolicy requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImageRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRecipePolicyRequest::GetImageRecipePolicyRequest(const GetImageRecipePolicyRequest &other)
    : imagebuilderRequest(new GetImageRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRecipePolicyRequest object.
 */
GetImageRecipePolicyRequest::GetImageRecipePolicyRequest()
    : imagebuilderRequest(new GetImageRecipePolicyRequestPrivate(imagebuilderRequest::GetImageRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetImageRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImageRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImageRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetImageRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetImageRecipePolicyRequestPrivate
 * \brief The GetImageRecipePolicyRequestPrivate class provides private implementation for GetImageRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImageRecipePolicyRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetImageRecipePolicyRequestPrivate::GetImageRecipePolicyRequestPrivate(
    const imagebuilderRequest::Action action, GetImageRecipePolicyRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImageRecipePolicyRequest
 * class' copy constructor.
 */
GetImageRecipePolicyRequestPrivate::GetImageRecipePolicyRequestPrivate(
    const GetImageRecipePolicyRequestPrivate &other, GetImageRecipePolicyRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
