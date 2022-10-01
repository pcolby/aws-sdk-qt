// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSDATAREQUEST_H
#define QTAWS_RDSDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrdsdataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RdsData {

class RdsDataRequestPrivate;

class QTAWSRDSDATA_EXPORT RdsDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RdsData.
    enum Action {
        BatchExecuteStatementAction,
        BeginTransactionAction,
        CommitTransactionAction,
        ExecuteSqlAction,
        ExecuteStatementAction,
        RollbackTransactionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RdsDataRequest(const Action action);
    RdsDataRequest(const RdsDataRequest &other);
    RdsDataRequest &operator=(const RdsDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RdsDataRequest &other) const;


protected:
    /// @cond internal
    explicit RdsDataRequest(RdsDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RdsDataRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
