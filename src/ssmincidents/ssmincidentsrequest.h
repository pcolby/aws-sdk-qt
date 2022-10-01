// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMINCIDENTSREQUEST_H
#define QTAWS_SSMINCIDENTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssmincidentsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT SsmIncidentsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SsmIncidents.
    enum Action {
        CreateReplicationSetAction,
        CreateResponsePlanAction,
        CreateTimelineEventAction,
        DeleteIncidentRecordAction,
        DeleteReplicationSetAction,
        DeleteResourcePolicyAction,
        DeleteResponsePlanAction,
        DeleteTimelineEventAction,
        GetIncidentRecordAction,
        GetReplicationSetAction,
        GetResourcePoliciesAction,
        GetResponsePlanAction,
        GetTimelineEventAction,
        ListIncidentRecordsAction,
        ListRelatedItemsAction,
        ListReplicationSetsAction,
        ListResponsePlansAction,
        ListTagsForResourceAction,
        ListTimelineEventsAction,
        PutResourcePolicyAction,
        StartIncidentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDeletionProtectionAction,
        UpdateIncidentRecordAction,
        UpdateRelatedItemsAction,
        UpdateReplicationSetAction,
        UpdateResponsePlanAction,
        UpdateTimelineEventAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsmIncidentsRequest(const Action action);
    SsmIncidentsRequest(const SsmIncidentsRequest &other);
    SsmIncidentsRequest &operator=(const SsmIncidentsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsmIncidentsRequest &other) const;


protected:
    /// @cond internal
    explicit SsmIncidentsRequest(SsmIncidentsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmIncidentsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
