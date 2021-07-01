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

#include "prometheusservicerequest.h"
#include "prometheusservicerequest_p.h"

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::PrometheusServiceRequest
 * \brief The PrometheusServiceRequest class provides an interface for PrometheusService requests.
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * \enum PrometheusServiceRequest::Action
 *
 * This enum describes the actions that can be performed as PrometheusService
 * requests.
 *
 * \value CreateWorkspaceAction PrometheusService CreateWorkspace action.
 * \value DeleteWorkspaceAction PrometheusService DeleteWorkspace action.
 * \value DescribeWorkspaceAction PrometheusService DescribeWorkspace action.
 * \value ListWorkspacesAction PrometheusService ListWorkspaces action.
 * \value UpdateWorkspaceAliasAction PrometheusService UpdateWorkspaceAlias action.
 */

/*!
 * Constructs a PrometheusServiceRequest object for PrometheusService \a action.
 */
PrometheusServiceRequest::PrometheusServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PrometheusServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PrometheusServiceRequest::PrometheusServiceRequest(const PrometheusServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PrometheusServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PrometheusServiceRequest object to be equal to \a other.
 */
PrometheusServiceRequest& PrometheusServiceRequest::operator=(const PrometheusServiceRequest &other)
{
    Q_D(PrometheusServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PrometheusServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PrometheusServiceRequestPrivate.
 */
PrometheusServiceRequest::PrometheusServiceRequest(PrometheusServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PrometheusService action to be performed by this request.
 */
PrometheusServiceRequest::Action PrometheusServiceRequest::action() const
{
    Q_D(const PrometheusServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the PrometheusService action to be performed by this request.
 */
QString PrometheusServiceRequest::actionString() const
{
    return PrometheusServiceRequestPrivate::toString(action());
}

/*!
 * Returns the PrometheusService API version implemented by this request.
 */
QString PrometheusServiceRequest::apiVersion() const
{
    Q_D(const PrometheusServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the PrometheusService action to be performed by this request to \a action.
 */
void PrometheusServiceRequest::setAction(const Action action)
{
    Q_D(PrometheusServiceRequest);
    d->action = action;
}

/*!
 * Sets the PrometheusService API version to include in this request to \a version.
 */
void PrometheusServiceRequest::setApiVersion(const QString &version)
{
    Q_D(PrometheusServiceRequest);
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
bool PrometheusServiceRequest::operator==(const PrometheusServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PrometheusService queue name.
 *
 * @par From PrometheusService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PrometheusService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PrometheusServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PrometheusServiceRequest::clearParameter(const QString &name)
{
    Q_D(PrometheusServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PrometheusServiceRequest::clearParameters()
{
    Q_D(PrometheusServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PrometheusServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PrometheusServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PrometheusServiceRequest::parameters() const
{
    Q_D(const PrometheusServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PrometheusServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PrometheusServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PrometheusServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PrometheusServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PrometheusService request using the given
 * \a endpoint.
 *
 * This PrometheusService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PrometheusServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PrometheusServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PrometheusService::PrometheusServiceRequestPrivate
 * \brief The PrometheusServiceRequestPrivate class provides private implementation for PrometheusServiceRequest.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a PrometheusServiceRequestPrivate object for PrometheusService \a action,
 * with public implementation \a q.
 */
PrometheusServiceRequestPrivate::PrometheusServiceRequestPrivate(const PrometheusServiceRequest::Action action, PrometheusServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PrometheusServiceRequest class's copy constructor.
 */
PrometheusServiceRequestPrivate::PrometheusServiceRequestPrivate(const PrometheusServiceRequestPrivate &other,
                                     PrometheusServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PrometheusServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PrometheusService service's Action
 * query parameters.
 */
QString PrometheusServiceRequestPrivate::toString(const PrometheusServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case PrometheusServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateWorkspace);
        ActionToString(DeleteWorkspace);
        ActionToString(DescribeWorkspace);
        ActionToString(ListWorkspaces);
        ActionToString(UpdateWorkspaceAlias);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PrometheusService
} // namespace QtAws
