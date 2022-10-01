// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listformsrequest.h"
#include "listformsrequest_p.h"
#include "listformsresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListFormsRequest
 * \brief The ListFormsRequest class provides an interface for AmplifyUIBuilder ListForms requests.
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
 * \sa AmplifyUIBuilderClient::listForms
 */

/*!
 * Constructs a copy of \a other.
 */
ListFormsRequest::ListFormsRequest(const ListFormsRequest &other)
    : AmplifyUIBuilderRequest(new ListFormsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFormsRequest object.
 */
ListFormsRequest::ListFormsRequest()
    : AmplifyUIBuilderRequest(new ListFormsRequestPrivate(AmplifyUIBuilderRequest::ListFormsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFormsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFormsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFormsRequest::response(QNetworkReply * const reply) const
{
    return new ListFormsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListFormsRequestPrivate
 * \brief The ListFormsRequestPrivate class provides private implementation for ListFormsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListFormsRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ListFormsRequestPrivate::ListFormsRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ListFormsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFormsRequest
 * class' copy constructor.
 */
ListFormsRequestPrivate::ListFormsRequestPrivate(
    const ListFormsRequestPrivate &other, ListFormsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
