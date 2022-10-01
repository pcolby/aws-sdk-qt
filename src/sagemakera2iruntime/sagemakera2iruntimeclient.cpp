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

#include "sagemakera2iruntimeclient.h"
#include "sagemakera2iruntimeclient_p.h"

#include "core/awssignaturev4.h"
#include "deletehumanlooprequest.h"
#include "deletehumanloopresponse.h"
#include "describehumanlooprequest.h"
#include "describehumanloopresponse.h"
#include "listhumanloopsrequest.h"
#include "listhumanloopsresponse.h"
#include "starthumanlooprequest.h"
#include "starthumanloopresponse.h"
#include "stophumanlooprequest.h"
#include "stophumanloopresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SageMakerA2IRuntime
 * \brief Contains classess for accessing Amazon Augmented AI Runtime.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeClient
 * \brief The SageMakerA2IRuntimeClient class provides access to the Amazon Augmented AI Runtime service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMakerA2IRuntime
 *
 *  Amazon Augmented AI (Amazon A2I) adds the benefit of human judgment to any machine learning application. When an AI
 *  application can't evaluate data with a high degree of confidence, human reviewers can take over. This human review is
 *  called a human review workflow. To create and start a human review workflow, you need three resources: a <i>worker task
 *  template</i>, a <i>flow definition</i>, and a <i>human
 * 
 *  loop</i>>
 * 
 *  For information about these resources and prerequisites for using Amazon A2I, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-getting-started.html">Get Started with Amazon Augmented AI</a>
 *  in the Amazon SageMaker Developer
 * 
 *  Guide>
 * 
 *  This API reference includes information about API actions and data types that you can use to interact with Amazon A2I
 *  programmatically. Use this guide
 * 
 *  to> <ul> <li>
 * 
 *  Start a human loop with the <code>StartHumanLoop</code> operation when using Amazon A2I with a <i>custom task type</i>.
 *  To learn more about the difference between custom and built-in task types, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-task-types-general.html">Use Task Types </a>. To learn how to
 *  start a human loop using this API, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-start-human-loop.html#a2i-instructions-starthumanloop">Create
 *  and Start a Human Loop for a Custom Task Type </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Manage your human loops. You can list all human loops that you have created, describe individual human loops, and stop
 *  and delete human loops. To learn more, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-monitor-humanloop-results.html">Monitor and Manage Your Human
 *  Loop </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> </ul>
 * 
 *  Amazon A2I integrates APIs from various AWS services to create and start human review workflows for those services. To
 *  learn how Amazon A2I uses these APIs, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-api-references.html">Use APIs in Amazon A2I</a> in the Amazon
 *  SageMaker Developer
 */

/*!
 * \brief Constructs a SageMakerA2IRuntimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SageMakerA2IRuntimeClient::SageMakerA2IRuntimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerA2IRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerA2IRuntimeClient);
    d->apiVersion = QStringLiteral("2019-11-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("a2i-runtime.sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Augmented AI Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * \overload SageMakerA2IRuntimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SageMakerA2IRuntimeClient::SageMakerA2IRuntimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SageMakerA2IRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerA2IRuntimeClient);
    d->apiVersion = QStringLiteral("2019-11-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("a2i-runtime.sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Augmented AI Runtime");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * Sends \a request to the SageMakerA2IRuntimeClient service, and returns a pointer to an
 * DeleteHumanLoopResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified human loop for a flow
 *
 * definition>
 *
 * If the human loop was deleted, this operation will return a <code>ResourceNotFoundException</code>.
 */
DeleteHumanLoopResponse * SageMakerA2IRuntimeClient::deleteHumanLoop(const DeleteHumanLoopRequest &request)
{
    return qobject_cast<DeleteHumanLoopResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerA2IRuntimeClient service, and returns a pointer to an
 * DescribeHumanLoopResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified human loop. If the human loop was deleted, this operation will return a
 * <code>ResourceNotFoundException</code> error.
 */
DescribeHumanLoopResponse * SageMakerA2IRuntimeClient::describeHumanLoop(const DescribeHumanLoopRequest &request)
{
    return qobject_cast<DescribeHumanLoopResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerA2IRuntimeClient service, and returns a pointer to an
 * ListHumanLoopsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about human loops, given the specified parameters. If a human loop was deleted, it will not be
 */
ListHumanLoopsResponse * SageMakerA2IRuntimeClient::listHumanLoops(const ListHumanLoopsRequest &request)
{
    return qobject_cast<ListHumanLoopsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerA2IRuntimeClient service, and returns a pointer to an
 * StartHumanLoopResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a human loop, provided that at least one activation condition is
 */
StartHumanLoopResponse * SageMakerA2IRuntimeClient::startHumanLoop(const StartHumanLoopRequest &request)
{
    return qobject_cast<StartHumanLoopResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerA2IRuntimeClient service, and returns a pointer to an
 * StopHumanLoopResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified human
 */
StopHumanLoopResponse * SageMakerA2IRuntimeClient::stopHumanLoop(const StopHumanLoopRequest &request)
{
    return qobject_cast<StopHumanLoopResponse *>(send(request));
}

/*!
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeClientPrivate
 * \brief The SageMakerA2IRuntimeClientPrivate class provides private implementation for SageMakerA2IRuntimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a SageMakerA2IRuntimeClientPrivate object with public implementation \a q.
 */
SageMakerA2IRuntimeClientPrivate::SageMakerA2IRuntimeClientPrivate(SageMakerA2IRuntimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
