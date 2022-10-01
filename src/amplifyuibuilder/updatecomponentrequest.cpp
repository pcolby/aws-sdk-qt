// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponentrequest.h"
#include "updatecomponentrequest_p.h"
#include "updatecomponentresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateComponentRequest
 * \brief The UpdateComponentRequest class provides an interface for AmplifyUIBuilder UpdateComponent requests.
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
 * \sa AmplifyUIBuilderClient::updateComponent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComponentRequest::UpdateComponentRequest(const UpdateComponentRequest &other)
    : AmplifyUIBuilderRequest(new UpdateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComponentRequest object.
 */
UpdateComponentRequest::UpdateComponentRequest()
    : AmplifyUIBuilderRequest(new UpdateComponentRequestPrivate(AmplifyUIBuilderRequest::UpdateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComponentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateComponentRequestPrivate
 * \brief The UpdateComponentRequestPrivate class provides private implementation for UpdateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateComponentRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
UpdateComponentRequestPrivate::UpdateComponentRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, UpdateComponentRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComponentRequest
 * class' copy constructor.
 */
UpdateComponentRequestPrivate::UpdateComponentRequestPrivate(
    const UpdateComponentRequestPrivate &other, UpdateComponentRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
