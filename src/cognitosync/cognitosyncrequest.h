// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOSYNCREQUEST_H
#define QTAWS_COGNITOSYNCREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscognitosyncglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CognitoSync {

class CognitoSyncRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT CognitoSyncRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CognitoSync.
    enum Action {
        BulkPublishAction,
        DeleteDatasetAction,
        DescribeDatasetAction,
        DescribeIdentityPoolUsageAction,
        DescribeIdentityUsageAction,
        GetBulkPublishDetailsAction,
        GetCognitoEventsAction,
        GetIdentityPoolConfigurationAction,
        ListDatasetsAction,
        ListIdentityPoolUsageAction,
        ListRecordsAction,
        RegisterDeviceAction,
        SetCognitoEventsAction,
        SetIdentityPoolConfigurationAction,
        SubscribeToDatasetAction,
        UnsubscribeFromDatasetAction,
        UpdateRecordsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CognitoSyncRequest(const Action action);
    CognitoSyncRequest(const CognitoSyncRequest &other);
    CognitoSyncRequest &operator=(const CognitoSyncRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CognitoSyncRequest &other) const;


protected:
    /// @cond internal
    explicit CognitoSyncRequest(CognitoSyncRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoSyncRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
