/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "daxrequest.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DAXRequest
 * \brief The DAXRequest class provides an interface for DAX requests.
 *
 * \inmodule QtAwsDAX
 */

/*!
 * \enum DAXRequest::Action
 *
 * This enum describes the actions that can be performed as DAX
 * requests.
 *
 * \value CreateClusterAction DAX CreateCluster action.
 * \value CreateParameterGroupAction DAX CreateParameterGroup action.
 * \value CreateSubnetGroupAction DAX CreateSubnetGroup action.
 * \value DecreaseReplicationFactorAction DAX DecreaseReplicationFactor action.
 * \value DeleteClusterAction DAX DeleteCluster action.
 * \value DeleteParameterGroupAction DAX DeleteParameterGroup action.
 * \value DeleteSubnetGroupAction DAX DeleteSubnetGroup action.
 * \value DescribeClustersAction DAX DescribeClusters action.
 * \value DescribeDefaultParametersAction DAX DescribeDefaultParameters action.
 * \value DescribeEventsAction DAX DescribeEvents action.
 * \value DescribeParameterGroupsAction DAX DescribeParameterGroups action.
 * \value DescribeParametersAction DAX DescribeParameters action.
 * \value DescribeSubnetGroupsAction DAX DescribeSubnetGroups action.
 * \value IncreaseReplicationFactorAction DAX IncreaseReplicationFactor action.
 * \value ListTagsAction DAX ListTags action.
 * \value RebootNodeAction DAX RebootNode action.
 * \value TagResourceAction DAX TagResource action.
 * \value UntagResourceAction DAX UntagResource action.
 * \value UpdateClusterAction DAX UpdateCluster action.
 * \value UpdateParameterGroupAction DAX UpdateParameterGroup action.
 * \value UpdateSubnetGroupAction DAX UpdateSubnetGroup action.
 */

/*!
 * Constructs a DAXRequest object for DAX \a action.
 */
DAXRequest::DAXRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DAXRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DAXRequest::DAXRequest(const DAXRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DAXRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DAXRequest object to be equal to \a other.
 */
DAXRequest& DAXRequest::operator=(const DAXRequest &other)
{
    Q_D(DAXRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DAXRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DAXRequestPrivate.
 */
DAXRequest::DAXRequest(DAXRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DAX action to be performed by this request.
 */
DAXRequest::Action DAXRequest::action() const
{
    Q_D(const DAXRequest);
    return d->action;
}

/*!
 * Returns the name of the DAX action to be performed by this request.
 */
QString DAXRequest::actionString() const
{
    return DAXRequestPrivate::toString(action());
}

/*!
 * Returns the DAX API version implemented by this request.
 */
QString DAXRequest::apiVersion() const
{
    Q_D(const DAXRequest);
    return d->apiVersion;
}

/*!
 * Sets the DAX action to be performed by this request to \a action.
 */
void DAXRequest::setAction(const Action action)
{
    Q_D(DAXRequest);
    d->action = action;
}

/*!
 * Sets the DAX API version to include in this request to \a version.
 */
void DAXRequest::setApiVersion(const QString &version)
{
    Q_D(DAXRequest);
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
bool DAXRequest::operator==(const DAXRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DAX queue name.
 *
 * @par From DAX FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DAX queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DAXRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DAXRequest::clearParameter(const QString &name)
{
    Q_D(DAXRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DAXRequest::clearParameters()
{
    Q_D(DAXRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DAXRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DAXRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DAXRequest::parameters() const
{
    Q_D(const DAXRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DAXRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DAXRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DAXRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DAXRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DAX request using the given
 * \a endpoint.
 *
 * This DAX implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DAXRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const DAXRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DAX::DAXRequestPrivate
 * \brief The DAXRequestPrivate class provides private implementation for DAXRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DAXRequestPrivate object for DAX \a action,
 * with public implementation \a q.
 */
DAXRequestPrivate::DAXRequestPrivate(const DAXRequest::Action action, DAXRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DAXRequest class's copy constructor.
 */
DAXRequestPrivate::DAXRequestPrivate(const DAXRequestPrivate &other,
                                     DAXRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DAXRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DAX service's Action
 * query parameters.
 */
QString DAXRequestPrivate::toString(const DAXRequest::Action &action)
{
    #define ActionToString(action) \
        case DAXRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DAX
} // namespace QtAws
