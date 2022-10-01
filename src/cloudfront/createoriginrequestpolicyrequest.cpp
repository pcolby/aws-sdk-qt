// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoriginrequestpolicyrequest.h"
#include "createoriginrequestpolicyrequest_p.h"
#include "createoriginrequestpolicyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateOriginRequestPolicyRequest
 * \brief The CreateOriginRequestPolicyRequest class provides an interface for CloudFront CreateOriginRequestPolicy requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createOriginRequestPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOriginRequestPolicyRequest::CreateOriginRequestPolicyRequest(const CreateOriginRequestPolicyRequest &other)
    : CloudFrontRequest(new CreateOriginRequestPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOriginRequestPolicyRequest object.
 */
CreateOriginRequestPolicyRequest::CreateOriginRequestPolicyRequest()
    : CloudFrontRequest(new CreateOriginRequestPolicyRequestPrivate(CloudFrontRequest::CreateOriginRequestPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOriginRequestPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOriginRequestPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOriginRequestPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateOriginRequestPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateOriginRequestPolicyRequestPrivate
 * \brief The CreateOriginRequestPolicyRequestPrivate class provides private implementation for CreateOriginRequestPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateOriginRequestPolicyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateOriginRequestPolicyRequestPrivate::CreateOriginRequestPolicyRequestPrivate(
    const CloudFrontRequest::Action action, CreateOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOriginRequestPolicyRequest
 * class' copy constructor.
 */
CreateOriginRequestPolicyRequestPrivate::CreateOriginRequestPolicyRequestPrivate(
    const CreateOriginRequestPolicyRequestPrivate &other, CreateOriginRequestPolicyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
