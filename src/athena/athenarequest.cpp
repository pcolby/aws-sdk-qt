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

#include "athenarequest.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::AthenaRequest
 * \brief The AthenaRequest class provides an interface for Athena requests.
 *
 * \inmodule QtAwsAthena
 */

/*!
 * \enum AthenaRequest::Action
 *
 * This enum describes the actions that can be performed as Athena
 * requests.
 *
 * \value BatchGetNamedQueryAction Athena BatchGetNamedQuery action.
 * \value BatchGetQueryExecutionAction Athena BatchGetQueryExecution action.
 * \value CreateNamedQueryAction Athena CreateNamedQuery action.
 * \value CreateWorkGroupAction Athena CreateWorkGroup action.
 * \value DeleteNamedQueryAction Athena DeleteNamedQuery action.
 * \value DeleteWorkGroupAction Athena DeleteWorkGroup action.
 * \value GetNamedQueryAction Athena GetNamedQuery action.
 * \value GetQueryExecutionAction Athena GetQueryExecution action.
 * \value GetQueryResultsAction Athena GetQueryResults action.
 * \value GetWorkGroupAction Athena GetWorkGroup action.
 * \value ListNamedQueriesAction Athena ListNamedQueries action.
 * \value ListQueryExecutionsAction Athena ListQueryExecutions action.
 * \value ListTagsForResourceAction Athena ListTagsForResource action.
 * \value ListWorkGroupsAction Athena ListWorkGroups action.
 * \value StartQueryExecutionAction Athena StartQueryExecution action.
 * \value StopQueryExecutionAction Athena StopQueryExecution action.
 * \value TagResourceAction Athena TagResource action.
 * \value UntagResourceAction Athena UntagResource action.
 * \value UpdateWorkGroupAction Athena UpdateWorkGroup action.
 */

/*!
 * Constructs a AthenaRequest object for Athena \a action.
 */
AthenaRequest::AthenaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AthenaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AthenaRequest::AthenaRequest(const AthenaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AthenaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AthenaRequest object to be equal to \a other.
 */
AthenaRequest& AthenaRequest::operator=(const AthenaRequest &other)
{
    Q_D(AthenaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AthenaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AthenaRequestPrivate.
 */
AthenaRequest::AthenaRequest(AthenaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Athena action to be performed by this request.
 */
AthenaRequest::Action AthenaRequest::action() const
{
    Q_D(const AthenaRequest);
    return d->action;
}

/*!
 * Returns the name of the Athena action to be performed by this request.
 */
QString AthenaRequest::actionString() const
{
    return AthenaRequestPrivate::toString(action());
}

/*!
 * Returns the Athena API version implemented by this request.
 */
QString AthenaRequest::apiVersion() const
{
    Q_D(const AthenaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Athena action to be performed by this request to \a action.
 */
void AthenaRequest::setAction(const Action action)
{
    Q_D(AthenaRequest);
    d->action = action;
}

/*!
 * Sets the Athena API version to include in this request to \a version.
 */
void AthenaRequest::setApiVersion(const QString &version)
{
    Q_D(AthenaRequest);
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
bool AthenaRequest::operator==(const AthenaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Athena queue name.
 *
 * @par From Athena FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Athena queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AthenaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AthenaRequest::clearParameter(const QString &name)
{
    Q_D(AthenaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AthenaRequest::clearParameters()
{
    Q_D(AthenaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AthenaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AthenaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AthenaRequest::parameters() const
{
    Q_D(const AthenaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AthenaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AthenaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AthenaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AthenaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Athena request using the given
 * \a endpoint.
 *
 * This Athena implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AthenaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AthenaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Athena::AthenaRequestPrivate
 * \brief The AthenaRequestPrivate class provides private implementation for AthenaRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a AthenaRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
AthenaRequestPrivate::AthenaRequestPrivate(const AthenaRequest::Action action, AthenaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AthenaRequest class's copy constructor.
 */
AthenaRequestPrivate::AthenaRequestPrivate(const AthenaRequestPrivate &other,
                                     AthenaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AthenaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Athena service's Action
 * query parameters.
 */
QString AthenaRequestPrivate::toString(const AthenaRequest::Action &action)
{
    #define ActionToString(action) \
        case AthenaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Athena
} // namespace QtAws
