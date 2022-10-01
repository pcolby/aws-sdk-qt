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

#include "locationrequest.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::LocationRequest
 * \brief The LocationRequest class provides an interface for Location requests.
 *
 * \inmodule QtAwsLocation
 */

/*!
 * \enum LocationRequest::Action
 *
 * This enum describes the actions that can be performed as Location
 * requests.
 *
 * \value AssociateTrackerConsumerAction Location AssociateTrackerConsumer action.
 * \value BatchDeleteDevicePositionHistoryAction Location BatchDeleteDevicePositionHistory action.
 * \value BatchDeleteGeofenceAction Location BatchDeleteGeofence action.
 * \value BatchEvaluateGeofencesAction Location BatchEvaluateGeofences action.
 * \value BatchGetDevicePositionAction Location BatchGetDevicePosition action.
 * \value BatchPutGeofenceAction Location BatchPutGeofence action.
 * \value BatchUpdateDevicePositionAction Location BatchUpdateDevicePosition action.
 * \value CalculateRouteAction Location CalculateRoute action.
 * \value CalculateRouteMatrixAction Location CalculateRouteMatrix action.
 * \value CreateGeofenceCollectionAction Location CreateGeofenceCollection action.
 * \value CreateMapAction Location CreateMap action.
 * \value CreatePlaceIndexAction Location CreatePlaceIndex action.
 * \value CreateRouteCalculatorAction Location CreateRouteCalculator action.
 * \value CreateTrackerAction Location CreateTracker action.
 * \value DeleteGeofenceCollectionAction Location DeleteGeofenceCollection action.
 * \value DeleteMapAction Location DeleteMap action.
 * \value DeletePlaceIndexAction Location DeletePlaceIndex action.
 * \value DeleteRouteCalculatorAction Location DeleteRouteCalculator action.
 * \value DeleteTrackerAction Location DeleteTracker action.
 * \value DescribeGeofenceCollectionAction Location DescribeGeofenceCollection action.
 * \value DescribeMapAction Location DescribeMap action.
 * \value DescribePlaceIndexAction Location DescribePlaceIndex action.
 * \value DescribeRouteCalculatorAction Location DescribeRouteCalculator action.
 * \value DescribeTrackerAction Location DescribeTracker action.
 * \value DisassociateTrackerConsumerAction Location DisassociateTrackerConsumer action.
 * \value GetDevicePositionAction Location GetDevicePosition action.
 * \value GetDevicePositionHistoryAction Location GetDevicePositionHistory action.
 * \value GetGeofenceAction Location GetGeofence action.
 * \value GetMapGlyphsAction Location GetMapGlyphs action.
 * \value GetMapSpritesAction Location GetMapSprites action.
 * \value GetMapStyleDescriptorAction Location GetMapStyleDescriptor action.
 * \value GetMapTileAction Location GetMapTile action.
 * \value ListDevicePositionsAction Location ListDevicePositions action.
 * \value ListGeofenceCollectionsAction Location ListGeofenceCollections action.
 * \value ListGeofencesAction Location ListGeofences action.
 * \value ListMapsAction Location ListMaps action.
 * \value ListPlaceIndexesAction Location ListPlaceIndexes action.
 * \value ListRouteCalculatorsAction Location ListRouteCalculators action.
 * \value ListTagsForResourceAction Location ListTagsForResource action.
 * \value ListTrackerConsumersAction Location ListTrackerConsumers action.
 * \value ListTrackersAction Location ListTrackers action.
 * \value PutGeofenceAction Location PutGeofence action.
 * \value SearchPlaceIndexForPositionAction Location SearchPlaceIndexForPosition action.
 * \value SearchPlaceIndexForSuggestionsAction Location SearchPlaceIndexForSuggestions action.
 * \value SearchPlaceIndexForTextAction Location SearchPlaceIndexForText action.
 * \value TagResourceAction Location TagResource action.
 * \value UntagResourceAction Location UntagResource action.
 * \value UpdateGeofenceCollectionAction Location UpdateGeofenceCollection action.
 * \value UpdateMapAction Location UpdateMap action.
 * \value UpdatePlaceIndexAction Location UpdatePlaceIndex action.
 * \value UpdateRouteCalculatorAction Location UpdateRouteCalculator action.
 * \value UpdateTrackerAction Location UpdateTracker action.
 */

/*!
 * Constructs a LocationRequest object for Location \a action.
 */
LocationRequest::LocationRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LocationRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LocationRequest::LocationRequest(const LocationRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LocationRequest object to be equal to \a other.
 */
LocationRequest& LocationRequest::operator=(const LocationRequest &other)
{
    Q_D(LocationRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LocationRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LocationRequestPrivate.
 */
LocationRequest::LocationRequest(LocationRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Location action to be performed by this request.
 */
LocationRequest::Action LocationRequest::action() const
{
    Q_D(const LocationRequest);
    return d->action;
}

/*!
 * Returns the name of the Location action to be performed by this request.
 */
QString LocationRequest::actionString() const
{
    return LocationRequestPrivate::toString(action());
}

/*!
 * Returns the Location API version implemented by this request.
 */
QString LocationRequest::apiVersion() const
{
    Q_D(const LocationRequest);
    return d->apiVersion;
}

/*!
 * Sets the Location action to be performed by this request to \a action.
 */
void LocationRequest::setAction(const Action action)
{
    Q_D(LocationRequest);
    d->action = action;
}

/*!
 * Sets the Location API version to include in this request to \a version.
 */
void LocationRequest::setApiVersion(const QString &version)
{
    Q_D(LocationRequest);
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
bool LocationRequest::operator==(const LocationRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Location queue name.
 *
 * @par From Location FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Location queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LocationRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LocationRequest::clearParameter(const QString &name)
{
    Q_D(LocationRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LocationRequest::clearParameters()
{
    Q_D(LocationRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LocationRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LocationRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LocationRequest::parameters() const
{
    Q_D(const LocationRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LocationRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LocationRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LocationRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LocationRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Location request using the given
 * \a endpoint.
 *
 * This Location implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LocationRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LocationRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Location::LocationRequestPrivate
 * \brief The LocationRequestPrivate class provides private implementation for LocationRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
LocationRequestPrivate::LocationRequestPrivate(const LocationRequest::Action action, LocationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-11-19"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LocationRequest class's copy constructor.
 */
LocationRequestPrivate::LocationRequestPrivate(const LocationRequestPrivate &other,
                                     LocationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LocationRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Location service's Action
 * query parameters.
 */
QString LocationRequestPrivate::toString(const LocationRequest::Action &action)
{
    #define ActionToString(action) \
        case LocationRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateTrackerConsumer);
        ActionToString(BatchDeleteDevicePositionHistory);
        ActionToString(BatchDeleteGeofence);
        ActionToString(BatchEvaluateGeofences);
        ActionToString(BatchGetDevicePosition);
        ActionToString(BatchPutGeofence);
        ActionToString(BatchUpdateDevicePosition);
        ActionToString(CalculateRoute);
        ActionToString(CalculateRouteMatrix);
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
        ActionToString(SearchPlaceIndexForSuggestions);
        ActionToString(SearchPlaceIndexForText);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateGeofenceCollection);
        ActionToString(UpdateMap);
        ActionToString(UpdatePlaceIndex);
        ActionToString(UpdateRouteCalculator);
        ActionToString(UpdateTracker);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Location
} // namespace QtAws
