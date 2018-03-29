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

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENTREQUEST_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServerlessApplicationRepository {

class AwsAbstractClient;
class ServerlessApplicationRepositoryClientRequestPrivate;

class QTAWS_EXPORT ServerlessApplicationRepositoryClientRequest : public AwsAbstractRequest {

public:
    /// Actions supported by ServerlessApplicationRepository.
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServerlessApplicationRepositoryClientRequest(const Action action);
    ServerlessApplicationRepositoryClientRequest(const ServerlessApplicationRepositoryClientRequest &other);
    ServerlessApplicationRepositoryClientRequest &operator=(const ServerlessApplicationRepositoryClientRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServerlessApplicationRepositoryClientRequest &other) const;


protected:
    /// @cond internal
    ServerlessApplicationRepositoryClientRequest(ServerlessApplicationRepositoryClientRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryClientRequest)

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
