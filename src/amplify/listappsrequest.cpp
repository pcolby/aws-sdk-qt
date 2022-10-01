// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappsrequest.h"
#include "listappsrequest_p.h"
#include "listappsresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListAppsRequest
 * \brief The ListAppsRequest class provides an interface for Amplify ListApps requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listApps
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppsRequest::ListAppsRequest(const ListAppsRequest &other)
    : AmplifyRequest(new ListAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppsRequest object.
 */
ListAppsRequest::ListAppsRequest()
    : AmplifyRequest(new ListAppsRequestPrivate(AmplifyRequest::ListAppsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppsResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListAppsRequestPrivate
 * \brief The ListAppsRequestPrivate class provides private implementation for ListAppsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListAppsRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const AmplifyRequest::Action action, ListAppsRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppsRequest
 * class' copy constructor.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const ListAppsRequestPrivate &other, ListAppsRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
