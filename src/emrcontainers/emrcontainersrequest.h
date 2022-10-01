// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCONTAINERSREQUEST_H
#define QTAWS_EMRCONTAINERSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsemrcontainersglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT EmrcontainersRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Emrcontainers.
    enum Action {
        CancelJobRunAction,
        CreateManagedEndpointAction,
        CreateVirtualClusterAction,
        DeleteManagedEndpointAction,
        DeleteVirtualClusterAction,
        DescribeJobRunAction,
        DescribeManagedEndpointAction,
        DescribeVirtualClusterAction,
        ListJobRunsAction,
        ListManagedEndpointsAction,
        ListTagsForResourceAction,
        ListVirtualClustersAction,
        StartJobRunAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EmrcontainersRequest(const Action action);
    EmrcontainersRequest(const EmrcontainersRequest &other);
    EmrcontainersRequest &operator=(const EmrcontainersRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EmrcontainersRequest &other) const;


protected:
    /// @cond internal
    explicit EmrcontainersRequest(EmrcontainersRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrcontainersRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
