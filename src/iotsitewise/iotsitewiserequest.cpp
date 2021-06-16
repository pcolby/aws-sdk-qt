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

#include "iotsitewiserequest.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseRequest
 * \brief The IoTSiteWiseRequest class provides an interface for IoTSiteWise requests.
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * \enum IoTSiteWiseRequest::Action
 *
 * This enum describes the actions that can be performed as IoTSiteWise
 * requests.
 *
 * \value AssociateAssetsAction IoTSiteWise AssociateAssets action.
 * \value BatchAssociateProjectAssetsAction IoTSiteWise BatchAssociateProjectAssets action.
 * \value BatchDisassociateProjectAssetsAction IoTSiteWise BatchDisassociateProjectAssets action.
 * \value BatchPutAssetPropertyValueAction IoTSiteWise BatchPutAssetPropertyValue action.
 * \value CreateAccessPolicyAction IoTSiteWise CreateAccessPolicy action.
 * \value CreateAssetAction IoTSiteWise CreateAsset action.
 * \value CreateAssetModelAction IoTSiteWise CreateAssetModel action.
 * \value CreateDashboardAction IoTSiteWise CreateDashboard action.
 * \value CreateGatewayAction IoTSiteWise CreateGateway action.
 * \value CreatePortalAction IoTSiteWise CreatePortal action.
 * \value CreateProjectAction IoTSiteWise CreateProject action.
 * \value DeleteAccessPolicyAction IoTSiteWise DeleteAccessPolicy action.
 * \value DeleteAssetAction IoTSiteWise DeleteAsset action.
 * \value DeleteAssetModelAction IoTSiteWise DeleteAssetModel action.
 * \value DeleteDashboardAction IoTSiteWise DeleteDashboard action.
 * \value DeleteGatewayAction IoTSiteWise DeleteGateway action.
 * \value DeletePortalAction IoTSiteWise DeletePortal action.
 * \value DeleteProjectAction IoTSiteWise DeleteProject action.
 * \value DescribeAccessPolicyAction IoTSiteWise DescribeAccessPolicy action.
 * \value DescribeAssetAction IoTSiteWise DescribeAsset action.
 * \value DescribeAssetModelAction IoTSiteWise DescribeAssetModel action.
 * \value DescribeAssetPropertyAction IoTSiteWise DescribeAssetProperty action.
 * \value DescribeDashboardAction IoTSiteWise DescribeDashboard action.
 * \value DescribeDefaultEncryptionConfigurationAction IoTSiteWise DescribeDefaultEncryptionConfiguration action.
 * \value DescribeGatewayAction IoTSiteWise DescribeGateway action.
 * \value DescribeGatewayCapabilityConfigurationAction IoTSiteWise DescribeGatewayCapabilityConfiguration action.
 * \value DescribeLoggingOptionsAction IoTSiteWise DescribeLoggingOptions action.
 * \value DescribePortalAction IoTSiteWise DescribePortal action.
 * \value DescribeProjectAction IoTSiteWise DescribeProject action.
 * \value DisassociateAssetsAction IoTSiteWise DisassociateAssets action.
 * \value GetAssetPropertyAggregatesAction IoTSiteWise GetAssetPropertyAggregates action.
 * \value GetAssetPropertyValueAction IoTSiteWise GetAssetPropertyValue action.
 * \value GetAssetPropertyValueHistoryAction IoTSiteWise GetAssetPropertyValueHistory action.
 * \value GetInterpolatedAssetPropertyValuesAction IoTSiteWise GetInterpolatedAssetPropertyValues action.
 * \value ListAccessPoliciesAction IoTSiteWise ListAccessPolicies action.
 * \value ListAssetModelsAction IoTSiteWise ListAssetModels action.
 * \value ListAssetRelationshipsAction IoTSiteWise ListAssetRelationships action.
 * \value ListAssetsAction IoTSiteWise ListAssets action.
 * \value ListAssociatedAssetsAction IoTSiteWise ListAssociatedAssets action.
 * \value ListDashboardsAction IoTSiteWise ListDashboards action.
 * \value ListGatewaysAction IoTSiteWise ListGateways action.
 * \value ListPortalsAction IoTSiteWise ListPortals action.
 * \value ListProjectAssetsAction IoTSiteWise ListProjectAssets action.
 * \value ListProjectsAction IoTSiteWise ListProjects action.
 * \value ListTagsForResourceAction IoTSiteWise ListTagsForResource action.
 * \value PutDefaultEncryptionConfigurationAction IoTSiteWise PutDefaultEncryptionConfiguration action.
 * \value PutLoggingOptionsAction IoTSiteWise PutLoggingOptions action.
 * \value TagResourceAction IoTSiteWise TagResource action.
 * \value UntagResourceAction IoTSiteWise UntagResource action.
 * \value UpdateAccessPolicyAction IoTSiteWise UpdateAccessPolicy action.
 * \value UpdateAssetAction IoTSiteWise UpdateAsset action.
 * \value UpdateAssetModelAction IoTSiteWise UpdateAssetModel action.
 * \value UpdateAssetPropertyAction IoTSiteWise UpdateAssetProperty action.
 * \value UpdateDashboardAction IoTSiteWise UpdateDashboard action.
 * \value UpdateGatewayAction IoTSiteWise UpdateGateway action.
 * \value UpdateGatewayCapabilityConfigurationAction IoTSiteWise UpdateGatewayCapabilityConfiguration action.
 * \value UpdatePortalAction IoTSiteWise UpdatePortal action.
 * \value UpdateProjectAction IoTSiteWise UpdateProject action.
 */

