// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOCATIONREQUEST_H
#define QTAWS_LOCATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslocationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Location {

class LocationRequestPrivate;

class QTAWSLOCATION_EXPORT LocationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Location.
    enum Action {
        AssociateTrackerConsumerAction,
        BatchDeleteDevicePositionHistoryAction,
        BatchDeleteGeofenceAction,
        BatchEvaluateGeofencesAction,
        BatchGetDevicePositionAction,
        BatchPutGeofenceAction,
        BatchUpdateDevicePositionAction,
        CalculateRouteAction,
        CalculateRouteMatrixAction,
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
        SearchPlaceIndexForSuggestionsAction,
        SearchPlaceIndexForTextAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateGeofenceCollectionAction,
        UpdateMapAction,
        UpdatePlaceIndexAction,
        UpdateRouteCalculatorAction,
        UpdateTrackerAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LocationRequest(const Action action);
    LocationRequest(const LocationRequest &other);
    LocationRequest &operator=(const LocationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LocationRequest &other) const;


protected:
    /// @cond internal
    explicit LocationRequest(LocationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LocationRequest)

};

} // namespace Location
} // namespace QtAws

#endif
