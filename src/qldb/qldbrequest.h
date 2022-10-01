// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBREQUEST_H
#define QTAWS_QLDBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsqldbglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Qldb {

class QldbRequestPrivate;

class QTAWSQLDB_EXPORT QldbRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Qldb.
    enum Action {
        CancelJournalKinesisStreamAction,
        CreateLedgerAction,
        DeleteLedgerAction,
        DescribeJournalKinesisStreamAction,
        DescribeJournalS3ExportAction,
        DescribeLedgerAction,
        ExportJournalToS3Action,
        GetBlockAction,
        GetDigestAction,
        GetRevisionAction,
        ListJournalKinesisStreamsForLedgerAction,
        ListJournalS3ExportsAction,
        ListJournalS3ExportsForLedgerAction,
        ListLedgersAction,
        ListTagsForResourceAction,
        StreamJournalToKinesisAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateLedgerAction,
        UpdateLedgerPermissionsModeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    QldbRequest(const Action action);
    QldbRequest(const QldbRequest &other);
    QldbRequest &operator=(const QldbRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const QldbRequest &other) const;


protected:
    /// @cond internal
    explicit QldbRequest(QldbRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QldbRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
