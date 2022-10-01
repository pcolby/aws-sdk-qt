// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "dlmclient.h"
#include "dlmclient_p.h"

#include "core/awssignaturev4.h"
#include "createlifecyclepolicyrequest.h"
#include "createlifecyclepolicyresponse.h"
#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyresponse.h"
#include "getlifecyclepoliciesrequest.h"
#include "getlifecyclepoliciesresponse.h"
#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatelifecyclepolicyrequest.h"
#include "updatelifecyclepolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Dlm
 * \brief Contains classess for accessing Amazon Data Lifecycle Manager.
 *
 * \inmodule QtAwsDlm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::DlmClient
 * \brief The DlmClient class provides access to the Amazon Data Lifecycle Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDlm
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your Amazon Web Services resources. You create
 *  lifecycle policies, which are used to automate operations on the specified
 * 
 *  resources>
 * 
 *  Amazon DLM supports Amazon EBS volumes and snapshots. For information about using Amazon DLM with Amazon EBS, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating the Amazon EBS Snapshot
 *  Lifecycle</a> in the <i>Amazon EC2 User
 */

/*!
 * \brief Constructs a DlmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DlmClient::DlmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DlmClientPrivate(this), parent)
{
    Q_D(DlmClient);
    d->apiVersion = QStringLiteral("2018-01-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("dlm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Data Lifecycle Manager");
    d->serviceName = QStringLiteral("dlm");
}

/*!
 * \overload DlmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DlmClient::DlmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DlmClientPrivate(this), parent)
{
    Q_D(DlmClient);
    d->apiVersion = QStringLiteral("2018-01-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("dlm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Data Lifecycle Manager");
    d->serviceName = QStringLiteral("dlm");
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * CreateLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a policy to manage the lifecycle of the specified Amazon Web Services resources. You can create up to 100
 * lifecycle
 */
CreateLifecyclePolicyResponse * DlmClient::createLifecyclePolicy(const CreateLifecyclePolicyRequest &request)
{
    return qobject_cast<CreateLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * DeleteLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified lifecycle policy and halts the automated operations that the policy
 */
DeleteLifecyclePolicyResponse * DlmClient::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request)
{
    return qobject_cast<DeleteLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * GetLifecyclePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about all or the specified data lifecycle
 *
 * policies>
 *
 * To get complete information about a policy, use
 */
GetLifecyclePoliciesResponse * DlmClient::getLifecyclePolicies(const GetLifecyclePoliciesRequest &request)
{
    return qobject_cast<GetLifecyclePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * GetLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about the specified lifecycle
 */
GetLifecyclePolicyResponse * DlmClient::getLifecyclePolicy(const GetLifecyclePolicyRequest &request)
{
    return qobject_cast<GetLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * DlmClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified
 */
TagResourceResponse * DlmClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * DlmClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DlmClient service, and returns a pointer to an
 * UpdateLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified lifecycle
 */
UpdateLifecyclePolicyResponse * DlmClient::updateLifecyclePolicy(const UpdateLifecyclePolicyRequest &request)
{
    return qobject_cast<UpdateLifecyclePolicyResponse *>(send(request));
}

/*!
 * \class QtAws::Dlm::DlmClientPrivate
 * \brief The DlmClientPrivate class provides private implementation for DlmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a DlmClientPrivate object with public implementation \a q.
 */
DlmClientPrivate::DlmClientPrivate(DlmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Dlm
} // namespace QtAws
