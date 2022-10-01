// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINREQUEST_H
#define QTAWS_RBINREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrbinglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Rbin {

class RbinRequestPrivate;

class QTAWSRBIN_EXPORT RbinRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Rbin.
    enum Action {
        CreateRuleAction,
        DeleteRuleAction,
        GetRuleAction,
        ListRulesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateRuleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RbinRequest(const Action action);
    RbinRequest(const RbinRequest &other);
    RbinRequest &operator=(const RbinRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RbinRequest &other) const;


protected:
    /// @cond internal
    explicit RbinRequest(RbinRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RbinRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
