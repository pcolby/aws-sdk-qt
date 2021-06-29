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

#include "finspacedatarequest.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::FinSpaceDataRequest
 * \brief The FinSpaceDataRequest class provides an interface for FinSpaceData requests.
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * \enum FinSpaceDataRequest::Action
 *
 * This enum describes the actions that can be performed as FinSpaceData
 * requests.
 *
 * \value CreateChangesetAction FinSpaceData CreateChangeset action.
 * \value GetProgrammaticAccessCredentialsAction FinSpaceData GetProgrammaticAccessCredentials action.
 * \value GetWorkingLocationAction FinSpaceData GetWorkingLocation action.
 */

/*!
 * Constructs a FinSpaceDataRequest object for FinSpaceData \a action.
 */
FinSpaceDataRequest::FinSpaceDataRequest(const Action action)
    : d_ptr(new FinSpaceDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FinSpaceDataRequest::FinSpaceDataRequest(const FinSpaceDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new FinSpaceDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FinSpaceDataRequest object to be equal to \a other.
 */
FinSpaceDataRequest& FinSpaceDataRequest::operator=(const FinSpaceDataRequest &other)
{
    Q_D(FinSpaceDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FinSpaceDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinSpaceDataRequestPrivate.
 */
FinSpaceDataRequest::FinSpaceDataRequest(FinSpaceDataRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the FinSpaceData action to be performed by this request.
 */
FinSpaceDataRequest::Action FinSpaceDataRequest::action() const
{
    Q_D(const FinSpaceDataRequest);
    return d->action;
}

/*!
 * Returns the name of the FinSpaceData action to be performed by this request.
 */
QString FinSpaceDataRequest::actionString() const
{
    return FinSpaceDataRequestPrivate::toString(action());
}

/*!
 * Returns the FinSpaceData API version implemented by this request.
 */
QString FinSpaceDataRequest::apiVersion() const
{
    Q_D(const FinSpaceDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the FinSpaceData action to be performed by this request to \a action.
 */
void FinSpaceDataRequest::setAction(const Action action)
{
    Q_D(FinSpaceDataRequest);
    d->action = action;
}

/*!
 * Sets the FinSpaceData API version to include in this request to \a version.
 */
void FinSpaceDataRequest::setApiVersion(const QString &version)
{
    Q_D(FinSpaceDataRequest);
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
bool FinSpaceDataRequest::operator==(const FinSpaceDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid FinSpaceData queue name.
 *
 * @par From FinSpaceData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FinSpaceData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FinSpaceDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FinSpaceDataRequest::clearParameter(const QString &name)
{
    Q_D(FinSpaceDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FinSpaceDataRequest::clearParameters()
{
    Q_D(FinSpaceDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FinSpaceDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FinSpaceDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FinSpaceDataRequest::parameters() const
{
    Q_D(const FinSpaceDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FinSpaceDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FinSpaceDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FinSpaceDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FinSpaceDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the FinSpaceData request using the given
 * \a endpoint.
 *
 * This FinSpaceData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FinSpaceDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FinSpaceDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::FinSpaceData::FinSpaceDataRequestPrivate
 * \brief The FinSpaceDataRequestPrivate class provides private implementation for FinSpaceDataRequest.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a FinSpaceDataRequestPrivate object for FinSpaceData \a action,
 * with public implementation \a q.
 */
FinSpaceDataRequestPrivate::FinSpaceDataRequestPrivate(const FinSpaceDataRequest::Action action, FinSpaceDataRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FinSpaceDataRequest class's copy constructor.
 */
FinSpaceDataRequestPrivate::FinSpaceDataRequestPrivate(const FinSpaceDataRequestPrivate &other,
                                     FinSpaceDataRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FinSpaceDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the FinSpaceData service's Action
 * query parameters.
 */
QString FinSpaceDataRequestPrivate::toString(const FinSpaceDataRequest::Action &action)
{
    #define ActionToString(action) \
        case FinSpaceDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateChangeset);
        ActionToString(GetProgrammaticAccessCredentials);
        ActionToString(GetWorkingLocation);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FinSpaceData
} // namespace QtAws
