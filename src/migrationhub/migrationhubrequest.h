// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREQUEST_H
#define QTAWS_MIGRATIONHUBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmigrationhubglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MigrationHub {

class MigrationHubRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT MigrationHubRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MigrationHub.
    enum Action {
        AssociateCreatedArtifactAction,
        AssociateDiscoveredResourceAction,
        CreateProgressUpdateStreamAction,
        DeleteProgressUpdateStreamAction,
        DescribeApplicationStateAction,
        DescribeMigrationTaskAction,
        DisassociateCreatedArtifactAction,
        DisassociateDiscoveredResourceAction,
        ImportMigrationTaskAction,
        ListApplicationStatesAction,
        ListCreatedArtifactsAction,
        ListDiscoveredResourcesAction,
        ListMigrationTasksAction,
        ListProgressUpdateStreamsAction,
        NotifyApplicationStateAction,
        NotifyMigrationTaskStateAction,
        PutResourceAttributesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MigrationHubRequest(const Action action);
    MigrationHubRequest(const MigrationHubRequest &other);
    MigrationHubRequest &operator=(const MigrationHubRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MigrationHubRequest &other) const;


protected:
    /// @cond internal
    explicit MigrationHubRequest(MigrationHubRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
