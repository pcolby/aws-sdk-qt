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

#ifndef QTAWS_AMPLIFYREQUEST_H
#define QTAWS_AMPLIFYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsamplifyglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Amplify {

class AmplifyRequestPrivate;

class QTAWSAMPLIFY_EXPORT AmplifyRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Amplify.
    enum Action {
        CreateAppAction,
        CreateBackendEnvironmentAction,
        CreateBranchAction,
        CreateDeploymentAction,
        CreateDomainAssociationAction,
        CreateWebhookAction,
        DeleteAppAction,
        DeleteBackendEnvironmentAction,
        DeleteBranchAction,
        DeleteDomainAssociationAction,
        DeleteJobAction,
        DeleteWebhookAction,
        GenerateAccessLogsAction,
        GetAppAction,
        GetArtifactUrlAction,
        GetBackendEnvironmentAction,
        GetBranchAction,
        GetDomainAssociationAction,
        GetJobAction,
        GetWebhookAction,
        ListAppsAction,
        ListArtifactsAction,
        ListBackendEnvironmentsAction,
        ListBranchesAction,
        ListDomainAssociationsAction,
        ListJobsAction,
        ListTagsForResourceAction,
        ListWebhooksAction,
        StartDeploymentAction,
        StartJobAction,
        StopJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAppAction,
        UpdateBranchAction,
        UpdateDomainAssociationAction,
        UpdateWebhookAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AmplifyRequest(const Action action);
    AmplifyRequest(const AmplifyRequest &other);
    AmplifyRequest &operator=(const AmplifyRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AmplifyRequest &other) const;


protected:
    /// @cond internal
    AmplifyRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit AmplifyRequest(AmplifyRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
