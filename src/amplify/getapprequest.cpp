// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetAppRequest
 * \brief The GetAppRequest class provides an interface for Amplify GetApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getApp
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : AmplifyRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : AmplifyRequest(new GetAppRequestPrivate(AmplifyRequest::GetAppAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetAppRequestPrivate
 * \brief The GetAppRequestPrivate class provides private implementation for GetAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const AmplifyRequest::Action action, GetAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
