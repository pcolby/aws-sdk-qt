// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbranchesrequest.h"
#include "listbranchesrequest_p.h"
#include "listbranchesresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBranchesRequest
 * \brief The ListBranchesRequest class provides an interface for Amplify ListBranches requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listBranches
 */

/*!
 * Constructs a copy of \a other.
 */
ListBranchesRequest::ListBranchesRequest(const ListBranchesRequest &other)
    : AmplifyRequest(new ListBranchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBranchesRequest object.
 */
ListBranchesRequest::ListBranchesRequest()
    : AmplifyRequest(new ListBranchesRequestPrivate(AmplifyRequest::ListBranchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBranchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBranchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBranchesRequest::response(QNetworkReply * const reply) const
{
    return new ListBranchesResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListBranchesRequestPrivate
 * \brief The ListBranchesRequestPrivate class provides private implementation for ListBranchesRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBranchesRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const AmplifyRequest::Action action, ListBranchesRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBranchesRequest
 * class' copy constructor.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const ListBranchesRequestPrivate &other, ListBranchesRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
