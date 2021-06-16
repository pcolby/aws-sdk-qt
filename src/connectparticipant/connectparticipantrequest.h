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

#ifndef QTAWS_CONNECTPARTICIPANTREQUEST_H
#define QTAWS_CONNECTPARTICIPANTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantRequestPrivate;

class QTAWS_EXPORT ConnectParticipantRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ConnectParticipant.
    enum Action {
        CompleteAttachmentUploadAction,
        CreateParticipantConnectionAction,
        DisconnectParticipantAction,
        GetAttachmentAction,
        GetTranscriptAction,
        SendEventAction,
        SendMessageAction,
        StartAttachmentUploadAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ConnectParticipantRequest(const Action action);
    ConnectParticipantRequest(const ConnectParticipantRequest &other);
    ConnectParticipantRequest &operator=(const ConnectParticipantRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ConnectParticipantRequest &other) const;


protected:
    /// @cond internal
    ConnectParticipantRequest(ConnectParticipantRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectParticipantRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
