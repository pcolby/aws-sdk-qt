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

#include "connectcontactlensrequest.h"
#include "connectcontactlensrequest_p.h"

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensRequest
 * \brief The ConnectContactLensRequest class provides an interface for ConnectContactLens requests.
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * \enum ConnectContactLensRequest::Action
 *
 * This enum describes the actions that can be performed as ConnectContactLens
 * requests.
 *
 * \value ListRealtimeContactAnalysisSegmentsAction ConnectContactLens ListRealtimeContactAnalysisSegments action.
 */

/*!
 * Constructs a ConnectContactLensRequest object for ConnectContactLens \a action.
 */
ConnectContactLensRequest::ConnectContactLensRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConnectContactLensRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConnectContactLensRequest::ConnectContactLensRequest(const ConnectContactLensRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConnectContactLensRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConnectContactLensRequest object to be equal to \a other.
 */
ConnectContactLensRequest& ConnectContactLensRequest::operator=(const ConnectContactLensRequest &other)
{
    Q_D(ConnectContactLensRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConnectContactLensRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectContactLensRequestPrivate.
 */
ConnectContactLensRequest::ConnectContactLensRequest(ConnectContactLensRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ConnectContactLens action to be performed by this request.
 */
ConnectContactLensRequest::Action ConnectContactLensRequest::action() const
{
    Q_D(const ConnectContactLensRequest);
    return d->action;
}

/*!
 * Returns the name of the ConnectContactLens action to be performed by this request.
 */
QString ConnectContactLensRequest::actionString() const
{
    return ConnectContactLensRequestPrivate::toString(action());
}

/*!
 * Returns the ConnectContactLens API version implemented by this request.
 */
QString ConnectContactLensRequest::apiVersion() const
{
    Q_D(const ConnectContactLensRequest);
    return d->apiVersion;
}

/*!
 * Sets the ConnectContactLens action to be performed by this request to \a action.
 */
void ConnectContactLensRequest::setAction(const Action action)
{
    Q_D(ConnectContactLensRequest);
    d->action = action;
}

/*!
 * Sets the ConnectContactLens API version to include in this request to \a version.
 */
void ConnectContactLensRequest::setApiVersion(const QString &version)
{
    Q_D(ConnectContactLensRequest);
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
bool ConnectContactLensRequest::operator==(const ConnectContactLensRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ConnectContactLens queue name.
 *
 * @par From ConnectContactLens FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConnectContactLens queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConnectContactLensRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConnectContactLensRequest::clearParameter(const QString &name)
{
    Q_D(ConnectContactLensRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConnectContactLensRequest::clearParameters()
{
    Q_D(ConnectContactLensRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConnectContactLensRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConnectContactLensRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConnectContactLensRequest::parameters() const
{
    Q_D(const ConnectContactLensRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConnectContactLensRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConnectContactLensRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConnectContactLensRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConnectContactLensRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ConnectContactLens request using the given
 * \a endpoint.
 *
 * This ConnectContactLens implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConnectContactLensRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConnectContactLensRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensRequestPrivate
 * \brief The ConnectContactLensRequestPrivate class provides private implementation for ConnectContactLensRequest.
 * \internal
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensRequestPrivate object for ConnectContactLens \a action,
 * with public implementation \a q.
 */
ConnectContactLensRequestPrivate::ConnectContactLensRequestPrivate(const ConnectContactLensRequest::Action action, ConnectContactLensRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-21"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConnectContactLensRequest class's copy constructor.
 */
ConnectContactLensRequestPrivate::ConnectContactLensRequestPrivate(const ConnectContactLensRequestPrivate &other,
                                     ConnectContactLensRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConnectContactLensRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConnectContactLens service's Action
 * query parameters.
 */
QString ConnectContactLensRequestPrivate::toString(const ConnectContactLensRequest::Action &action)
{
    #define ActionToString(action) \
        case ConnectContactLensRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ListRealtimeContactAnalysisSegments);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConnectContactLens
} // namespace QtAws
