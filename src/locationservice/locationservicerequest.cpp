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

#include "locationservicerequest.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::LocationServiceRequest
 * \brief The LocationServiceRequest class provides an interface for LocationService requests.
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * \enum LocationServiceRequest::Action
 *
 * This enum describes the actions that can be performed as LocationService
 * requests.
 *
 * \value AssociateTrackerConsumerAction LocationService AssociateTrackerConsumer action.
 * \value BatchDeleteDevicePositionHistoryAction LocationService BatchDeleteDevicePositionHistory action.
 * \value BatchDeleteGeofenceAction LocationService BatchDeleteGeofence action.
 * \value BatchEvaluateGeofencesAction LocationService BatchEvaluateGeofences action.
 * \value BatchGetDevicePositionAction LocationService BatchGetDevicePosition action.
 * \value BatchPutGeofenceAction LocationService BatchPutGeofence action.
 * \value BatchUpdateDevicePositionAction LocationService BatchUpdateDevicePosition action.
 * \value CalculateRouteAction LocationService CalculateRoute action.
 * \value CreateGeofenceCollectionAction LocationService CreateGeofenceCollection action.
 * \value CreateMapAction LocationService CreateMap action.
 * \value CreatePlaceIndexAction LocationService CreatePlaceIndex action.
 * \value CreateRouteCalculatorAction LocationService CreateRouteCalculator action.
 * \value CreateTrackerAction LocationService CreateTracker action.
 * \value DeleteGeofenceCollectionAction LocationService DeleteGeofenceCollection action.
 * \value DeleteMapAction LocationService DeleteMap action.
 * \value DeletePlaceIndexAction LocationService DeletePlaceIndex action.
 * \value DeleteRouteCalculatorAction LocationService DeleteRouteCalculator action.
 * \value DeleteTrackerAction LocationService DeleteTracker action.
 * \value DescribeGeofenceCollectionAction LocationService DescribeGeofenceCollection action.
 * \value DescribeMapAction LocationService DescribeMap action.
 * \value DescribePlaceIndexAction LocationService DescribePlaceIndex action.
 * \value DescribeRouteCalculatorAction LocationService DescribeRouteCalculator action.
 * \value DescribeTrackerAction LocationService DescribeTracker action.
 * \value DisassociateTrackerConsumerAction LocationService DisassociateTrackerConsumer action.
 * \value GetDevicePositionAction LocationService GetDevicePosition action.
 * \value GetDevicePositionHistoryAction LocationService GetDevicePositionHistory action.
 * \value GetGeofenceAction LocationService GetGeofence action.
 * \value GetMapGlyphsAction LocationService GetMapGlyphs action.
 * \value GetMapSpritesAction LocationService GetMapSprites action.
 * \value GetMapStyleDescriptorAction LocationService GetMapStyleDescriptor action.
 * \value GetMapTileAction LocationService GetMapTile action.
 * \value ListDevicePositionsAction LocationService ListDevicePositions action.
 * \value ListGeofenceCollectionsAction LocationService ListGeofenceCollections action.
 * \value ListGeofencesAction LocationService ListGeofences action.
 * \value ListMapsAction LocationService ListMaps action.
 * \value ListPlaceIndexesAction LocationService ListPlaceIndexes action.
 * \value ListRouteCalculatorsAction LocationService ListRouteCalculators action.
 * \value ListTagsForResourceAction LocationService ListTagsForResource action.
 * \value ListTrackerConsumersAction LocationService ListTrackerConsumers action.
 * \value ListTrackersAction LocationService ListTrackers action.
 * \value PutGeofenceAction LocationService PutGeofence action.
 * \value SearchPlaceIndexForPositionAction LocationService SearchPlaceIndexForPosition action.
 * \value SearchPlaceIndexForTextAction LocationService SearchPlaceIndexForText action.
 * \value TagResourceAction LocationService TagResource action.
 * \value UntagResourceAction LocationService UntagResource action.
 */

/*!
 * Constructs a LocationServiceRequest object for LocationService \a action.
 */
