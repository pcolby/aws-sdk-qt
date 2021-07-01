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

#include "appmeshrequest.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::AppMeshRequest
 * \brief The AppMeshRequest class provides an interface for AppMesh requests.
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * \enum AppMeshRequest::Action
 *
 * This enum describes the actions that can be performed as AppMesh
 * requests.
 *
 * \value CreateGatewayRouteAction AppMesh CreateGatewayRoute action.
 * \value CreateMeshAction AppMesh CreateMesh action.
 * \value CreateRouteAction AppMesh CreateRoute action.
 * \value CreateVirtualGatewayAction AppMesh CreateVirtualGateway action.
 * \value CreateVirtualNodeAction AppMesh CreateVirtualNode action.
 * \value CreateVirtualRouterAction AppMesh CreateVirtualRouter action.
 * \value CreateVirtualServiceAction AppMesh CreateVirtualService action.
 * \value DeleteGatewayRouteAction AppMesh DeleteGatewayRoute action.
 * \value DeleteMeshAction AppMesh DeleteMesh action.
 * \value DeleteRouteAction AppMesh DeleteRoute action.
 * \value DeleteVirtualGatewayAction AppMesh DeleteVirtualGateway action.
 * \value DeleteVirtualNodeAction AppMesh DeleteVirtualNode action.
 * \value DeleteVirtualRouterAction AppMesh DeleteVirtualRouter action.
 * \value DeleteVirtualServiceAction AppMesh DeleteVirtualService action.
 * \value DescribeGatewayRouteAction AppMesh DescribeGatewayRoute action.
 * \value DescribeMeshAction AppMesh DescribeMesh action.
 * \value DescribeRouteAction AppMesh DescribeRoute action.
 * \value DescribeVirtualGatewayAction AppMesh DescribeVirtualGateway action.
 * \value DescribeVirtualNodeAction AppMesh DescribeVirtualNode action.
 * \value DescribeVirtualRouterAction AppMesh DescribeVirtualRouter action.
 * \value DescribeVirtualServiceAction AppMesh DescribeVirtualService action.
 * \value ListGatewayRoutesAction AppMesh ListGatewayRoutes action.
 * \value ListMeshesAction AppMesh ListMeshes action.
 * \value ListRoutesAction AppMesh ListRoutes action.
 * \value ListTagsForResourceAction AppMesh ListTagsForResource action.
 * \value ListVirtualGatewaysAction AppMesh ListVirtualGateways action.
 * \value ListVirtualNodesAction AppMesh ListVirtualNodes action.
 * \value ListVirtualRoutersAction AppMesh ListVirtualRouters action.
 * \value ListVirtualServicesAction AppMesh ListVirtualServices action.
 * \value TagResourceAction AppMesh TagResource action.
 * \value UntagResourceAction AppMesh UntagResource action.
 * \value UpdateGatewayRouteAction AppMesh UpdateGatewayRoute action.
 * \value UpdateMeshAction AppMesh UpdateMesh action.
 * \value UpdateRouteAction AppMesh UpdateRoute action.
 * \value UpdateVirtualGatewayAction AppMesh UpdateVirtualGateway action.
 * \value UpdateVirtualNodeAction AppMesh UpdateVirtualNode action.
 * \value UpdateVirtualRouterAction AppMesh UpdateVirtualRouter action.
 * \value UpdateVirtualServiceAction AppMesh UpdateVirtualService action.
 */

/*!
 * Constructs a AppMeshRequest object for AppMesh \a action.
 */
AppMeshRequest::AppMeshRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppMeshRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppMeshRequest::AppMeshRequest(const AppMeshRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppMeshRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppMeshRequest object to be equal to \a other.
 */
AppMeshRequest& AppMeshRequest::operator=(const AppMeshRequest &other)
{
    Q_D(AppMeshRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppMeshRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppMeshRequestPrivate.
 */
AppMeshRequest::AppMeshRequest(AppMeshRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppMesh action to be performed by this request.
 */
AppMeshRequest::Action AppMeshRequest::action() const
{
    Q_D(const AppMeshRequest);
    return d->action;
}

/*!
 * Returns the name of the AppMesh action to be performed by this request.
 */
QString AppMeshRequest::actionString() const
{
    return AppMeshRequestPrivate::toString(action());
}

/*!
 * Returns the AppMesh API version implemented by this request.
 */
QString AppMeshRequest::apiVersion() const
{
    Q_D(const AppMeshRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppMesh action to be performed by this request to \a action.
 */
void AppMeshRequest::setAction(const Action action)
{
    Q_D(AppMeshRequest);
    d->action = action;
}

/*!
 * Sets the AppMesh API version to include in this request to \a version.
 */
void AppMeshRequest::setApiVersion(const QString &version)
{
    Q_D(AppMeshRequest);
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
bool AppMeshRequest::operator==(const AppMeshRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppMesh queue name.
 *
 * @par From AppMesh FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppMesh queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppMeshRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppMeshRequest::clearParameter(const QString &name)
{
    Q_D(AppMeshRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppMeshRequest::clearParameters()
{
    Q_D(AppMeshRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppMeshRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppMeshRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppMeshRequest::parameters() const
{
    Q_D(const AppMeshRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppMeshRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppMeshRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppMeshRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppMeshRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppMesh request using the given
 * \a endpoint.
 *
 * This AppMesh implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppMeshRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppMeshRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppMesh::AppMeshRequestPrivate
 * \brief The AppMeshRequestPrivate class provides private implementation for AppMeshRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a AppMeshRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
AppMeshRequestPrivate::AppMeshRequestPrivate(const AppMeshRequest::Action action, AppMeshRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppMeshRequest class's copy constructor.
 */
AppMeshRequestPrivate::AppMeshRequestPrivate(const AppMeshRequestPrivate &other,
                                     AppMeshRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppMeshRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppMesh service's Action
 * query parameters.
 */
QString AppMeshRequestPrivate::toString(const AppMeshRequest::Action &action)
{
    #define ActionToString(action) \
        case AppMeshRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateGatewayRoute);
        ActionToString(CreateMesh);
        ActionToString(CreateRoute);
        ActionToString(CreateVirtualGateway);
        ActionToString(CreateVirtualNode);
        ActionToString(CreateVirtualRouter);
        ActionToString(CreateVirtualService);
        ActionToString(DeleteGatewayRoute);
        ActionToString(DeleteMesh);
        ActionToString(DeleteRoute);
        ActionToString(DeleteVirtualGateway);
        ActionToString(DeleteVirtualNode);
        ActionToString(DeleteVirtualRouter);
        ActionToString(DeleteVirtualService);
        ActionToString(DescribeGatewayRoute);
        ActionToString(DescribeMesh);
        ActionToString(DescribeRoute);
        ActionToString(DescribeVirtualGateway);
        ActionToString(DescribeVirtualNode);
        ActionToString(DescribeVirtualRouter);
        ActionToString(DescribeVirtualService);
        ActionToString(ListGatewayRoutes);
        ActionToString(ListMeshes);
        ActionToString(ListRoutes);
        ActionToString(ListTagsForResource);
        ActionToString(ListVirtualGateways);
        ActionToString(ListVirtualNodes);
        ActionToString(ListVirtualRouters);
        ActionToString(ListVirtualServices);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateGatewayRoute);
        ActionToString(UpdateMesh);
        ActionToString(UpdateRoute);
        ActionToString(UpdateVirtualGateway);
        ActionToString(UpdateVirtualNode);
        ActionToString(UpdateVirtualRouter);
        ActionToString(UpdateVirtualService);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppMesh
} // namespace QtAws
