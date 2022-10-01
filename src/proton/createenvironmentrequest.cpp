// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentrequest.h"
#include "createenvironmentrequest_p.h"
#include "createenvironmentresponse.h"
#include "protonrequest_p.h"

namespace QtAws {
namespace Proton {

/*!
 * \class QtAws::Proton::CreateEnvironmentRequest
 * \brief The CreateEnvironmentRequest class provides an interface for Proton CreateEnvironment requests.
 *
 * \inmodule QtAwsProton
 *
 *  This is the Proton Service API Reference. It provides descriptions, syntax and usage examples for each of the <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Operations.html">actions</a> and <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Types.html">data types</a> for the Proton
 * 
 *  service>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML
 * 
 *  response>
 * 
 *  Alternatively, you can use the Amazon Web Services CLI to access an API. For more information, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">Amazon Web Services Command Line Interface
 *  User
 * 
 *  Guide</a>>
 * 
 *  The Proton service is a two-pronged automation framework. Administrators create service templates to provide
 *  standardized infrastructure and deployment tooling for serverless and container based applications. Developers, in turn,
 *  select from the available service templates to automate their application or service
 * 
 *  deployments>
 * 
 *  Because administrators define the infrastructure and tooling that Proton deploys and manages, they need permissions to
 *  use all of the listed API
 * 
 *  operations>
 * 
 *  When developers select a specific infrastructure and tooling set, Proton deploys their applications. To monitor their
 *  applications that are running on Proton, developers need permissions to the service <i>create</i>, <i>list</i>,
 *  <i>update</i> and <i>delete</i> API operations and the service instance <i>list</i> and <i>update</i> API
 * 
 *  operations>
 * 
 *  To learn more about Proton administration, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/adminguide/Welcome.html">Proton Administrator
 * 
 *  Guide</a>>
 * 
 *  To learn more about deploying serverless and containerized applications on Proton, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/userguide/Welcome.html">Proton User
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
 *  The API actions in this list support idempotency with the use of a <i>client token</i>. The corresponding Amazon Web
 *  Services CLI commands also support idempotency using a client token. A client token is a unique, case-sensitive string
 *  of up to 64 ASCII characters. To make an idempotent API request using one of these actions, specify a client token in
 *  the request. We recommend that you <i>don't</i> reuse the same client token for other API requests. If you don’t provide
 *  a client token for these APIs, a default client token is automatically provided by
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
 *  CreateEnvironmentAccountConnectio> </li> </ul>
 * 
 *  <b>Idempotent create APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request with an API from this group, and the original resource <i>hasn't</i> been modified, the retry
 *  succeeds without performing any further actions other than returning the original resource detail data in the
 * 
 *  response>
 * 
 *  If the original resource has been modified, the retry throws a
 * 
 *  <code>ConflictException</code>>
 * 
 *  If you retry with different input parameters, the retry throws a <code>ValidationException</code> with an
 *  <code>IdempotentParameterMismatch</code>
 * 
 *  error>
 * 
 *  Idempotent create
 * 
 *  APIs> <ul> <li>
 * 
 *  CreateEnvironmentTemplat> </li> <li>
 * 
 *  CreateServiceTemplat> </li> <li>
 * 
 *  CreateEnvironmen> </li> <li>
 * 
 *  CreateServic> </li> </ul>
 * 
 *  <b>Idempotent delete APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  When you retry the request with an API from this group and the resource was deleted, its metadata is returned in the
 * 
 *  response>
 * 
 *  If you retry and the resource doesn't exist, the response is
 * 
 *  empty>
 * 
 *  In both cases, the retry
 * 
 *  succeeds>
 * 
 *  Idempotent delete
 * 
 *  APIs> <ul> <li>
 * 
 *  DeleteEnvironmentTemplat> </li> <li>
 * 
 *  DeleteEnvironmentTemplateVersio> </li> <li>
 * 
 *  DeleteServiceTemplat> </li> <li>
 * 
 *  DeleteServiceTemplateVersio> </li> <li>
 * 
 *  DeleteEnvironmentAccountConnectio> </li> </ul>
 * 
 *  <b>Asynchronous idempotent delete APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request with an API from this group, if the original request delete operation status is
 *  <code>DELETE_IN_PROGRESS</code>, the retry returns the resource detail data in the response without performing any
 *  further
 * 
 *  actions>
 * 
 *  If the original request delete operation is complete, a retry returns an empty
 * 
 *  response>
 * 
 *  Asynchronous idempotent delete
 * 
 *  APIs> <ul> <li>
 * 
 *  DeleteEnvironmen> </li> <li>
 *
 * \sa ProtonClient::createEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest(const CreateEnvironmentRequest &other)
    : ProtonRequest(new CreateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEnvironmentRequest object.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest()
    : ProtonRequest(new CreateEnvironmentRequestPrivate(ProtonRequest::CreateEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Proton::CreateEnvironmentRequestPrivate
 * \brief The CreateEnvironmentRequestPrivate class provides private implementation for CreateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsProton
 */

/*!
 * Constructs a CreateEnvironmentRequestPrivate object for Proton \a action,
 * with public implementation \a q.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const ProtonRequest::Action action, CreateEnvironmentRequest * const q)
    : ProtonRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentRequest
 * class' copy constructor.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const CreateEnvironmentRequestPrivate &other, CreateEnvironmentRequest * const q)
    : ProtonRequestPrivate(other, q)
{

}

} // namespace Proton
} // namespace QtAws
