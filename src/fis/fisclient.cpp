// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fisclient.h"
#include "fisclient_p.h"

#include "core/awssignaturev4.h"
#include "createexperimenttemplaterequest.h"
#include "createexperimenttemplateresponse.h"
#include "deleteexperimenttemplaterequest.h"
#include "deleteexperimenttemplateresponse.h"
#include "getactionrequest.h"
#include "getactionresponse.h"
#include "getexperimentrequest.h"
#include "getexperimentresponse.h"
#include "getexperimenttemplaterequest.h"
#include "getexperimenttemplateresponse.h"
#include "gettargetresourcetyperequest.h"
#include "gettargetresourcetyperesponse.h"
#include "listactionsrequest.h"
#include "listactionsresponse.h"
#include "listexperimenttemplatesrequest.h"
#include "listexperimenttemplatesresponse.h"
#include "listexperimentsrequest.h"
#include "listexperimentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetresourcetypesrequest.h"
#include "listtargetresourcetypesresponse.h"
#include "startexperimentrequest.h"
#include "startexperimentresponse.h"
#include "stopexperimentrequest.h"
#include "stopexperimentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateexperimenttemplaterequest.h"
#include "updateexperimenttemplateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Fis
 * \brief Contains classess for accessing AWS Fault Injection Simulator.
 *
 * \inmodule QtAwsFis
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::FisClient
 * \brief The FisClient class provides access to the AWS Fault Injection Simulator service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 */

/*!
 * \brief Constructs a FisClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FisClient::FisClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FisClientPrivate(this), parent)
{
    Q_D(FisClient);
    d->apiVersion = QStringLiteral("2020-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("fis");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Fault Injection Simulator");
    d->serviceName = QStringLiteral("fis");
}

/*!
 * \overload FisClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FisClient::FisClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FisClientPrivate(this), parent)
{
    Q_D(FisClient);
    d->apiVersion = QStringLiteral("2020-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("fis");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Fault Injection Simulator");
    d->serviceName = QStringLiteral("fis");
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * CreateExperimentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an experiment template.
 *
 * </p
 *
 * An experiment template includes the following
 *
 * components> <ul> <li>
 *
 * <b>Targets</b>: A target can be a specific resource in your Amazon Web Services environment, or one or more resources
 * that match criteria that you specify, for example, resources that have specific
 *
 * tags> </li> <li>
 *
 * <b>Actions</b>: The actions to carry out on the target. You can specify multiple actions, the duration of each action,
 * and when to start each action during an
 *
 * experiment> </li> <li>
 *
 * <b>Stop conditions</b>: If a stop condition is triggered while an experiment is running, the experiment is automatically
 * stopped. You can define a stop condition as a CloudWatch
 *
 * alarm> </li> </ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-templates.html">Experiment templates</a> in the
 * <i>Fault Injection Simulator User
 */
CreateExperimentTemplateResponse * FisClient::createExperimentTemplate(const CreateExperimentTemplateRequest &request)
{
    return qobject_cast<CreateExperimentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * DeleteExperimentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified experiment
 */
DeleteExperimentTemplateResponse * FisClient::deleteExperimentTemplate(const DeleteExperimentTemplateRequest &request)
{
    return qobject_cast<DeleteExperimentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * GetActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified FIS
 */
GetActionResponse * FisClient::getAction(const GetActionRequest &request)
{
    return qobject_cast<GetActionResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * GetExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
GetExperimentResponse * FisClient::getExperiment(const GetExperimentRequest &request)
{
    return qobject_cast<GetExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * GetExperimentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified experiment
 */
GetExperimentTemplateResponse * FisClient::getExperimentTemplate(const GetExperimentTemplateRequest &request)
{
    return qobject_cast<GetExperimentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * GetTargetResourceTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified resource
 */
GetTargetResourceTypeResponse * FisClient::getTargetResourceType(const GetTargetResourceTypeRequest &request)
{
    return qobject_cast<GetTargetResourceTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * ListActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the available FIS
 */
ListActionsResponse * FisClient::listActions(const ListActionsRequest &request)
{
    return qobject_cast<ListActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * ListExperimentTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your experiment
 */
ListExperimentTemplatesResponse * FisClient::listExperimentTemplates(const ListExperimentTemplatesRequest &request)
{
    return qobject_cast<ListExperimentTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * ListExperimentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your
 */
ListExperimentsResponse * FisClient::listExperiments(const ListExperimentsRequest &request)
{
    return qobject_cast<ListExperimentsResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * FisClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * ListTargetResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the target resource
 */
ListTargetResourceTypesResponse * FisClient::listTargetResourceTypes(const ListTargetResourceTypesRequest &request)
{
    return qobject_cast<ListTargetResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * StartExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts running an experiment from the specified experiment
 */
StartExperimentResponse * FisClient::startExperiment(const StartExperimentRequest &request)
{
    return qobject_cast<StartExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * StopExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified
 */
StopExperimentResponse * FisClient::stopExperiment(const StopExperimentRequest &request)
{
    return qobject_cast<StopExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified
 */
TagResourceResponse * FisClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * FisClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FisClient service, and returns a pointer to an
 * UpdateExperimentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified experiment
 */
UpdateExperimentTemplateResponse * FisClient::updateExperimentTemplate(const UpdateExperimentTemplateRequest &request)
{
    return qobject_cast<UpdateExperimentTemplateResponse *>(send(request));
}

/*!
 * \class QtAws::Fis::FisClientPrivate
 * \brief The FisClientPrivate class provides private implementation for FisClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a FisClientPrivate object with public implementation \a q.
 */
FisClientPrivate::FisClientPrivate(FisClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Fis
} // namespace QtAws
