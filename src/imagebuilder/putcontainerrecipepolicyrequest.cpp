// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontainerrecipepolicyrequest.h"
#include "putcontainerrecipepolicyrequest_p.h"
#include "putcontainerrecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutContainerRecipePolicyRequest
 * \brief The PutContainerRecipePolicyRequest class provides an interface for ImageBuilder PutContainerRecipePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putContainerRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContainerRecipePolicyRequest::PutContainerRecipePolicyRequest(const PutContainerRecipePolicyRequest &other)
    : ImageBuilderRequest(new PutContainerRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContainerRecipePolicyRequest object.
 */
PutContainerRecipePolicyRequest::PutContainerRecipePolicyRequest()
    : ImageBuilderRequest(new PutContainerRecipePolicyRequestPrivate(ImageBuilderRequest::PutContainerRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContainerRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContainerRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContainerRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContainerRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::PutContainerRecipePolicyRequestPrivate
 * \brief The PutContainerRecipePolicyRequestPrivate class provides private implementation for PutContainerRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutContainerRecipePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
PutContainerRecipePolicyRequestPrivate::PutContainerRecipePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, PutContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContainerRecipePolicyRequest
 * class' copy constructor.
 */
PutContainerRecipePolicyRequestPrivate::PutContainerRecipePolicyRequestPrivate(
    const PutContainerRecipePolicyRequestPrivate &other, PutContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
