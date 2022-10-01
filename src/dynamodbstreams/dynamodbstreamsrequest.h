// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSREQUEST_H
#define QTAWS_DYNAMODBSTREAMSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdynamodbstreamsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsRequestPrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT DynamoDbStreamsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DynamoDbStreams.
    enum Action {
        DescribeStreamAction,
        GetRecordsAction,
        GetShardIteratorAction,
        ListStreamsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DynamoDbStreamsRequest(const Action action);
    DynamoDbStreamsRequest(const DynamoDbStreamsRequest &other);
    DynamoDbStreamsRequest &operator=(const DynamoDbStreamsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DynamoDbStreamsRequest &other) const;


protected:
    /// @cond internal
    explicit DynamoDbStreamsRequest(DynamoDbStreamsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DynamoDbStreamsRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
