// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportformsrequest.h"
#include "exportformsrequest_p.h"
#include "exportformsresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportFormsRequest
 * \brief The ExportFormsRequest class provides an interface for AmplifyUIBuilder ExportForms requests.
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
 * \sa AmplifyUIBuilderClient::exportForms
 */

/*!
 * Constructs a copy of \a other.
 */
ExportFormsRequest::ExportFormsRequest(const ExportFormsRequest &other)
    : AmplifyUIBuilderRequest(new ExportFormsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportFormsRequest object.
 */
ExportFormsRequest::ExportFormsRequest()
    : AmplifyUIBuilderRequest(new ExportFormsRequestPrivate(AmplifyUIBuilderRequest::ExportFormsAction, this))
{

}

/*!
 * \reimp
 */
bool ExportFormsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportFormsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportFormsRequest::response(QNetworkReply * const reply) const
{
    return new ExportFormsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportFormsRequestPrivate
 * \brief The ExportFormsRequestPrivate class provides private implementation for ExportFormsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportFormsRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ExportFormsRequestPrivate::ExportFormsRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ExportFormsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportFormsRequest
 * class' copy constructor.
 */
ExportFormsRequestPrivate::ExportFormsRequestPrivate(
    const ExportFormsRequestPrivate &other, ExportFormsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
