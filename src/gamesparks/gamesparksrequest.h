// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSREQUEST_H
#define QTAWS_GAMESPARKSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgamesparksglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GameSparks {

class GameSparksRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GameSparksRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GameSparks.
    enum Action {
        CreateGameAction,
        CreateSnapshotAction,
        CreateStageAction,
        DeleteGameAction,
        DeleteStageAction,
        DisconnectPlayerAction,
        ExportSnapshotAction,
        GetExtensionAction,
        GetExtensionVersionAction,
        GetGameAction,
        GetGameConfigurationAction,
        GetGeneratedCodeJobAction,
        GetPlayerConnectionStatusAction,
        GetSnapshotAction,
        GetStageAction,
        GetStageDeploymentAction,
        ImportGameConfigurationAction,
        ListExtensionVersionsAction,
        ListExtensionsAction,
        ListGamesAction,
        ListGeneratedCodeJobsAction,
        ListSnapshotsAction,
        ListStageDeploymentsAction,
        ListStagesAction,
        ListTagsForResourceAction,
        StartGeneratedCodeJobAction,
        StartStageDeploymentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateGameAction,
        UpdateGameConfigurationAction,
        UpdateSnapshotAction,
        UpdateStageAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GameSparksRequest(const Action action);
    GameSparksRequest(const GameSparksRequest &other);
    GameSparksRequest &operator=(const GameSparksRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GameSparksRequest &other) const;


protected:
    /// @cond internal
    explicit GameSparksRequest(GameSparksRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GameSparksRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
