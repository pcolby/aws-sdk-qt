// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponentpolicyrequest.h"
#include "getcomponentpolicyrequest_p.h"
#include "getcomponentpolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyRequest
 * \brief The GetComponentPolicyRequest class provides an interface for ImageBuilder GetComponentPolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponentPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentPolicyRequest::GetComponentPolicyRequest(const GetComponentPolicyRequest &other)
    : ImageBuilderRequest(new GetComponentPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentPolicyRequest object.
 */
GetComponentPolicyRequest::GetComponentPolicyRequest()
    : ImageBuilderRequest(new GetComponentPolicyRequestPrivate(ImageBuilderRequest::GetComponentPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyRequestPrivate
 * \brief The GetComponentPolicyRequestPrivate class provides private implementation for GetComponentPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentPolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetComponentPolicyRequestPrivate::GetComponentPolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentPolicyRequest
 * class' copy constructor.
 */
GetComponentPolicyRequestPrivate::GetComponentPolicyRequestPrivate(
    const GetComponentPolicyRequestPrivate &other, GetComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
