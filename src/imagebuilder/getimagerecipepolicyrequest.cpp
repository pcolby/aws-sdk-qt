// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagerecipepolicyrequest.h"
#include "getimagerecipepolicyrequest_p.h"
#include "getimagerecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageRecipePolicyRequest
 * \brief The GetImageRecipePolicyRequest class provides an interface for ImageBuilder GetImageRecipePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImageRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRecipePolicyRequest::GetImageRecipePolicyRequest(const GetImageRecipePolicyRequest &other)
    : ImageBuilderRequest(new GetImageRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRecipePolicyRequest object.
 */
GetImageRecipePolicyRequest::GetImageRecipePolicyRequest()
    : ImageBuilderRequest(new GetImageRecipePolicyRequestPrivate(ImageBuilderRequest::GetImageRecipePolicyAction, this))
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
 * \class QtAws::ImageBuilder::GetImageRecipePolicyRequestPrivate
 * \brief The GetImageRecipePolicyRequestPrivate class provides private implementation for GetImageRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageRecipePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImageRecipePolicyRequestPrivate::GetImageRecipePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetImageRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
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
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