/*!
 * Constructs a IoTSiteWiseRequest object for IoTSiteWise \a action.
 */
IoTSiteWiseRequest::IoTSiteWiseRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTSiteWiseRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTSiteWiseRequest::IoTSiteWiseRequest(const IoTSiteWiseRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTSiteWiseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTSiteWiseRequest object to be equal to \a other.
 */
IoTSiteWiseRequest& IoTSiteWiseRequest::operator=(const IoTSiteWiseRequest &other)
{
    Q_D(IoTSiteWiseRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTSiteWiseRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTSiteWiseRequestPrivate.
 */
IoTSiteWiseRequest::IoTSiteWiseRequest(IoTSiteWiseRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTSiteWise action to be performed by this request.
 */
IoTSiteWiseRequest::Action IoTSiteWiseRequest::action() const
{
    Q_D(const IoTSiteWiseRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTSiteWise action to be performed by this request.
 */
QString IoTSiteWiseRequest::actionString() const
{
    return IoTSiteWiseRequestPrivate::toString(action());
}

/*!
 * Returns the IoTSiteWise API version implemented by this request.
 */
QString IoTSiteWiseRequest::apiVersion() const
{
    Q_D(const IoTSiteWiseRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTSiteWise action to be performed by this request to \a action.
 */
void IoTSiteWiseRequest::setAction(const Action action)
{
    Q_D(IoTSiteWiseRequest);
    d->action = action;
}

/*!
 * Sets the IoTSiteWise API version to include in this request to \a version.
 */
void IoTSiteWiseRequest::setApiVersion(const QString &version)
{
    Q_D(IoTSiteWiseRequest);
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
bool IoTSiteWiseRequest::operator==(const IoTSiteWiseRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTSiteWise queue name.
 *
 * @par From IoTSiteWise FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTSiteWise queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTSiteWiseRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTSiteWiseRequest::clearParameter(const QString &name)
{
    Q_D(IoTSiteWiseRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTSiteWiseRequest::clearParameters()
{
    Q_D(IoTSiteWiseRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTSiteWiseRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTSiteWiseRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTSiteWiseRequest::parameters() const
{
    Q_D(const IoTSiteWiseRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTSiteWiseRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTSiteWiseRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTSiteWiseRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTSiteWiseRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTSiteWise request using the given
 * \a endpoint.
 *
 * This IoTSiteWise implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTSiteWiseRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTSiteWiseRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseRequestPrivate
 * \brief The IoTSiteWiseRequestPrivate class provides private implementation for IoTSiteWiseRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a IoTSiteWiseRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
IoTSiteWiseRequestPrivate::IoTSiteWiseRequestPrivate(const IoTSiteWiseRequest::Action action, IoTSiteWiseRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTSiteWiseRequest class's copy constructor.
 */
IoTSiteWiseRequestPrivate::IoTSiteWiseRequestPrivate(const IoTSiteWiseRequestPrivate &other,
                                     IoTSiteWiseRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTSiteWiseRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTSiteWise service's Action
 * query parameters.
 */
QString IoTSiteWiseRequestPrivate::toString(const IoTSiteWiseRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTSiteWiseRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTSiteWise
} // namespace QtAws