LocationServiceRequest::LocationServiceRequest(const Action action)
    : d_ptr(new LocationServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LocationServiceRequest::LocationServiceRequest(const LocationServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new LocationServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LocationServiceRequest object to be equal to \a other.
 */
LocationServiceRequest& LocationServiceRequest::operator=(const LocationServiceRequest &other)
{
    Q_D(LocationServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LocationServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LocationServiceRequestPrivate.
 */
LocationServiceRequest::LocationServiceRequest(LocationServiceRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the LocationService action to be performed by this request.
 */
LocationServiceRequest::Action LocationServiceRequest::action() const
{
    Q_D(const LocationServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the LocationService action to be performed by this request.
 */
QString LocationServiceRequest::actionString() const
{
    return LocationServiceRequestPrivate::toString(action());
}

/*!
 * Returns the LocationService API version implemented by this request.
 */
QString LocationServiceRequest::apiVersion() const
{
    Q_D(const LocationServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the LocationService action to be performed by this request to \a action.
 */
void LocationServiceRequest::setAction(const Action action)
{
    Q_D(LocationServiceRequest);
    d->action = action;
}

/*!
 * Sets the LocationService API version to include in this request to \a version.
 */
void LocationServiceRequest::setApiVersion(const QString &version)
{
    Q_D(LocationServiceRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool LocationServiceRequest::operator==(const LocationServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LocationService queue name.
 *
 * @par From LocationService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LocationService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LocationServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LocationServiceRequest::clearParameter(const QString &name)
{
    Q_D(LocationServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LocationServiceRequest::clearParameters()
{
    Q_D(LocationServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LocationServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LocationServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LocationServiceRequest::parameters() const
{
    Q_D(const LocationServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LocationServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LocationServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LocationServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LocationServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LocationService request using the given
 * \a endpoint.
 *
 * This LocationService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LocationServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LocationServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LocationService::LocationServiceRequestPrivate
 * \brief The LocationServiceRequestPrivate class provides private implementation for LocationServiceRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a LocationServiceRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
LocationServiceRequestPrivate::LocationServiceRequestPrivate(const LocationServiceRequest::Action action, LocationServiceRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LocationServiceRequest class's copy constructor.
 */
LocationServiceRequestPrivate::LocationServiceRequestPrivate(const LocationServiceRequestPrivate &other,
                                     LocationServiceRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LocationServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LocationService service's Action
 * query parameters.
 */
QString LocationServiceRequestPrivate::toString(const LocationServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case LocationServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateTrackerConsumer);
        ActionToString(BatchDeleteDevicePositionHistory);
        ActionToString(BatchDeleteGeofence);
        ActionToString(BatchEvaluateGeofences);
        ActionToString(BatchGetDevicePosition);
        ActionToString(BatchPutGeofence);
        ActionToString(BatchUpdateDevicePosition);
        ActionToString(CalculateRoute);
        ActionToString(CreateGeofenceCollection);
        ActionToString(CreateMap);
        ActionToString(CreatePlaceIndex);
        ActionToString(CreateRouteCalculator);
        ActionToString(CreateTracker);
        ActionToString(DeleteGeofenceCollection);
        ActionToString(DeleteMap);
        ActionToString(DeletePlaceIndex);
        ActionToString(DeleteRouteCalculator);
        ActionToString(DeleteTracker);
        ActionToString(DescribeGeofenceCollection);
        ActionToString(DescribeMap);
        ActionToString(DescribePlaceIndex);
        ActionToString(DescribeRouteCalculator);
        ActionToString(DescribeTracker);
        ActionToString(DisassociateTrackerConsumer);
        ActionToString(GetDevicePosition);
        ActionToString(GetDevicePositionHistory);
        ActionToString(GetGeofence);
        ActionToString(GetMapGlyphs);
        ActionToString(GetMapSprites);
        ActionToString(GetMapStyleDescriptor);
        ActionToString(GetMapTile);
        ActionToString(ListDevicePositions);
        ActionToString(ListGeofenceCollections);
        ActionToString(ListGeofences);
        ActionToString(ListMaps);
        ActionToString(ListPlaceIndexes);
        ActionToString(ListRouteCalculators);
        ActionToString(ListTagsForResource);
        ActionToString(ListTrackerConsumers);
        ActionToString(ListTrackers);
        ActionToString(PutGeofence);
        ActionToString(SearchPlaceIndexForPosition);
        ActionToString(SearchPlaceIndexForText);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LocationService
} // namespace QtAws
