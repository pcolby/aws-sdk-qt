// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTAPPREQUEST_H
#define QTAWS_SUPPORTAPPREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssupportappglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SupportApp {

class SupportAppRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT SupportAppRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SupportApp.
    enum Action {
        CreateSlackChannelConfigurationAction,
        DeleteAccountAliasAction,
        DeleteSlackChannelConfigurationAction,
        DeleteSlackWorkspaceConfigurationAction,
        GetAccountAliasAction,
        ListSlackChannelConfigurationsAction,
        ListSlackWorkspaceConfigurationsAction,
        PutAccountAliasAction,
        UpdateSlackChannelConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SupportAppRequest(const Action action);
    SupportAppRequest(const SupportAppRequest &other);
    SupportAppRequest &operator=(const SupportAppRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SupportAppRequest &other) const;


protected:
    /// @cond internal
    explicit SupportAppRequest(SupportAppRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SupportAppRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
