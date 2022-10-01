// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteAppRequest
 * \brief The DeleteAppRequest class provides an interface for Amplify DeleteApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteApp
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : AmplifyRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : AmplifyRequest(new DeleteAppRequestPrivate(AmplifyRequest::DeleteAppAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteAppRequestPrivate
 * \brief The DeleteAppRequestPrivate class provides private implementation for DeleteAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const AmplifyRequest::Action action, DeleteAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
