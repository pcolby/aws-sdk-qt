// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOBILEREQUEST_H
#define QTAWS_MOBILEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmobileglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Mobile {

class MobileRequestPrivate;

class QTAWSMOBILE_EXPORT MobileRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Mobile.
    enum Action {
        CreateProjectAction,
        DeleteProjectAction,
        DescribeBundleAction,
        DescribeProjectAction,
        ExportBundleAction,
        ExportProjectAction,
        ListBundlesAction,
        ListProjectsAction,
        UpdateProjectAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MobileRequest(const Action action);
    MobileRequest(const MobileRequest &other);
    MobileRequest &operator=(const MobileRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MobileRequest &other) const;


protected:
    /// @cond internal
    explicit MobileRequest(MobileRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MobileRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
