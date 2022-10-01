// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWCLIENT_H
#define QTAWS_WORKMAILMESSAGEFLOWCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsworkmailmessageflowglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowClientPrivate;
class GetRawMessageContentRequest;
class GetRawMessageContentResponse;
class PutRawMessageContentRequest;
class PutRawMessageContentResponse;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT WorkMailMessageFlowClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkMailMessageFlowClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WorkMailMessageFlowClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetRawMessageContentResponse * getRawMessageContent(const GetRawMessageContentRequest &request);
    PutRawMessageContentResponse * putRawMessageContent(const PutRawMessageContentRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkMailMessageFlowClient)
    Q_DISABLE_COPY(WorkMailMessageFlowClient)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
