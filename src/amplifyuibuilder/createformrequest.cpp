// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createformrequest.h"
#include "createformrequest_p.h"
#include "createformresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::CreateFormRequest
 * \brief The CreateFormRequest class provides an interface for AmplifyUIBuilder CreateForm requests.
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
 * \sa AmplifyUIBuilderClient::createForm
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFormRequest::CreateFormRequest(const CreateFormRequest &other)
    : AmplifyUIBuilderRequest(new CreateFormRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFormRequest object.
 */
CreateFormRequest::CreateFormRequest()
    : AmplifyUIBuilderRequest(new CreateFormRequestPrivate(AmplifyUIBuilderRequest::CreateFormAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFormRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFormResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFormRequest::response(QNetworkReply * const reply) const
{
    return new CreateFormResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::CreateFormRequestPrivate
 * \brief The CreateFormRequestPrivate class provides private implementation for CreateFormRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a CreateFormRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
CreateFormRequestPrivate::CreateFormRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, CreateFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFormRequest
 * class' copy constructor.
 */
CreateFormRequestPrivate::CreateFormRequestPrivate(
    const CreateFormRequestPrivate &other, CreateFormRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
