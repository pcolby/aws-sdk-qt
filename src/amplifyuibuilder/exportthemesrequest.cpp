// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportthemesrequest.h"
#include "exportthemesrequest_p.h"
#include "exportthemesresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportThemesRequest
 * \brief The ExportThemesRequest class provides an interface for AmplifyUIBuilder ExportThemes requests.
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
 * \sa AmplifyUIBuilderClient::exportThemes
 */

/*!
 * Constructs a copy of \a other.
 */
ExportThemesRequest::ExportThemesRequest(const ExportThemesRequest &other)
    : AmplifyUIBuilderRequest(new ExportThemesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportThemesRequest object.
 */
ExportThemesRequest::ExportThemesRequest()
    : AmplifyUIBuilderRequest(new ExportThemesRequestPrivate(AmplifyUIBuilderRequest::ExportThemesAction, this))
{

}

/*!
 * \reimp
 */
bool ExportThemesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportThemesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportThemesRequest::response(QNetworkReply * const reply) const
{
    return new ExportThemesResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportThemesRequestPrivate
 * \brief The ExportThemesRequestPrivate class provides private implementation for ExportThemesRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportThemesRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ExportThemesRequestPrivate::ExportThemesRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ExportThemesRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportThemesRequest
 * class' copy constructor.
 */
ExportThemesRequestPrivate::ExportThemesRequestPrivate(
    const ExportThemesRequestPrivate &other, ExportThemesRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
