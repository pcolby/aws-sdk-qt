// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANEREQUEST_H
#define QTAWS_IOTJOBSDATAPLANEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotjobsdataplaneglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneRequestPrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT IoTJobsDataPlaneRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTJobsDataPlane.
    enum Action {
        DescribeJobExecutionAction,
        GetPendingJobExecutionsAction,
        StartNextPendingJobExecutionAction,
        UpdateJobExecutionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTJobsDataPlaneRequest(const Action action);
    IoTJobsDataPlaneRequest(const IoTJobsDataPlaneRequest &other);
    IoTJobsDataPlaneRequest &operator=(const IoTJobsDataPlaneRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTJobsDataPlaneRequest &other) const;


protected:
    /// @cond internal
    explicit IoTJobsDataPlaneRequest(IoTJobsDataPlaneRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTJobsDataPlaneRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
