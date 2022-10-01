// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYREQUEST_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsserverlessapplicationrepositoryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ServerlessApplicationRepositoryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServerlessApplicationRepository.
    enum Action {
        CreateApplicationAction,
        CreateApplicationVersionAction,
        CreateCloudFormationChangeSetAction,
        CreateCloudFormationTemplateAction,
        DeleteApplicationAction,
        GetApplicationAction,
        GetApplicationPolicyAction,
        GetCloudFormationTemplateAction,
        ListApplicationDependenciesAction,
        ListApplicationVersionsAction,
        ListApplicationsAction,
        PutApplicationPolicyAction,
        UnshareApplicationAction,
        UpdateApplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServerlessApplicationRepositoryRequest(const Action action);
    ServerlessApplicationRepositoryRequest(const ServerlessApplicationRepositoryRequest &other);
    ServerlessApplicationRepositoryRequest &operator=(const ServerlessApplicationRepositoryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServerlessApplicationRepositoryRequest &other) const;


protected:
    /// @cond internal
    explicit ServerlessApplicationRepositoryRequest(ServerlessApplicationRepositoryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
