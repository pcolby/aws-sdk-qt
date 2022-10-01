// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMQUERYREQUEST_H
#define QTAWS_TIMESTREAMQUERYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstimestreamqueryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT TimestreamQueryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by TimestreamQuery.
    enum Action {
        CancelQueryAction,
        CreateScheduledQueryAction,
        DeleteScheduledQueryAction,
        DescribeEndpointsAction,
        DescribeScheduledQueryAction,
        ExecuteScheduledQueryAction,
        ListScheduledQueriesAction,
        ListTagsForResourceAction,
        PrepareQueryAction,
        QueryAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateScheduledQueryAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TimestreamQueryRequest(const Action action);
    TimestreamQueryRequest(const TimestreamQueryRequest &other);
    TimestreamQueryRequest &operator=(const TimestreamQueryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TimestreamQueryRequest &other) const;


protected:
    /// @cond internal
    explicit TimestreamQueryRequest(TimestreamQueryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TimestreamQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
