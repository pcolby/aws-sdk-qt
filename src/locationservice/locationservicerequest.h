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

#ifndef QTAWS_LOCATIONSERVICEREQUEST_H
#define QTAWS_LOCATIONSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LocationService {

class LocationServiceRequestPrivate;

class QTAWS_EXPORT LocationServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LocationService.
    enum Action {
        AssociateTrackerConsumerAction,
        BatchDeleteDevicePositionHistoryAction,
        BatchDeleteGeofenceAction,
        BatchEvaluateGeofencesAction,
        BatchGetDevicePositionAction,
        BatchPutGeofenceAction,
        BatchUpdateDevicePositionAction,
        CalculateRouteAction,
        CreateGeofenceCollectionAction,
        CreateMapAction,
        CreatePlaceIndexAction,
        CreateRouteCalculatorAction,
        CreateTrackerAction,
        DeleteGeofenceCollectionAction,
        DeleteMapAction,
        DeletePlaceIndexAction,
        DeleteRouteCalculatorAction,
        DeleteTrackerAction,
        DescribeGeofenceCollectionAction,
        DescribeMapAction,
        DescribePlaceIndexAction,
        DescribeRouteCalculatorAction,
        DescribeTrackerAction,
        DisassociateTrackerConsumerAction,
        GetDevicePositionAction,
        GetDevicePositionHistoryAction,
        GetGeofenceAction,
        GetMapGlyphsAction,
        GetMapSpritesAction,
        GetMapStyleDescriptorAction,
        GetMapTileAction,
        ListDevicePositionsAction,
        ListGeofenceCollectionsAction,
        ListGeofencesAction,
        ListMapsAction,
        ListPlaceIndexesAction,
        ListRouteCalculatorsAction,
        ListTagsForResourceAction,
        ListTrackerConsumersAction,
        ListTrackersAction,
        PutGeofenceAction,
        SearchPlaceIndexForPositionAction,
        SearchPlaceIndexForTextAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LocationServiceRequest(const Action action);
    LocationServiceRequest(const LocationServiceRequest &other);
    LocationServiceRequest &operator=(const LocationServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LocationServiceRequest &other) const;


protected:
    /// @cond internal
    LocationServiceRequestPrivate * const d_ptr; ///< Internal d-pointer.
    LocationServiceRequest(LocationServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LocationServiceRequest)

};

} // namespace LocationService
} // namespace QtAws

#endif
