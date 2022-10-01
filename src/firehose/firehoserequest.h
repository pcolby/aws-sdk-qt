// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FIREHOSEREQUEST_H
#define QTAWS_FIREHOSEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfirehoseglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Firehose {

class FirehoseRequestPrivate;

class QTAWSFIREHOSE_EXPORT FirehoseRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Firehose.
    enum Action {
        CreateDeliveryStreamAction,
        DeleteDeliveryStreamAction,
        DescribeDeliveryStreamAction,
        ListDeliveryStreamsAction,
        ListTagsForDeliveryStreamAction,
        PutRecordAction,
        PutRecordBatchAction,
        StartDeliveryStreamEncryptionAction,
        StopDeliveryStreamEncryptionAction,
        TagDeliveryStreamAction,
        UntagDeliveryStreamAction,
        UpdateDestinationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FirehoseRequest(const Action action);
    FirehoseRequest(const FirehoseRequest &other);
    FirehoseRequest &operator=(const FirehoseRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FirehoseRequest &other) const;


protected:
    /// @cond internal
    explicit FirehoseRequest(FirehoseRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FirehoseRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
