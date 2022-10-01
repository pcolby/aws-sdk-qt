// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createthemerequest.h"
#include "createthemerequest_p.h"
#include "createthemeresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::CreateThemeRequest
 * \brief The CreateThemeRequest class provides an interface for AmplifyUIBuilder CreateTheme requests.
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
 * \sa AmplifyUIBuilderClient::createTheme
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThemeRequest::CreateThemeRequest(const CreateThemeRequest &other)
    : AmplifyUIBuilderRequest(new CreateThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThemeRequest object.
 */
CreateThemeRequest::CreateThemeRequest()
    : AmplifyUIBuilderRequest(new CreateThemeRequestPrivate(AmplifyUIBuilderRequest::CreateThemeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThemeRequest::response(QNetworkReply * const reply) const
{
    return new CreateThemeResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::CreateThemeRequestPrivate
 * \brief The CreateThemeRequestPrivate class provides private implementation for CreateThemeRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a CreateThemeRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
CreateThemeRequestPrivate::CreateThemeRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, CreateThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThemeRequest
 * class' copy constructor.
 */
CreateThemeRequestPrivate::CreateThemeRequestPrivate(
    const CreateThemeRequestPrivate &other, CreateThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
