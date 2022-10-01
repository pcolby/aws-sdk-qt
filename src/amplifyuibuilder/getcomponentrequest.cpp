// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponentrequest.h"
#include "getcomponentrequest_p.h"
#include "getcomponentresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetComponentRequest
 * \brief The GetComponentRequest class provides an interface for AmplifyUIBuilder GetComponent requests.
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
 * \sa AmplifyUIBuilderClient::getComponent
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentRequest::GetComponentRequest(const GetComponentRequest &other)
    : AmplifyUIBuilderRequest(new GetComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentRequest object.
 */
GetComponentRequest::GetComponentRequest()
    : AmplifyUIBuilderRequest(new GetComponentRequestPrivate(AmplifyUIBuilderRequest::GetComponentAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetComponentRequestPrivate
 * \brief The GetComponentRequestPrivate class provides private implementation for GetComponentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetComponentRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, GetComponentRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentRequest
 * class' copy constructor.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const GetComponentRequestPrivate &other, GetComponentRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
