// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemesrequest.h"
#include "listthemesrequest_p.h"
#include "listthemesresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ListThemesRequest
 * \brief The ListThemesRequest class provides an interface for AmplifyUIBuilder ListThemes requests.
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
 * \sa AmplifyUIBuilderClient::listThemes
 */

/*!
 * Constructs a copy of \a other.
 */
ListThemesRequest::ListThemesRequest(const ListThemesRequest &other)
    : AmplifyUIBuilderRequest(new ListThemesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThemesRequest object.
 */
ListThemesRequest::ListThemesRequest()
    : AmplifyUIBuilderRequest(new ListThemesRequestPrivate(AmplifyUIBuilderRequest::ListThemesAction, this))
{

}

/*!
 * \reimp
 */
bool ListThemesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThemesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThemesRequest::response(QNetworkReply * const reply) const
{
    return new ListThemesResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ListThemesRequestPrivate
 * \brief The ListThemesRequestPrivate class provides private implementation for ListThemesRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ListThemesRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ListThemesRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThemesRequest
 * class' copy constructor.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const ListThemesRequestPrivate &other, ListThemesRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
