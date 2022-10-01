// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISREQUEST_H
#define QTAWS_KINESISREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Kinesis {

class KinesisRequestPrivate;

class QTAWSKINESIS_EXPORT KinesisRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Kinesis.
    enum Action {
        AddTagsToStreamAction,
        CreateStreamAction,
        DecreaseStreamRetentionPeriodAction,
        DeleteStreamAction,
        DeregisterStreamConsumerAction,
        DescribeLimitsAction,
        DescribeStreamAction,
        DescribeStreamConsumerAction,
        DescribeStreamSummaryAction,
        DisableEnhancedMonitoringAction,
        EnableEnhancedMonitoringAction,
        GetRecordsAction,
        GetShardIteratorAction,
        IncreaseStreamRetentionPeriodAction,
        ListShardsAction,
        ListStreamConsumersAction,
        ListStreamsAction,
        ListTagsForStreamAction,
        MergeShardsAction,
        PutRecordAction,
        PutRecordsAction,
        RegisterStreamConsumerAction,
        RemoveTagsFromStreamAction,
        SplitShardAction,
        StartStreamEncryptionAction,
        StopStreamEncryptionAction,
        SubscribeToShardAction,
        UpdateShardCountAction,
        UpdateStreamModeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisRequest(const Action action);
    KinesisRequest(const KinesisRequest &other);
    KinesisRequest &operator=(const KinesisRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisRequest(KinesisRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
