// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWREQUEST_H
#define QTAWS_WORKMAILMESSAGEFLOWREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsworkmailmessageflowglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowRequestPrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT WorkMailMessageFlowRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkMailMessageFlow.
    enum Action {
        GetRawMessageContentAction,
        PutRawMessageContentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WorkMailMessageFlowRequest(const Action action);
    WorkMailMessageFlowRequest(const WorkMailMessageFlowRequest &other);
    WorkMailMessageFlowRequest &operator=(const WorkMailMessageFlowRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WorkMailMessageFlowRequest &other) const;


protected:
    /// @cond internal
    explicit WorkMailMessageFlowRequest(WorkMailMessageFlowRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkMailMessageFlowRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
