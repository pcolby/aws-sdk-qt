// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONCOSTPROFILERREQUEST_H
#define QTAWS_APPLICATIONCOSTPROFILERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapplicationcostprofilerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ApplicationCostProfilerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApplicationCostProfiler.
    enum Action {
        DeleteReportDefinitionAction,
        GetReportDefinitionAction,
        ImportApplicationUsageAction,
        ListReportDefinitionsAction,
        PutReportDefinitionAction,
        UpdateReportDefinitionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApplicationCostProfilerRequest(const Action action);
    ApplicationCostProfilerRequest(const ApplicationCostProfilerRequest &other);
    ApplicationCostProfilerRequest &operator=(const ApplicationCostProfilerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApplicationCostProfilerRequest &other) const;


protected:
    /// @cond internal
    explicit ApplicationCostProfilerRequest(ApplicationCostProfilerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationCostProfilerRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
