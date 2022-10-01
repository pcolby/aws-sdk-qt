// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCONFIGREQUEST_H
#define QTAWS_MIGRATIONHUBCONFIGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmigrationhubconfigglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MigrationHubConfig {

class MigrationHubConfigRequestPrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT MigrationHubConfigRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MigrationHubConfig.
    enum Action {
        CreateHomeRegionControlAction,
        DescribeHomeRegionControlsAction,
        GetHomeRegionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MigrationHubConfigRequest(const Action action);
    MigrationHubConfigRequest(const MigrationHubConfigRequest &other);
    MigrationHubConfigRequest &operator=(const MigrationHubConfigRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MigrationHubConfigRequest &other) const;


protected:
    /// @cond internal
    explicit MigrationHubConfigRequest(MigrationHubConfigRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubConfigRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
