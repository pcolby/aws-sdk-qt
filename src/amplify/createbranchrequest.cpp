// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbranchrequest.h"
#include "createbranchrequest_p.h"
#include "createbranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateBranchRequest
 * \brief The CreateBranchRequest class provides an interface for Amplify CreateBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createBranch
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBranchRequest::CreateBranchRequest(const CreateBranchRequest &other)
    : AmplifyRequest(new CreateBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBranchRequest object.
 */
CreateBranchRequest::CreateBranchRequest()
    : AmplifyRequest(new CreateBranchRequestPrivate(AmplifyRequest::CreateBranchAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBranchRequest::response(QNetworkReply * const reply) const
{
    return new CreateBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::CreateBranchRequestPrivate
 * \brief The CreateBranchRequestPrivate class provides private implementation for CreateBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
CreateBranchRequestPrivate::CreateBranchRequestPrivate(
    const AmplifyRequest::Action action, CreateBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBranchRequest
 * class' copy constructor.
 */
CreateBranchRequestPrivate::CreateBranchRequestPrivate(
    const CreateBranchRequestPrivate &other, CreateBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
