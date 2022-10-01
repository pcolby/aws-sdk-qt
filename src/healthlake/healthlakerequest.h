// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHLAKEREQUEST_H
#define QTAWS_HEALTHLAKEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawshealthlakeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace HealthLake {

class HealthLakeRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT HealthLakeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by HealthLake.
    enum Action {
        CreateFHIRDatastoreAction,
        DeleteFHIRDatastoreAction,
        DescribeFHIRDatastoreAction,
        DescribeFHIRExportJobAction,
        DescribeFHIRImportJobAction,
        ListFHIRDatastoresAction,
        ListFHIRExportJobsAction,
        ListFHIRImportJobsAction,
        ListTagsForResourceAction,
        StartFHIRExportJobAction,
        StartFHIRImportJobAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    HealthLakeRequest(const Action action);
    HealthLakeRequest(const HealthLakeRequest &other);
    HealthLakeRequest &operator=(const HealthLakeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const HealthLakeRequest &other) const;


protected:
    /// @cond internal
    explicit HealthLakeRequest(HealthLakeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HealthLakeRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
