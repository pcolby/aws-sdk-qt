// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAEXCHANGEREQUEST_H
#define QTAWS_DATAEXCHANGEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdataexchangeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DataExchange {

class DataExchangeRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT DataExchangeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DataExchange.
    enum Action {
        CancelJobAction,
        CreateDataSetAction,
        CreateEventActionAction,
        CreateJobAction,
        CreateRevisionAction,
        DeleteAssetAction,
        DeleteDataSetAction,
        DeleteEventActionAction,
        DeleteRevisionAction,
        GetAssetAction,
        GetDataSetAction,
        GetEventActionAction,
        GetJobAction,
        GetRevisionAction,
        ListDataSetRevisionsAction,
        ListDataSetsAction,
        ListEventActionsAction,
        ListJobsAction,
        ListRevisionAssetsAction,
        ListTagsForResourceAction,
        RevokeRevisionAction,
        SendApiAssetAction,
        StartJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAssetAction,
        UpdateDataSetAction,
        UpdateEventActionAction,
        UpdateRevisionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DataExchangeRequest(const Action action);
    DataExchangeRequest(const DataExchangeRequest &other);
    DataExchangeRequest &operator=(const DataExchangeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DataExchangeRequest &other) const;


protected:
    /// @cond internal
    explicit DataExchangeRequest(DataExchangeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataExchangeRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
