// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPFLOWREQUEST_H
#define QTAWS_APPFLOWREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappflowglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Appflow {

class AppflowRequestPrivate;

class QTAWSAPPFLOW_EXPORT AppflowRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Appflow.
    enum Action {
        CreateConnectorProfileAction,
        CreateFlowAction,
        DeleteConnectorProfileAction,
        DeleteFlowAction,
        DescribeConnectorAction,
        DescribeConnectorEntityAction,
        DescribeConnectorProfilesAction,
        DescribeConnectorsAction,
        DescribeFlowAction,
        DescribeFlowExecutionRecordsAction,
        ListConnectorEntitiesAction,
        ListConnectorsAction,
        ListFlowsAction,
        ListTagsForResourceAction,
        RegisterConnectorAction,
        StartFlowAction,
        StopFlowAction,
        TagResourceAction,
        UnregisterConnectorAction,
        UntagResourceAction,
        UpdateConnectorProfileAction,
        UpdateFlowAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppflowRequest(const Action action);
    AppflowRequest(const AppflowRequest &other);
    AppflowRequest &operator=(const AppflowRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppflowRequest &other) const;


protected:
    /// @cond internal
    explicit AppflowRequest(AppflowRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppflowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
