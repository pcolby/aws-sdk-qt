/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SSMINCIDENTSREQUEST_H
#define QTAWS_SSMINCIDENTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssmincidentsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SSMIncidents {

class SSMIncidentsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT SSMIncidentsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SSMIncidents.
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

    SSMIncidentsRequest(const Action action);
    SSMIncidentsRequest(const SSMIncidentsRequest &other);
    SSMIncidentsRequest &operator=(const SSMIncidentsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SSMIncidentsRequest &other) const;


protected:
    /// @cond internal
    SSMIncidentsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit SSMIncidentsRequest(SSMIncidentsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SSMIncidentsRequest)

};

} // namespace SSMIncidents
} // namespace QtAws

#endif
