// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERA2IRUNTIMECLIENT_H
#define QTAWS_SAGEMAKERA2IRUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssagemakera2iruntimeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeClientPrivate;
class DeleteHumanLoopRequest;
class DeleteHumanLoopResponse;
class DescribeHumanLoopRequest;
class DescribeHumanLoopResponse;
class ListHumanLoopsRequest;
class ListHumanLoopsResponse;
class StartHumanLoopRequest;
class StartHumanLoopResponse;
class StopHumanLoopRequest;
class StopHumanLoopResponse;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT SageMakerA2IRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerA2IRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SageMakerA2IRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteHumanLoopResponse * deleteHumanLoop(const DeleteHumanLoopRequest &request);
    DescribeHumanLoopResponse * describeHumanLoop(const DescribeHumanLoopRequest &request);
    ListHumanLoopsResponse * listHumanLoops(const ListHumanLoopsRequest &request);
    StartHumanLoopResponse * startHumanLoop(const StartHumanLoopRequest &request);
    StopHumanLoopResponse * stopHumanLoop(const StopHumanLoopRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerA2IRuntimeClient)
    Q_DISABLE_COPY(SageMakerA2IRuntimeClient)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
