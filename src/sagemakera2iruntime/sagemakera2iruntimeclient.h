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
