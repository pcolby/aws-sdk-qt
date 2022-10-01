// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSREQUEST_H
#define QTAWS_EBSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsebsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ebs {

class EbsRequestPrivate;

class QTAWSEBS_EXPORT EbsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ebs.
    enum Action {
        CompleteSnapshotAction,
        GetSnapshotBlockAction,
        ListChangedBlocksAction,
        ListSnapshotBlocksAction,
        PutSnapshotBlockAction,
        StartSnapshotAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EbsRequest(const Action action);
    EbsRequest(const EbsRequest &other);
    EbsRequest &operator=(const EbsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EbsRequest &other) const;


protected:
    /// @cond internal
    explicit EbsRequest(EbsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EbsRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
