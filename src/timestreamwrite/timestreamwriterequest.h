// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITEREQUEST_H
#define QTAWS_TIMESTREAMWRITEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstimestreamwriteglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT TimestreamWriteRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by TimestreamWrite.
    enum Action {
        CreateDatabaseAction,
        CreateTableAction,
        DeleteDatabaseAction,
        DeleteTableAction,
        DescribeDatabaseAction,
        DescribeEndpointsAction,
        DescribeTableAction,
        ListDatabasesAction,
        ListTablesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatabaseAction,
        UpdateTableAction,
        WriteRecordsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TimestreamWriteRequest(const Action action);
    TimestreamWriteRequest(const TimestreamWriteRequest &other);
    TimestreamWriteRequest &operator=(const TimestreamWriteRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TimestreamWriteRequest &other) const;


protected:
    /// @cond internal
    explicit TimestreamWriteRequest(TimestreamWriteRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TimestreamWriteRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
