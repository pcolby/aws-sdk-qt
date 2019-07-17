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

#include "globalacceleratorrequest.h"
#include "globalacceleratorrequest_p.h"

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorRequest
 * \brief The GlobalAcceleratorRequest class provides an interface for GlobalAccelerator requests.
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * \enum GlobalAcceleratorRequest::Action
 *
 * This enum describes the actions that can be performed as GlobalAccelerator
 * requests.
 *
 * \value CreateAcceleratorAction GlobalAccelerator CreateAccelerator action.
 * \value CreateEndpointGroupAction GlobalAccelerator CreateEndpointGroup action.
 * \value CreateListenerAction GlobalAccelerator CreateListener action.
 * \value DeleteAcceleratorAction GlobalAccelerator DeleteAccelerator action.
 * \value DeleteEndpointGroupAction GlobalAccelerator DeleteEndpointGroup action.
 * \value DeleteListenerAction GlobalAccelerator DeleteListener action.
 * \value DescribeAcceleratorAction GlobalAccelerator DescribeAccelerator action.
 * \value DescribeAcceleratorAttributesAction GlobalAccelerator DescribeAcceleratorAttributes action.
 * \value DescribeEndpointGroupAction GlobalAccelerator DescribeEndpointGroup action.
 * \value DescribeListenerAction GlobalAccelerator DescribeListener action.
 * \value ListAcceleratorsAction GlobalAccelerator ListAccelerators action.
 * \value ListEndpointGroupsAction GlobalAccelerator ListEndpointGroups action.
 * \value ListListenersAction GlobalAccelerator ListListeners action.
 * \value UpdateAcceleratorAction GlobalAccelerator UpdateAccelerator action.
 * \value UpdateAcceleratorAttributesAction GlobalAccelerator UpdateAcceleratorAttributes action.
 * \value UpdateEndpointGroupAction GlobalAccelerator UpdateEndpointGroup action.
 * \value UpdateListenerAction GlobalAccelerator UpdateListener action.
 */

/*!
 * Constructs a GlobalAcceleratorRequest object for GlobalAccelerator \a action.
 */
GlobalAcceleratorRequest::GlobalAcceleratorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GlobalAcceleratorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GlobalAcceleratorRequest::GlobalAcceleratorRequest(const GlobalAcceleratorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GlobalAcceleratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GlobalAcceleratorRequest object to be equal to \a other.
 */
GlobalAcceleratorRequest& GlobalAcceleratorRequest::operator=(const GlobalAcceleratorRequest &other)
{
    Q_D(GlobalAcceleratorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GlobalAcceleratorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlobalAcceleratorRequestPrivate.
 */
GlobalAcceleratorRequest::GlobalAcceleratorRequest(GlobalAcceleratorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the GlobalAccelerator action to be performed by this request.
 */
GlobalAcceleratorRequest::Action GlobalAcceleratorRequest::action() const
{
    Q_D(const GlobalAcceleratorRequest);
    return d->action;
}

/*!
 * Returns the name of the GlobalAccelerator action to be performed by this request.
 */
QString GlobalAcceleratorRequest::actionString() const
{
    return GlobalAcceleratorRequestPrivate::toString(action());
}

/*!
 * Returns the GlobalAccelerator API version implemented by this request.
 */
QString GlobalAcceleratorRequest::apiVersion() const
{
    Q_D(const GlobalAcceleratorRequest);
    return d->apiVersion;
}

/*!
 * Sets the GlobalAccelerator action to be performed by this request to \a action.
 */
void GlobalAcceleratorRequest::setAction(const Action action)
{
    Q_D(GlobalAcceleratorRequest);
    d->action = action;
}

/*!
 * Sets the GlobalAccelerator API version to include in this request to \a version.
 */
void GlobalAcceleratorRequest::setApiVersion(const QString &version)
{
    Q_D(GlobalAcceleratorRequest);
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
bool GlobalAcceleratorRequest::operator==(const GlobalAcceleratorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GlobalAccelerator queue name.
 *
 * @par From GlobalAccelerator FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GlobalAccelerator queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GlobalAcceleratorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GlobalAcceleratorRequest::clearParameter(const QString &name)
{
    Q_D(GlobalAcceleratorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GlobalAcceleratorRequest::clearParameters()
{
    Q_D(GlobalAcceleratorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GlobalAcceleratorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GlobalAcceleratorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GlobalAcceleratorRequest::parameters() const
{
    Q_D(const GlobalAcceleratorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GlobalAcceleratorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GlobalAcceleratorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GlobalAcceleratorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GlobalAcceleratorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GlobalAccelerator request using the given
 * \a endpoint.
 *
 * This GlobalAccelerator implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GlobalAcceleratorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GlobalAcceleratorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorRequestPrivate
 * \brief The GlobalAcceleratorRequestPrivate class provides private implementation for GlobalAcceleratorRequest.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorRequestPrivate object for GlobalAccelerator \a action,
 * with public implementation \a q.
 */
GlobalAcceleratorRequestPrivate::GlobalAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action, GlobalAcceleratorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GlobalAcceleratorRequest class's copy constructor.
 */
GlobalAcceleratorRequestPrivate::GlobalAcceleratorRequestPrivate(const GlobalAcceleratorRequestPrivate &other,
                                     GlobalAcceleratorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GlobalAcceleratorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GlobalAccelerator service's Action
 * query parameters.
 */
QString GlobalAcceleratorRequestPrivate::toString(const GlobalAcceleratorRequest::Action &action)
{
    #define ActionToString(action) \
        case GlobalAcceleratorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GlobalAccelerator
} // namespace QtAws
