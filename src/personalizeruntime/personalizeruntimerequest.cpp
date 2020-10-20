/*
    Copyright 2013-2020 Paul Colby

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

#include "personalizeruntimerequest.h"
#include "personalizeruntimerequest_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeRequest
 * \brief The PersonalizeRuntimeRequest class provides an interface for PersonalizeRuntime requests.
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * \enum PersonalizeRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as PersonalizeRuntime
 * requests.
 *
 * \value GetPersonalizedRankingAction PersonalizeRuntime GetPersonalizedRanking action.
 * \value GetRecommendationsAction PersonalizeRuntime GetRecommendations action.
 */

/*!
 * Constructs a PersonalizeRuntimeRequest object for PersonalizeRuntime \a action.
 */
PersonalizeRuntimeRequest::PersonalizeRuntimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PersonalizeRuntimeRequest::PersonalizeRuntimeRequest(const PersonalizeRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PersonalizeRuntimeRequest object to be equal to \a other.
 */
PersonalizeRuntimeRequest& PersonalizeRuntimeRequest::operator=(const PersonalizeRuntimeRequest &other)
{
    Q_D(PersonalizeRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PersonalizeRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PersonalizeRuntimeRequestPrivate.
 */
PersonalizeRuntimeRequest::PersonalizeRuntimeRequest(PersonalizeRuntimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PersonalizeRuntime action to be performed by this request.
 */
PersonalizeRuntimeRequest::Action PersonalizeRuntimeRequest::action() const
{
    Q_D(const PersonalizeRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the PersonalizeRuntime action to be performed by this request.
 */
QString PersonalizeRuntimeRequest::actionString() const
{
    return PersonalizeRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the PersonalizeRuntime API version implemented by this request.
 */
QString PersonalizeRuntimeRequest::apiVersion() const
{
    Q_D(const PersonalizeRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the PersonalizeRuntime action to be performed by this request to \a action.
 */
void PersonalizeRuntimeRequest::setAction(const Action action)
{
    Q_D(PersonalizeRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the PersonalizeRuntime API version to include in this request to \a version.
 */
void PersonalizeRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(PersonalizeRuntimeRequest);
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
bool PersonalizeRuntimeRequest::operator==(const PersonalizeRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PersonalizeRuntime queue name.
 *
 * @par From PersonalizeRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PersonalizeRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PersonalizeRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PersonalizeRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(PersonalizeRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PersonalizeRuntimeRequest::clearParameters()
{
    Q_D(PersonalizeRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PersonalizeRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PersonalizeRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PersonalizeRuntimeRequest::parameters() const
{
    Q_D(const PersonalizeRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PersonalizeRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PersonalizeRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PersonalizeRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PersonalizeRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PersonalizeRuntime request using the given
 * \a endpoint.
 *
 * This PersonalizeRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PersonalizeRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PersonalizeRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeRequestPrivate
 * \brief The PersonalizeRuntimeRequestPrivate class provides private implementation for PersonalizeRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeRequestPrivate object for PersonalizeRuntime \a action,
 * with public implementation \a q.
 */
PersonalizeRuntimeRequestPrivate::PersonalizeRuntimeRequestPrivate(const PersonalizeRuntimeRequest::Action action, PersonalizeRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PersonalizeRuntimeRequest class's copy constructor.
 */
PersonalizeRuntimeRequestPrivate::PersonalizeRuntimeRequestPrivate(const PersonalizeRuntimeRequestPrivate &other,
                                     PersonalizeRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PersonalizeRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PersonalizeRuntime service's Action
 * query parameters.
 */
QString PersonalizeRuntimeRequestPrivate::toString(const PersonalizeRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case PersonalizeRuntimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PersonalizeRuntime
} // namespace QtAws
