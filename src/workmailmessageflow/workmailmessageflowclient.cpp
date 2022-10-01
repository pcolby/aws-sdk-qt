// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workmailmessageflowclient.h"
#include "workmailmessageflowclient_p.h"

#include "core/awssignaturev4.h"
#include "getrawmessagecontentrequest.h"
#include "getrawmessagecontentresponse.h"
#include "putrawmessagecontentrequest.h"
#include "putrawmessagecontentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkMailMessageFlow
 * \brief Contains classess for accessing Amazon WorkMail Message Flow.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowClient
 * \brief The WorkMailMessageFlowClient class provides access to the Amazon WorkMail Message Flow service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkMailMessageFlow
 *
 *  The WorkMail Message Flow API provides access to email messages as they are being sent and received by a WorkMail
 */

/*!
 * \brief Constructs a WorkMailMessageFlowClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkMailMessageFlowClient::WorkMailMessageFlowClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkMailMessageFlowClientPrivate(this), parent)
{
    Q_D(WorkMailMessageFlowClient);
    d->apiVersion = QStringLiteral("2019-05-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workmailmessageflow");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkMail Message Flow");
    d->serviceName = QStringLiteral("workmailmessageflow");
}

/*!
 * \overload WorkMailMessageFlowClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkMailMessageFlowClient::WorkMailMessageFlowClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkMailMessageFlowClientPrivate(this), parent)
{
    Q_D(WorkMailMessageFlowClient);
    d->apiVersion = QStringLiteral("2019-05-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workmailmessageflow");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkMail Message Flow");
    d->serviceName = QStringLiteral("workmailmessageflow");
}

/*!
 * Sends \a request to the WorkMailMessageFlowClient service, and returns a pointer to an
 * GetRawMessageContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the raw content of an in-transit email message, in MIME
 */
GetRawMessageContentResponse * WorkMailMessageFlowClient::getRawMessageContent(const GetRawMessageContentRequest &request)
{
    return qobject_cast<GetRawMessageContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailMessageFlowClient service, and returns a pointer to an
 * PutRawMessageContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the raw content of an in-transit email message, in MIME
 *
 * format>
 *
 * This example describes how to update in-transit email message. For more information and examples for using this API, see
 * <a href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html"> Updating message content with
 * AWS
 *
 * Lambda</a>> <note>
 *
 * Updates to an in-transit message only appear when you call <code>PutRawMessageContent</code> from an AWS Lambda function
 * configured with a synchronous <a
 * href="https://docs.aws.amazon.com/workmail/latest/adminguide/lambda.html#synchronous-rules"> Run Lambda</a> rule. If you
 * call <code>PutRawMessageContent</code> on a delivered or sent message, the message remains unchanged, even though <a
 * href="https://docs.aws.amazon.com/workmail/latest/APIReference/API_messageflow_GetRawMessageContent.html">GetRawMessageContent</a>
 * returns an updated message.
 */
PutRawMessageContentResponse * WorkMailMessageFlowClient::putRawMessageContent(const PutRawMessageContentRequest &request)
{
    return qobject_cast<PutRawMessageContentResponse *>(send(request));
}

/*!
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowClientPrivate
 * \brief The WorkMailMessageFlowClientPrivate class provides private implementation for WorkMailMessageFlowClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a WorkMailMessageFlowClientPrivate object with public implementation \a q.
 */
WorkMailMessageFlowClientPrivate::WorkMailMessageFlowClientPrivate(WorkMailMessageFlowClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkMailMessageFlow
} // namespace QtAws
