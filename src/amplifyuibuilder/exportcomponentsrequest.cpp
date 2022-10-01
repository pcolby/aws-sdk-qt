// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportcomponentsrequest.h"
#include "exportcomponentsrequest_p.h"
#include "exportcomponentsresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExportComponentsRequest
 * \brief The ExportComponentsRequest class provides an interface for AmplifyUIBuilder ExportComponents requests.
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
 * \sa AmplifyUIBuilderClient::exportComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ExportComponentsRequest::ExportComponentsRequest(const ExportComponentsRequest &other)
    : AmplifyUIBuilderRequest(new ExportComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportComponentsRequest object.
 */
ExportComponentsRequest::ExportComponentsRequest()
    : AmplifyUIBuilderRequest(new ExportComponentsRequestPrivate(AmplifyUIBuilderRequest::ExportComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ExportComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ExportComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExportComponentsRequestPrivate
 * \brief The ExportComponentsRequestPrivate class provides private implementation for ExportComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExportComponentsRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ExportComponentsRequestPrivate::ExportComponentsRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ExportComponentsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportComponentsRequest
 * class' copy constructor.
 */
ExportComponentsRequestPrivate::ExportComponentsRequestPrivate(
    const ExportComponentsRequestPrivate &other, ExportComponentsRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
