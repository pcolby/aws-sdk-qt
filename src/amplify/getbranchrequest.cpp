// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbranchrequest.h"
#include "getbranchrequest_p.h"
#include "getbranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBranchRequest
 * \brief The GetBranchRequest class provides an interface for Amplify GetBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getBranch
 */

/*!
 * Constructs a copy of \a other.
 */
GetBranchRequest::GetBranchRequest(const GetBranchRequest &other)
    : AmplifyRequest(new GetBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBranchRequest object.
 */
GetBranchRequest::GetBranchRequest()
    : AmplifyRequest(new GetBranchRequestPrivate(AmplifyRequest::GetBranchAction, this))
{

}

/*!
 * \reimp
 */
bool GetBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBranchRequest::response(QNetworkReply * const reply) const
{
    return new GetBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetBranchRequestPrivate
 * \brief The GetBranchRequestPrivate class provides private implementation for GetBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const AmplifyRequest::Action action, GetBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBranchRequest
 * class' copy constructor.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const GetBranchRequestPrivate &other, GetBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
