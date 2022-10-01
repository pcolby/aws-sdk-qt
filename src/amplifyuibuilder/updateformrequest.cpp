// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateformrequest.h"
#include "updateformrequest_p.h"
#include "updateformresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateFormRequest
 * \brief The UpdateFormRequest class provides an interface for AmplifyUIBuilder UpdateForm requests.
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
 * \sa AmplifyUIBuilderClient::updateForm
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFormRequest::UpdateFormRequest(const UpdateFormRequest &other)
    : AmplifyUIBuilderRequest(new UpdateFormRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFormRequest object.
 */
UpdateFormRequest::UpdateFormRequest()
    : AmplifyUIBuilderRequest(new UpdateFormRequestPrivate(AmplifyUIBuilderRequest::UpdateFormAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFormRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFormResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFormRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFormResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::UpdateFormRequestPrivate
 * \brief The UpdateFormRequestPrivate class provides private implementation for UpdateFormRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a UpdateFormRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
UpdateFormRequestPrivate::UpdateFormRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, UpdateFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFormRequest
 * class' copy constructor.
 */
UpdateFormRequestPrivate::UpdateFormRequestPrivate(
    const UpdateFormRequestPrivate &other, UpdateFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
