// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCHATREQUEST_H
#define QTAWS_IVSCHATREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsivschatglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IvsChat {

class IvsChatRequestPrivate;

class QTAWSIVSCHAT_EXPORT IvsChatRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IvsChat.
    enum Action {
        CreateChatTokenAction,
        CreateRoomAction,
        DeleteMessageAction,
        DeleteRoomAction,
        DisconnectUserAction,
        GetRoomAction,
        ListRoomsAction,
        ListTagsForResourceAction,
        SendEventAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateRoomAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IvsChatRequest(const Action action);
    IvsChatRequest(const IvsChatRequest &other);
    IvsChatRequest &operator=(const IvsChatRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IvsChatRequest &other) const;


protected:
    /// @cond internal
    explicit IvsChatRequest(IvsChatRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IvsChatRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
