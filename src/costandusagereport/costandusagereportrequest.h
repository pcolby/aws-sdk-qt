// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTANDUSAGEREPORTREQUEST_H
#define QTAWS_COSTANDUSAGEREPORTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscostandusagereportglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportRequestPrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT CostandUsageReportRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CostandUsageReport.
    enum Action {
        DeleteReportDefinitionAction,
        DescribeReportDefinitionsAction,
        ModifyReportDefinitionAction,
        PutReportDefinitionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CostandUsageReportRequest(const Action action);
    CostandUsageReportRequest(const CostandUsageReportRequest &other);
    CostandUsageReportRequest &operator=(const CostandUsageReportRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CostandUsageReportRequest &other) const;


protected:
    /// @cond internal
    explicit CostandUsageReportRequest(CostandUsageReportRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CostandUsageReportRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
