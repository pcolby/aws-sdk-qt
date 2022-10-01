// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebranchrequest.h"
#include "updatebranchrequest_p.h"
#include "updatebranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateBranchRequest
 * \brief The UpdateBranchRequest class provides an interface for Amplify UpdateBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateBranch
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBranchRequest::UpdateBranchRequest(const UpdateBranchRequest &other)
    : AmplifyRequest(new UpdateBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBranchRequest object.
 */
UpdateBranchRequest::UpdateBranchRequest()
    : AmplifyRequest(new UpdateBranchRequestPrivate(AmplifyRequest::UpdateBranchAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBranchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateBranchRequestPrivate
 * \brief The UpdateBranchRequestPrivate class provides private implementation for UpdateBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateBranchRequestPrivate::UpdateBranchRequestPrivate(
    const AmplifyRequest::Action action, UpdateBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBranchRequest
 * class' copy constructor.
 */
UpdateBranchRequestPrivate::UpdateBranchRequestPrivate(
    const UpdateBranchRequestPrivate &other, UpdateBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
