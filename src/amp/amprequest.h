// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPREQUEST_H
#define QTAWS_AMPREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsampglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Amp {

class AmpRequestPrivate;

class QTAWSAMP_EXPORT AmpRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Amp.
    enum Action {
        CreateAlertManagerDefinitionAction,
        CreateLoggingConfigurationAction,
        CreateRuleGroupsNamespaceAction,
        CreateWorkspaceAction,
        DeleteAlertManagerDefinitionAction,
        DeleteLoggingConfigurationAction,
        DeleteRuleGroupsNamespaceAction,
        DeleteWorkspaceAction,
        DescribeAlertManagerDefinitionAction,
        DescribeLoggingConfigurationAction,
        DescribeRuleGroupsNamespaceAction,
        DescribeWorkspaceAction,
        ListRuleGroupsNamespacesAction,
        ListTagsForResourceAction,
        ListWorkspacesAction,
        PutAlertManagerDefinitionAction,
        PutRuleGroupsNamespaceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateLoggingConfigurationAction,
        UpdateWorkspaceAliasAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AmpRequest(const Action action);
    AmpRequest(const AmpRequest &other);
    AmpRequest &operator=(const AmpRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AmpRequest &other) const;


protected:
    /// @cond internal
    explicit AmpRequest(AmpRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmpRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
