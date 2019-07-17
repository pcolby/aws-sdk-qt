/*
    Copyright 2013-2019 Paul Colby

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

#include "iot1clickprojectsrequest.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsRequest
 * \brief The IoT1ClickProjectsRequest class provides an interface for IoT1ClickProjects requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * \enum IoT1ClickProjectsRequest::Action
 *
 * This enum describes the actions that can be performed as IoT1ClickProjects
 * requests.
 *
 * \value AssociateDeviceWithPlacementAction IoT1ClickProjects AssociateDeviceWithPlacement action.
 * \value CreatePlacementAction IoT1ClickProjects CreatePlacement action.
 * \value CreateProjectAction IoT1ClickProjects CreateProject action.
 * \value DeletePlacementAction IoT1ClickProjects DeletePlacement action.
 * \value DeleteProjectAction IoT1ClickProjects DeleteProject action.
 * \value DescribePlacementAction IoT1ClickProjects DescribePlacement action.
 * \value DescribeProjectAction IoT1ClickProjects DescribeProject action.
 * \value DisassociateDeviceFromPlacementAction IoT1ClickProjects DisassociateDeviceFromPlacement action.
 * \value GetDevicesInPlacementAction IoT1ClickProjects GetDevicesInPlacement action.
 * \value ListPlacementsAction IoT1ClickProjects ListPlacements action.
 * \value ListProjectsAction IoT1ClickProjects ListProjects action.
 * \value UpdatePlacementAction IoT1ClickProjects UpdatePlacement action.
 * \value UpdateProjectAction IoT1ClickProjects UpdateProject action.
 */

/*!
 * Constructs a IoT1ClickProjectsRequest object for IoT1ClickProjects \a action.
 */
IoT1ClickProjectsRequest::IoT1ClickProjectsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickProjectsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoT1ClickProjectsRequest::IoT1ClickProjectsRequest(const IoT1ClickProjectsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoT1ClickProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoT1ClickProjectsRequest object to be equal to \a other.
 */
IoT1ClickProjectsRequest& IoT1ClickProjectsRequest::operator=(const IoT1ClickProjectsRequest &other)
{
    Q_D(IoT1ClickProjectsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoT1ClickProjectsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickProjectsRequestPrivate.
 */
IoT1ClickProjectsRequest::IoT1ClickProjectsRequest(IoT1ClickProjectsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoT1ClickProjects action to be performed by this request.
 */
IoT1ClickProjectsRequest::Action IoT1ClickProjectsRequest::action() const
{
    Q_D(const IoT1ClickProjectsRequest);
    return d->action;
}

/*!
 * Returns the name of the IoT1ClickProjects action to be performed by this request.
 */
QString IoT1ClickProjectsRequest::actionString() const
{
    return IoT1ClickProjectsRequestPrivate::toString(action());
}

/*!
 * Returns the IoT1ClickProjects API version implemented by this request.
 */
QString IoT1ClickProjectsRequest::apiVersion() const
{
    Q_D(const IoT1ClickProjectsRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoT1ClickProjects action to be performed by this request to \a action.
 */
void IoT1ClickProjectsRequest::setAction(const Action action)
{
    Q_D(IoT1ClickProjectsRequest);
    d->action = action;
}

/*!
 * Sets the IoT1ClickProjects API version to include in this request to \a version.
 */
void IoT1ClickProjectsRequest::setApiVersion(const QString &version)
{
    Q_D(IoT1ClickProjectsRequest);
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
bool IoT1ClickProjectsRequest::operator==(const IoT1ClickProjectsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoT1ClickProjects queue name.
 *
 * @par From IoT1ClickProjects FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoT1ClickProjects queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoT1ClickProjectsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoT1ClickProjectsRequest::clearParameter(const QString &name)
{
    Q_D(IoT1ClickProjectsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoT1ClickProjectsRequest::clearParameters()
{
    Q_D(IoT1ClickProjectsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoT1ClickProjectsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoT1ClickProjectsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoT1ClickProjectsRequest::parameters() const
{
    Q_D(const IoT1ClickProjectsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoT1ClickProjectsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoT1ClickProjectsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoT1ClickProjectsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoT1ClickProjectsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoT1ClickProjects request using the given
 * \a endpoint.
 *
 * This IoT1ClickProjects implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoT1ClickProjectsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoT1ClickProjectsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsRequestPrivate
 * \brief The IoT1ClickProjectsRequestPrivate class provides private implementation for IoT1ClickProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a IoT1ClickProjectsRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
IoT1ClickProjectsRequestPrivate::IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequest::Action action, IoT1ClickProjectsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoT1ClickProjectsRequest class's copy constructor.
 */
IoT1ClickProjectsRequestPrivate::IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequestPrivate &other,
                                     IoT1ClickProjectsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoT1ClickProjectsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoT1ClickProjects service's Action
 * query parameters.
 */
QString IoT1ClickProjectsRequestPrivate::toString(const IoT1ClickProjectsRequest::Action &action)
{
    #define ActionToString(action) \
        case IoT1ClickProjectsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoT1ClickProjects
} // namespace QtAws
