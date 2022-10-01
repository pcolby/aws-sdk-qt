// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTPARTICIPANTREQUEST_H
#define QTAWS_CONNECTPARTICIPANTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsconnectparticipantglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT ConnectParticipantRequest : public QtAws::Core::AwsAbstractRequest {

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
    explicit ConnectParticipantRequest(ConnectParticipantRequestPrivate * const d);
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
