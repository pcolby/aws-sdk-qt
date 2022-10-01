// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcomponentpolicyrequest.h"
#include "putcomponentpolicyrequest_p.h"
#include "putcomponentpolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyRequest
 * \brief The PutComponentPolicyRequest class provides an interface for ImageBuilder PutComponentPolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putComponentPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest(const PutComponentPolicyRequest &other)
    : ImageBuilderRequest(new PutComponentPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutComponentPolicyRequest object.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest()
    : ImageBuilderRequest(new PutComponentPolicyRequestPrivate(ImageBuilderRequest::PutComponentPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutComponentPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutComponentPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutComponentPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutComponentPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyRequestPrivate
 * \brief The PutComponentPolicyRequestPrivate class provides private implementation for PutComponentPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutComponentPolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
PutComponentPolicyRequestPrivate::PutComponentPolicyRequestPrivate(
    const ImageBuilderRequest::Action action, PutComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutComponentPolicyRequest
 * class' copy constructor.
 */
PutComponentPolicyRequestPrivate::PutComponentPolicyRequestPrivate(
    const PutComponentPolicyRequestPrivate &other, PutComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
