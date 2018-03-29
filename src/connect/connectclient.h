/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CONNECTCLIENT_H
#define QTAWS_CONNECTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Connect {

class ConnectClientPrivate;
class StartOutboundVoiceContactRequest;
class StartOutboundVoiceContactResponse;
class StopContactRequest;
class StopContactResponse;

class QTAWS_EXPORT ConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StartOutboundVoiceContactResponse * startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request);
    StopContactResponse * stopContact(const StopContactRequest &request);

private:
    Q_DECLARE_PRIVATE(ConnectClient)
    Q_DISABLE_COPY(ConnectClient)

};

} // namespace Connect
} // namespace QtAws

#endif
