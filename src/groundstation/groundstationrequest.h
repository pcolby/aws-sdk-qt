// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUNDSTATIONREQUEST_H
#define QTAWS_GROUNDSTATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgroundstationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GroundStation {

class GroundStationRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GroundStationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GroundStation.
    enum Action {
        CancelContactAction,
        CreateConfigAction,
        CreateDataflowEndpointGroupAction,
        CreateMissionProfileAction,
        DeleteConfigAction,
        DeleteDataflowEndpointGroupAction,
        DeleteMissionProfileAction,
        DescribeContactAction,
        GetConfigAction,
        GetDataflowEndpointGroupAction,
        GetMinuteUsageAction,
        GetMissionProfileAction,
        GetSatelliteAction,
        ListConfigsAction,
        ListContactsAction,
        ListDataflowEndpointGroupsAction,
        ListGroundStationsAction,
        ListMissionProfilesAction,
        ListSatellitesAction,
        ListTagsForResourceAction,
        ReserveContactAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConfigAction,
        UpdateMissionProfileAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GroundStationRequest(const Action action);
    GroundStationRequest(const GroundStationRequest &other);
    GroundStationRequest &operator=(const GroundStationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GroundStationRequest &other) const;


protected:
    /// @cond internal
    explicit GroundStationRequest(GroundStationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GroundStationRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
