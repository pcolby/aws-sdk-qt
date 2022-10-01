// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARNOTIFICATIONSREQUEST_H
#define QTAWS_CODESTARNOTIFICATIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodestarnotificationsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodestarNotifications {

class CodestarNotificationsRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT CodestarNotificationsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodestarNotifications.
    enum Action {
        CreateNotificationRuleAction,
        DeleteNotificationRuleAction,
        DeleteTargetAction,
        DescribeNotificationRuleAction,
        ListEventTypesAction,
        ListNotificationRulesAction,
        ListTagsForResourceAction,
        ListTargetsAction,
        SubscribeAction,
        TagResourceAction,
        UnsubscribeAction,
        UntagResourceAction,
        UpdateNotificationRuleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodestarNotificationsRequest(const Action action);
    CodestarNotificationsRequest(const CodestarNotificationsRequest &other);
    CodestarNotificationsRequest &operator=(const CodestarNotificationsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodestarNotificationsRequest &other) const;


protected:
    /// @cond internal
    explicit CodestarNotificationsRequest(CodestarNotificationsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodestarNotificationsRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
