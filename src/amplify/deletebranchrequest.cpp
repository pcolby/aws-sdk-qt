// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebranchrequest.h"
#include "deletebranchrequest_p.h"
#include "deletebranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBranchRequest
 * \brief The DeleteBranchRequest class provides an interface for Amplify DeleteBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteBranch
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBranchRequest::DeleteBranchRequest(const DeleteBranchRequest &other)
    : AmplifyRequest(new DeleteBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBranchRequest object.
 */
DeleteBranchRequest::DeleteBranchRequest()
    : AmplifyRequest(new DeleteBranchRequestPrivate(AmplifyRequest::DeleteBranchAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBranchRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteBranchRequestPrivate
 * \brief The DeleteBranchRequestPrivate class provides private implementation for DeleteBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteBranchRequestPrivate::DeleteBranchRequestPrivate(
    const AmplifyRequest::Action action, DeleteBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBranchRequest
 * class' copy constructor.
 */
DeleteBranchRequestPrivate::DeleteBranchRequestPrivate(
    const DeleteBranchRequestPrivate &other, DeleteBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
