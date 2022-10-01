// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONDISCOVERYREQUEST_H
#define QTAWS_APPLICATIONDISCOVERYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapplicationdiscoveryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApplicationDiscovery {

class ApplicationDiscoveryRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ApplicationDiscoveryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApplicationDiscovery.
    enum Action {
        AssociateConfigurationItemsToApplicationAction,
        BatchDeleteImportDataAction,
        CreateApplicationAction,
        CreateTagsAction,
        DeleteApplicationsAction,
        DeleteTagsAction,
        DescribeAgentsAction,
        DescribeConfigurationsAction,
        DescribeContinuousExportsAction,
        DescribeExportConfigurationsAction,
        DescribeExportTasksAction,
        DescribeImportTasksAction,
        DescribeTagsAction,
        DisassociateConfigurationItemsFromApplicationAction,
        ExportConfigurationsAction,
        GetDiscoverySummaryAction,
        ListConfigurationsAction,
        ListServerNeighborsAction,
        StartContinuousExportAction,
        StartDataCollectionByAgentIdsAction,
        StartExportTaskAction,
        StartImportTaskAction,
        StopContinuousExportAction,
        StopDataCollectionByAgentIdsAction,
        UpdateApplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApplicationDiscoveryRequest(const Action action);
    ApplicationDiscoveryRequest(const ApplicationDiscoveryRequest &other);
    ApplicationDiscoveryRequest &operator=(const ApplicationDiscoveryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApplicationDiscoveryRequest &other) const;


protected:
    /// @cond internal
    explicit ApplicationDiscoveryRequest(ApplicationDiscoveryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
