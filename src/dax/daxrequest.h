// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DAXREQUEST_H
#define QTAWS_DAXREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdaxglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Dax {

class DaxRequestPrivate;

class QTAWSDAX_EXPORT DaxRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Dax.
    enum Action {
        CreateClusterAction,
        CreateParameterGroupAction,
        CreateSubnetGroupAction,
        DecreaseReplicationFactorAction,
        DeleteClusterAction,
        DeleteParameterGroupAction,
        DeleteSubnetGroupAction,
        DescribeClustersAction,
        DescribeDefaultParametersAction,
        DescribeEventsAction,
        DescribeParameterGroupsAction,
        DescribeParametersAction,
        DescribeSubnetGroupsAction,
        IncreaseReplicationFactorAction,
        ListTagsAction,
        RebootNodeAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateClusterAction,
        UpdateParameterGroupAction,
        UpdateSubnetGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DaxRequest(const Action action);
    DaxRequest(const DaxRequest &other);
    DaxRequest &operator=(const DaxRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DaxRequest &other) const;


protected:
    /// @cond internal
    explicit DaxRequest(DaxRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DaxRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
