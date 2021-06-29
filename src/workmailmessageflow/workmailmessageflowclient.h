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

    WorkMailMessageFlowClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetRawMessageContentResponse * getRawMessageContent(const GetRawMessageContentRequest &request);
    PutRawMessageContentResponse * putRawMessageContent(const PutRawMessageContentRequest &request);

protected:
    /// @cond internal
    WorkMailMessageFlowClientPrivate * const d_ptr; ///< Internal d-pointer.
    WorkMailMessageFlowClient(WorkMailMessageFlowClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WorkMailMessageFlowClient)
    Q_DISABLE_COPY(WorkMailMessageFlowClient)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
