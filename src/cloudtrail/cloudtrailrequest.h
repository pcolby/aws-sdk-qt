// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDTRAILREQUEST_H
#define QTAWS_CLOUDTRAILREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudtrailglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudTrail {

class CloudTrailRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT CloudTrailRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudTrail.
    enum Action {
        AddTagsAction,
        CancelQueryAction,
        CreateEventDataStoreAction,
        CreateTrailAction,
        DeleteEventDataStoreAction,
        DeleteTrailAction,
        DescribeQueryAction,
        DescribeTrailsAction,
        GetChannelAction,
        GetEventDataStoreAction,
        GetEventSelectorsAction,
        GetImportAction,
        GetInsightSelectorsAction,
        GetQueryResultsAction,
        GetTrailAction,
        GetTrailStatusAction,
        ListChannelsAction,
        ListEventDataStoresAction,
        ListImportFailuresAction,
        ListImportsAction,
        ListPublicKeysAction,
        ListQueriesAction,
        ListTagsAction,
        ListTrailsAction,
        LookupEventsAction,
        PutEventSelectorsAction,
        PutInsightSelectorsAction,
        RemoveTagsAction,
        RestoreEventDataStoreAction,
        StartImportAction,
        StartLoggingAction,
        StartQueryAction,
        StopImportAction,
        StopLoggingAction,
        UpdateEventDataStoreAction,
        UpdateTrailAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudTrailRequest(const Action action);
    CloudTrailRequest(const CloudTrailRequest &other);
    CloudTrailRequest &operator=(const CloudTrailRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudTrailRequest &other) const;


protected:
    /// @cond internal
    explicit CloudTrailRequest(CloudTrailRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
