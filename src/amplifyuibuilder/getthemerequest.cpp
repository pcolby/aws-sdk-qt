// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthemerequest.h"
#include "getthemerequest_p.h"
#include "getthemeresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetThemeRequest
 * \brief The GetThemeRequest class provides an interface for AmplifyUIBuilder GetTheme requests.
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
 * \sa AmplifyUIBuilderClient::getTheme
 */

/*!
 * Constructs a copy of \a other.
 */
GetThemeRequest::GetThemeRequest(const GetThemeRequest &other)
    : AmplifyUIBuilderRequest(new GetThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThemeRequest object.
 */
GetThemeRequest::GetThemeRequest()
    : AmplifyUIBuilderRequest(new GetThemeRequestPrivate(AmplifyUIBuilderRequest::GetThemeAction, this))
{

}

/*!
 * \reimp
 */
bool GetThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThemeRequest::response(QNetworkReply * const reply) const
{
    return new GetThemeResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetThemeRequestPrivate
 * \brief The GetThemeRequestPrivate class provides private implementation for GetThemeRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetThemeRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
GetThemeRequestPrivate::GetThemeRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, GetThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThemeRequest
 * class' copy constructor.
 */
GetThemeRequestPrivate::GetThemeRequestPrivate(
    const GetThemeRequestPrivate &other, GetThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
