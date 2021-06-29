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

#include "daxrequest.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DaxRequest
 * \brief The DaxRequest class provides an interface for DAX requests.
 *
 * \inmodule QtAwsDAX
 */

/*!
 * \enum DaxRequest::Action
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
 * Constructs a DaxRequest object for DAX \a action.
 */
DaxRequest::DaxRequest(const Action action)
    : d_ptr(new DaxRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DaxRequest::DaxRequest(const DaxRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DaxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DaxRequest object to be equal to \a other.
 */
DaxRequest& DaxRequest::operator=(const DaxRequest &other)
{
    Q_D(DaxRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DaxRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DaxRequestPrivate.
 */
DaxRequest::DaxRequest(DaxRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the DAX action to be performed by this request.
 */
DaxRequest::Action DaxRequest::action() const
{
    Q_D(const DaxRequest);
    return d->action;
}

/*!
 * Returns the name of the DAX action to be performed by this request.
 */
QString DaxRequest::actionString() const
{
    return DaxRequestPrivate::toString(action());
}

/*!
 * Returns the DAX API version implemented by this request.
 */
QString DaxRequest::apiVersion() const
{
    Q_D(const DaxRequest);
    return d->apiVersion;
}

/*!
 * Sets the DAX action to be performed by this request to \a action.
 */
void DaxRequest::setAction(const Action action)
{
    Q_D(DaxRequest);
    d->action = action;
}

/*!
 * Sets the DAX API version to include in this request to \a version.
 */
void DaxRequest::setApiVersion(const QString &version)
{
    Q_D(DaxRequest);
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
bool DaxRequest::operator==(const DaxRequest &other) const
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
/*bool DaxRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DaxRequest::clearParameter(const QString &name)
{
    Q_D(DaxRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DaxRequest::clearParameters()
{
    Q_D(DaxRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DaxRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DaxRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DaxRequest::parameters() const
{
    Q_D(const DaxRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DaxRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DaxRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DaxRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DaxRequest);
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
QNetworkRequest DaxRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DaxRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DAX::DaxRequestPrivate
 * \brief The DaxRequestPrivate class provides private implementation for DaxRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DaxRequestPrivate object for DAX \a action,
 * with public implementation \a q.
 */
DaxRequestPrivate::DaxRequestPrivate(const DaxRequest::Action action, DaxRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DaxRequest class's copy constructor.
 */
DaxRequestPrivate::DaxRequestPrivate(const DaxRequestPrivate &other,
                                     DaxRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DaxRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DAX service's Action
 * query parameters.
 */
QString DaxRequestPrivate::toString(const DaxRequest::Action &action)
{
    #define ActionToString(action) \
        case DaxRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCluster);
        ActionToString(CreateParameterGroup);
        ActionToString(CreateSubnetGroup);
        ActionToString(DecreaseReplicationFactor);
        ActionToString(DeleteCluster);
        ActionToString(DeleteParameterGroup);
        ActionToString(DeleteSubnetGroup);
        ActionToString(DescribeClusters);
        ActionToString(DescribeDefaultParameters);
        ActionToString(DescribeEvents);
        ActionToString(DescribeParameterGroups);
        ActionToString(DescribeParameters);
        ActionToString(DescribeSubnetGroups);
        ActionToString(IncreaseReplicationFactor);
        ActionToString(ListTags);
        ActionToString(RebootNode);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCluster);
        ActionToString(UpdateParameterGroup);
        ActionToString(UpdateSubnetGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DAX
} // namespace QtAws
