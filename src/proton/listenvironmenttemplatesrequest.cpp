/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listenvironmenttemplatesrequest.h"
#include "listenvironmenttemplatesrequest_p.h"
#include "listenvironmenttemplatesresponse.h"
#include "protonrequest_p.h"

namespace QtAws {
namespace Proton {

/*!
 * \class QtAws::Proton::ListEnvironmentTemplatesRequest
 * \brief The ListEnvironmentTemplatesRequest class provides an interface for Proton ListEnvironmentTemplates requests.
 *
 * \inmodule QtAwsProton
 *
 *  This is the AWS Proton Service API Reference. It provides descriptions, syntax and usage examples for each of the <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Operations.html">actions</a> and <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Types.html">data types</a> for the AWS Proton
 * 
 *  service>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML
 * 
 *  response>
 * 
 *  Alternatively, you can use the AWS CLI to access an API. For more information, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS Command Line Interface User
 * 
 *  Guide</a>>
 * 
 *  The AWS Proton service is a two-pronged automation framework. Administrators create service templates to provide
 *  standardized infrastructure and deployment tooling for serverless and container based applications. Developers, in turn,
 *  select from the available service templates to automate their application or service
 * 
 *  deployments>
 * 
 *  Because administrators define the infrastructure and tooling that AWS Proton deploys and manages, they need permissions
 *  to use all of the listed API
 * 
 *  operations>
 * 
 *  When developers select a specific infrastructure and tooling set, AWS Proton deploys their applications. To monitor
 *  their applications that are running on AWS Proton, developers need permissions to the service <i>create</i>,
 *  <i>list</i>, <i>update</i> and <i>delete</i> API operations and the service instance <i>list</i> and <i>update</i> API
 * 
 *  operations>
 * 
 *  To learn more about AWS Proton administration, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/adminguide/Welcome.html">AWS Proton Administration
 * 
 *  Guide</a>>
 * 
 *  To learn more about deploying serverless and containerized applications on AWS Proton, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/userguide/Welcome.html">AWS Proton User
 * 
 *  Guide</a>>
 * 
 *  <b>Ensuring Idempotency</b>
 * 
 *  </p
 * 
 *  When you make a mutating API request, the request typically returns a result before the asynchronous workflows of the
 *  operation are complete. Operations might also time out or encounter other server issues before they're complete, even if
 *  the request already returned a result. This might make it difficult to determine whether the request succeeded.
 *  Moreover, you might need to retry the request multiple times to ensure that the operation completes successfully.
 *  However, if the original request and the subsequent retries are successful, the operation occurs multiple times. This
 *  means that you might create more resources than you
 * 
 *  intended>
 * 
 *  <i>Idempotency</i> ensures that an API request action completes no more than one time. With an idempotent request, if
 *  the original request action completes successfully, any subsequent retries complete successfully without performing any
 *  further actions. However, the result might contain updated information, such as the current creation
 * 
 *  status>
 * 
 *  The following lists of APIs are grouped according to methods that ensure
 * 
 *  idempotency>
 * 
 *  <b>Idempotent create APIs with a client token</b>
 * 
 *  </p
 * 
 *  The API actions in this list support idempotency with the use of a <i>client token</i>. The corresponding AWS CLI
 *  commands also support idempotency using a client token. A client token is a unique, case-sensitive string of up to 64
 *  ASCII characters. To make an idempotent API request using one of these actions, specify a client token in the request.
 *  We recommend that you <i>don't</i> reuse the same client token for other API requests. If you don’t provide a client
 *  token for these APIs, a default client token is automatically provided by
 * 
 *  SDKs>
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request using the same client token and the same parameters, the retry succeeds without performing any
 *  further actions other than returning the original resource detail data in the
 * 
 *  response>
 * 
 *  If you retry the request using the same client token, but one or more of the parameters are different, the retry throws
 *  a <code>ValidationException</code> with an <code>IdempotentParameterMismatch</code>
 * 
 *  error>
 * 
 *  Client tokens expire eight hours after a request is made. If you retry the request with the expired token, a new
 *  resource is
 * 
 *  created>
 * 
 *  If the original resource is deleted and you retry the request, a new resource is
 * 
 *  created>
 * 
 *  Idempotent create APIs with a client
 * 
 *  token> <ul> <li>
 * 
 *  CreateEnvironmentTemplateVersio> </li> <li>
 * 
 *  CreateServiceTemplateVersio> </li> <li>
 * 
 *  CreateEnvironmentAccountConnectio> </li> </ul> <pre><code> &lt;p&gt; &lt;b&gt;Idempotent delete APIs&lt;/b&gt;
 *  &lt;/p&gt; &lt;p&gt;Given a request action that has succeeded:&lt;/p&gt; &lt;p&gt;When you retry the request with an API
 *  from this group and the resource was deleted, its metadata is returned in the response.&lt;/p&gt; &lt;p&gt;If you retry
 *  and the resource doesn't exist, the response is empty.&lt;/p&gt; &lt;p&gt;In both cases, the retry succeeds.&lt;/p&gt;
 *  &lt;p&gt;Idempotent delete APIs:&lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentTemplate&lt;/p&gt;
 *  &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentTemplateVersion&lt;/p&gt; &lt;/li&gt; &lt;li&gt;
 *  &lt;p&gt;DeleteServiceTemplate&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteServiceTemplateVersion&lt;/p&gt;
 *  &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentAccountConnection&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;
 *  &lt;b&gt;Asynchronous idempotent delete APIs&lt;/b&gt; &lt;/p&gt; &lt;p&gt;Given a request action that has
 *  succeeded:&lt;/p&gt; &lt;p&gt;If you retry the request with an API from this group, if the original request delete
 *  operation status is &lt;code&gt;DELETE_IN_PROGRESS&lt;/code&gt;, the retry returns the resource detail data in the
 *  response without performing any further actions.&lt;/p&gt; &lt;p&gt;If the original request delete operation is
 *  complete, a retry returns an empty response.&lt;/p&gt; &lt;p&gt;Asynchronous idempotent delete APIs:&lt;/p&gt;
 *  &lt;ul&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironment&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteService&lt;/p&gt;
 *
 * \sa ProtonClient::listEnvironmentTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentTemplatesRequest::ListEnvironmentTemplatesRequest(const ListEnvironmentTemplatesRequest &other)
    : ProtonRequest(new ListEnvironmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentTemplatesRequest object.
 */
ListEnvironmentTemplatesRequest::ListEnvironmentTemplatesRequest()
    : ProtonRequest(new ListEnvironmentTemplatesRequestPrivate(ProtonRequest::ListEnvironmentTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Proton::ListEnvironmentTemplatesRequestPrivate
 * \brief The ListEnvironmentTemplatesRequestPrivate class provides private implementation for ListEnvironmentTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsProton
 */

/*!
 * Constructs a ListEnvironmentTemplatesRequestPrivate object for Proton \a action,
 * with public implementation \a q.
 */
ListEnvironmentTemplatesRequestPrivate::ListEnvironmentTemplatesRequestPrivate(
    const ProtonRequest::Action action, ListEnvironmentTemplatesRequest * const q)
    : ProtonRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentTemplatesRequest
 * class' copy constructor.
 */
ListEnvironmentTemplatesRequestPrivate::ListEnvironmentTemplatesRequestPrivate(
    const ListEnvironmentTemplatesRequestPrivate &other, ListEnvironmentTemplatesRequest * const q)
    : ProtonRequestPrivate(other, q)
{

}

} // namespace Proton
} // namespace QtAws
