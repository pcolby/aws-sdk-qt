// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSREQUEST_H
#define QTAWS_SQSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssqsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Sqs {

class SqsRequestPrivate;

class QTAWSSQS_EXPORT SqsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Sqs.
    enum Action {
        AddPermissionAction,
        ChangeMessageVisibilityAction,
        ChangeMessageVisibilityBatchAction,
        CreateQueueAction,
        DeleteMessageAction,
        DeleteMessageBatchAction,
        DeleteQueueAction,
        GetQueueAttributesAction,
        GetQueueUrlAction,
        ListDeadLetterSourceQueuesAction,
        ListQueueTagsAction,
        ListQueuesAction,
        PurgeQueueAction,
        ReceiveMessageAction,
        RemovePermissionAction,
        SendMessageAction,
        SendMessageBatchAction,
        SetQueueAttributesAction,
        TagQueueAction,
        UntagQueueAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SqsRequest(const Action action);
    SqsRequest(const SqsRequest &other);
    SqsRequest &operator=(const SqsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SqsRequest &other) const;


protected:
    /// @cond internal
    explicit SqsRequest(SqsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SqsRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
