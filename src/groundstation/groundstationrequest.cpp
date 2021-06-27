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

#include "groundstationrequest.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GroundStationRequest
 * \brief The GroundStationRequest class provides an interface for GroundStation requests.
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * \enum GroundStationRequest::Action
 *
 * This enum describes the actions that can be performed as GroundStation
 * requests.
 *
 * \value CancelContactAction GroundStation CancelContact action.
 * \value CreateConfigAction GroundStation CreateConfig action.
 * \value CreateDataflowEndpointGroupAction GroundStation CreateDataflowEndpointGroup action.
 * \value CreateMissionProfileAction GroundStation CreateMissionProfile action.
 * \value DeleteConfigAction GroundStation DeleteConfig action.
 * \value DeleteDataflowEndpointGroupAction GroundStation DeleteDataflowEndpointGroup action.
 * \value DeleteMissionProfileAction GroundStation DeleteMissionProfile action.
 * \value DescribeContactAction GroundStation DescribeContact action.
 * \value GetConfigAction GroundStation GetConfig action.
 * \value GetDataflowEndpointGroupAction GroundStation GetDataflowEndpointGroup action.
 * \value GetMinuteUsageAction GroundStation GetMinuteUsage action.
 * \value GetMissionProfileAction GroundStation GetMissionProfile action.
 * \value GetSatelliteAction GroundStation GetSatellite action.
 * \value ListConfigsAction GroundStation ListConfigs action.
 * \value ListContactsAction GroundStation ListContacts action.
 * \value ListDataflowEndpointGroupsAction GroundStation ListDataflowEndpointGroups action.
 * \value ListGroundStationsAction GroundStation ListGroundStations action.
 * \value ListMissionProfilesAction GroundStation ListMissionProfiles action.
 * \value ListSatellitesAction GroundStation ListSatellites action.
 * \value ListTagsForResourceAction GroundStation ListTagsForResource action.
 * \value ReserveContactAction GroundStation ReserveContact action.
 * \value TagResourceAction GroundStation TagResource action.
 * \value UntagResourceAction GroundStation UntagResource action.
 * \value UpdateConfigAction GroundStation UpdateConfig action.
 * \value UpdateMissionProfileAction GroundStation UpdateMissionProfile action.
 */

/*!
 * Constructs a GroundStationRequest object for GroundStation \a action.
 */
GroundStationRequest::GroundStationRequest(const Action action)
    : d_ptr(new GroundStationRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GroundStationRequest::GroundStationRequest(const GroundStationRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new GroundStationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GroundStationRequest object to be equal to \a other.
 */
GroundStationRequest& GroundStationRequest::operator=(const GroundStationRequest &other)
{
    Q_D(GroundStationRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GroundStationRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GroundStationRequestPrivate.
 */
GroundStationRequest::GroundStationRequest(GroundStationRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the GroundStation action to be performed by this request.
 */
GroundStationRequest::Action GroundStationRequest::action() const
{
    Q_D(const GroundStationRequest);
    return d->action;
}

/*!
 * Returns the name of the GroundStation action to be performed by this request.
 */
QString GroundStationRequest::actionString() const
{
    return GroundStationRequestPrivate::toString(action());
}

/*!
 * Returns the GroundStation API version implemented by this request.
 */
QString GroundStationRequest::apiVersion() const
{
    Q_D(const GroundStationRequest);
    return d->apiVersion;
}

/*!
 * Sets the GroundStation action to be performed by this request to \a action.
 */
void GroundStationRequest::setAction(const Action action)
{
    Q_D(GroundStationRequest);
    d->action = action;
}

/*!
 * Sets the GroundStation API version to include in this request to \a version.
 */
void GroundStationRequest::setApiVersion(const QString &version)
{
    Q_D(GroundStationRequest);
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
bool GroundStationRequest::operator==(const GroundStationRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GroundStation queue name.
 *
 * @par From GroundStation FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GroundStation queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GroundStationRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GroundStationRequest::clearParameter(const QString &name)
{
    Q_D(GroundStationRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GroundStationRequest::clearParameters()
{
    Q_D(GroundStationRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GroundStationRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GroundStationRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GroundStationRequest::parameters() const
{
    Q_D(const GroundStationRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GroundStationRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GroundStationRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GroundStationRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GroundStationRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GroundStation request using the given
 * \a endpoint.
 *
 * This GroundStation implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GroundStationRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GroundStationRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GroundStation::GroundStationRequestPrivate
 * \brief The GroundStationRequestPrivate class provides private implementation for GroundStationRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GroundStationRequestPrivate::GroundStationRequestPrivate(const GroundStationRequest::Action action, GroundStationRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GroundStationRequest class's copy constructor.
 */
GroundStationRequestPrivate::GroundStationRequestPrivate(const GroundStationRequestPrivate &other,
                                     GroundStationRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GroundStationRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GroundStation service's Action
 * query parameters.
 */
QString GroundStationRequestPrivate::toString(const GroundStationRequest::Action &action)
{
    #define ActionToString(action) \
        case GroundStationRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GroundStation
} // namespace QtAws
