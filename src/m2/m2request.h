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

#ifndef QTAWS_M2REQUEST_H
#define QTAWS_M2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsm2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace M2 {

class M2RequestPrivate;

class QTAWSM2_EXPORT M2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by M2.
    enum Action {
        CancelBatchJobExecutionAction,
        CreateApplicationAction,
        CreateDataSetImportTaskAction,
        CreateDeploymentAction,
        CreateEnvironmentAction,
        DeleteApplicationAction,
        DeleteApplicationFromEnvironmentAction,
        DeleteEnvironmentAction,
        GetApplicationAction,
        GetApplicationVersionAction,
        GetBatchJobExecutionAction,
        GetDataSetDetailsAction,
        GetDataSetImportTaskAction,
        GetDeploymentAction,
        GetEnvironmentAction,
        ListApplicationVersionsAction,
        ListApplicationsAction,
        ListBatchJobDefinitionsAction,
        ListBatchJobExecutionsAction,
        ListDataSetImportHistoryAction,
        ListDataSetsAction,
        ListDeploymentsAction,
        ListEngineVersionsAction,
        ListEnvironmentsAction,
        ListTagsForResourceAction,
        StartApplicationAction,
        StartBatchJobAction,
        StopApplicationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateEnvironmentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    M2Request(const Action action);
    M2Request(const M2Request &other);
    M2Request &operator=(const M2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const M2Request &other) const;


protected:
    /// @cond internal
    explicit M2Request(M2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(M2Request)

};

} // namespace M2
} // namespace QtAws

#endif
