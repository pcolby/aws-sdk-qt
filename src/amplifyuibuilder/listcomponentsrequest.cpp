// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentsrequest.h"
#include "listcomponentsrequest_p.h"
#include "listcomponentsresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListComponentsRequest
 * \brief The ListComponentsRequest class provides an interface for AmplifyUIBuilder ListComponents requests.
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
 * \sa AmplifyUIBuilderClient::listComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentsRequest::ListComponentsRequest(const ListComponentsRequest &other)
    : AmplifyUIBuilderRequest(new ListComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentsRequest object.
 */
ListComponentsRequest::ListComponentsRequest()
    : AmplifyUIBuilderRequest(new ListComponentsRequestPrivate(AmplifyUIBuilderRequest::ListComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListComponentsRequestPrivate
 * \brief The ListComponentsRequestPrivate class provides private implementation for ListComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListComponentsRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ListComponentsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentsRequest
 * class' copy constructor.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ListComponentsRequestPrivate &other, ListComponentsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
