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

#ifndef QTAWS_CODESTARNOTIFICATIONSREQUEST_H
#define QTAWS_CODESTARNOTIFICATIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodestarnotificationsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeStarNotifications {

class CodeStarNotificationsRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT CodeStarNotificationsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeStarNotifications.
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

    CodeStarNotificationsRequest(const Action action);
    CodeStarNotificationsRequest(const CodeStarNotificationsRequest &other);
    CodeStarNotificationsRequest &operator=(const CodeStarNotificationsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeStarNotificationsRequest &other) const;


protected:
    /// @cond internal
    CodeStarNotificationsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit CodeStarNotificationsRequest(CodeStarNotificationsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeStarNotificationsRequest)

};

} // namespace CodeStarNotifications
} // namespace QtAws

#endif
