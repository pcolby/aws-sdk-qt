// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapprequest.h"
#include "updateapprequest_p.h"
#include "updateappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateAppRequest
 * \brief The UpdateAppRequest class provides an interface for Amplify UpdateApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateApp
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppRequest::UpdateAppRequest(const UpdateAppRequest &other)
    : AmplifyRequest(new UpdateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppRequest object.
 */
UpdateAppRequest::UpdateAppRequest()
    : AmplifyRequest(new UpdateAppRequestPrivate(AmplifyRequest::UpdateAppAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateAppRequestPrivate
 * \brief The UpdateAppRequestPrivate class provides private implementation for UpdateAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const AmplifyRequest::Action action, UpdateAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppRequest
 * class' copy constructor.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const UpdateAppRequestPrivate &other, UpdateAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
