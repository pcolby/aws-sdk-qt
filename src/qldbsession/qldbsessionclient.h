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
