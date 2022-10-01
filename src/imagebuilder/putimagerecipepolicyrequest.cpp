// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
