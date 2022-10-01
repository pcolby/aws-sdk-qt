// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONCLIENT_H
#define QTAWS_QLDBSESSIONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsqldbsessionglobal.h"

class QNetworkReply;

namespace QtAws {
namespace QldbSession {

class QldbSessionClientPrivate;
class SendCommandRequest;
class SendCommandResponse;

class QTAWSQLDBSESSION_EXPORT QldbSessionClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    QldbSessionClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit QldbSessionClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SendCommandResponse * sendCommand(const SendCommandRequest &request);

private:
    Q_DECLARE_PRIVATE(QldbSessionClient)
    Q_DISABLE_COPY(QldbSessionClient)

};

} // namespace QldbSession
} // namespace QtAws

#endif
