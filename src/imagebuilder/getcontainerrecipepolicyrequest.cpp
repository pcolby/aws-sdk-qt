// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontainerrecipepolicyrequest.h"
#include "getcontainerrecipepolicyrequest_p.h"
#include "getcontainerrecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyRequest
 * \brief The GetContainerRecipePolicyRequest class provides an interface for ImageBuilder GetContainerRecipePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getContainerRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContainerRecipePolicyRequest::GetContainerRecipePolicyRequest(const GetContainerRecipePolicyRequest &other)
    : ImageBuilderRequest(new GetContainerRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContainerRecipePolicyRequest object.
 */
GetContainerRecipePolicyRequest::GetContainerRecipePolicyRequest()
    : ImageBuilderRequest(new GetContainerRecipePolicyRequestPrivate(ImageBuilderRequest::GetContainerRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContainerRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContainerRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContainerRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyRequestPrivate
 * \brief The GetContainerRecipePolicyRequestPrivate class provides private implementation for GetContainerRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetContainerRecipePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetContainerRecipePolicyRequestPrivate::GetContainerRecipePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContainerRecipePolicyRequest
 * class' copy constructor.
 */
GetContainerRecipePolicyRequestPrivate::GetContainerRecipePolicyRequestPrivate(
    const GetContainerRecipePolicyRequestPrivate &other, GetContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
