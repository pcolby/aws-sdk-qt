// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemerequest.h"
#include "updatethemerequest_p.h"
#include "updatethemeresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateThemeRequest
 * \brief The UpdateThemeRequest class provides an interface for AmplifyUIBuilder UpdateTheme requests.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 *
 *  The Amplify UI Builder API provides a programmatic interface for creating and configuring user interface (UI) component
 *  libraries and themes for use in your Amplify applications. You can then connect these UI components to an application's
 *  backend Amazon Web Services
 * 
 *  resources>
 * 
 *  You can also use the Amplify Studio visual designer to create UI components and model data for an app. For more
 *  information, see <a href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the <i>Amplify
 * 
 *  Docs</i>>
 * 
 *  The Amplify Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development.
 *  For more information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>. For more information about
 *  deploying an Amplify application to Amazon Web Services, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify User
 *
 * \sa AmplifyUIBuilderClient::updateTheme
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThemeRequest::UpdateThemeRequest(const UpdateThemeRequest &other)
    : AmplifyUIBuilderRequest(new UpdateThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThemeRequest object.
 */
UpdateThemeRequest::UpdateThemeRequest()
    : AmplifyUIBuilderRequest(new UpdateThemeRequestPrivate(AmplifyUIBuilderRequest::UpdateThemeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThemeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThemeResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateThemeRequestPrivate
 * \brief The UpdateThemeRequestPrivate class provides private implementation for UpdateThemeRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateThemeRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
UpdateThemeRequestPrivate::UpdateThemeRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, UpdateThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThemeRequest
 * class' copy constructor.
 */
UpdateThemeRequestPrivate::UpdateThemeRequestPrivate(
    const UpdateThemeRequestPrivate &other, UpdateThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
