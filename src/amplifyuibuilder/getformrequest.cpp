// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getformrequest.h"
#include "getformrequest_p.h"
#include "getformresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetFormRequest
 * \brief The GetFormRequest class provides an interface for AmplifyUIBuilder GetForm requests.
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
 * \sa AmplifyUIBuilderClient::getForm
 */

/*!
 * Constructs a copy of \a other.
 */
GetFormRequest::GetFormRequest(const GetFormRequest &other)
    : AmplifyUIBuilderRequest(new GetFormRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFormRequest object.
 */
GetFormRequest::GetFormRequest()
    : AmplifyUIBuilderRequest(new GetFormRequestPrivate(AmplifyUIBuilderRequest::GetFormAction, this))
{

}

/*!
 * \reimp
 */
bool GetFormRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFormResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFormRequest::response(QNetworkReply * const reply) const
{
    return new GetFormResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetFormRequestPrivate
 * \brief The GetFormRequestPrivate class provides private implementation for GetFormRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetFormRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
GetFormRequestPrivate::GetFormRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, GetFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFormRequest
 * class' copy constructor.
 */
GetFormRequestPrivate::GetFormRequestPrivate(
    const GetFormRequestPrivate &other, GetFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
