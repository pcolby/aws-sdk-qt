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

#include "putimagerecipepolicyrequest.h"
#include "putimagerecipepolicyrequest_p.h"
#include "putimagerecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutImageRecipePolicyRequest
 * \brief The PutImageRecipePolicyRequest class provides an interface for ImageBuilder PutImageRecipePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putImageRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageRecipePolicyRequest::PutImageRecipePolicyRequest(const PutImageRecipePolicyRequest &other)
    : ImageBuilderRequest(new PutImageRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageRecipePolicyRequest object.
 */
PutImageRecipePolicyRequest::PutImageRecipePolicyRequest()
    : ImageBuilderRequest(new PutImageRecipePolicyRequestPrivate(ImageBuilderRequest::PutImageRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutImageRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::PutImageRecipePolicyRequestPrivate
 * \brief The PutImageRecipePolicyRequestPrivate class provides private implementation for PutImageRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutImageRecipePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
PutImageRecipePolicyRequestPrivate::PutImageRecipePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, PutImageRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageRecipePolicyRequest
 * class' copy constructor.
 */
PutImageRecipePolicyRequestPrivate::PutImageRecipePolicyRequestPrivate(
    const PutImageRecipePolicyRequestPrivate &other, PutImageRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
