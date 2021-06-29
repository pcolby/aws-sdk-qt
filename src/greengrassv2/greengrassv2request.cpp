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

#include "greengrassv2request.h"
#include "greengrassv2request_p.h"

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::GreengrassV2Request
 * \brief The GreengrassV2Request class provides an interface for GreengrassV2 requests.
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * \enum GreengrassV2Request::Action
 *
 * This enum describes the actions that can be performed as GreengrassV2
 * requests.
 *
 * \value BatchAssociateClientDeviceWithCoreDeviceAction GreengrassV2 BatchAssociateClientDeviceWithCoreDevice action.
 * \value BatchDisassociateClientDeviceFromCoreDeviceAction GreengrassV2 BatchDisassociateClientDeviceFromCoreDevice action.
 * \value CancelDeploymentAction GreengrassV2 CancelDeployment action.
 * \value CreateComponentVersionAction GreengrassV2 CreateComponentVersion action.
 * \value CreateDeploymentAction GreengrassV2 CreateDeployment action.
 * \value DeleteComponentAction GreengrassV2 DeleteComponent action.
 * \value DeleteCoreDeviceAction GreengrassV2 DeleteCoreDevice action.
 * \value DescribeComponentAction GreengrassV2 DescribeComponent action.
 * \value GetComponentAction GreengrassV2 GetComponent action.
 * \value GetComponentVersionArtifactAction GreengrassV2 GetComponentVersionArtifact action.
 * \value GetCoreDeviceAction GreengrassV2 GetCoreDevice action.
 * \value GetDeploymentAction GreengrassV2 GetDeployment action.
 * \value ListClientDevicesAssociatedWithCoreDeviceAction GreengrassV2 ListClientDevicesAssociatedWithCoreDevice action.
 * \value ListComponentVersionsAction GreengrassV2 ListComponentVersions action.
 * \value ListComponentsAction GreengrassV2 ListComponents action.
 * \value ListCoreDevicesAction GreengrassV2 ListCoreDevices action.
 * \value ListDeploymentsAction GreengrassV2 ListDeployments action.
 * \value ListEffectiveDeploymentsAction GreengrassV2 ListEffectiveDeployments action.
 * \value ListInstalledComponentsAction GreengrassV2 ListInstalledComponents action.
 * \value ListTagsForResourceAction GreengrassV2 ListTagsForResource action.
 * \value ResolveComponentCandidatesAction GreengrassV2 ResolveComponentCandidates action.
 * \value TagResourceAction GreengrassV2 TagResource action.
 * \value UntagResourceAction GreengrassV2 UntagResource action.
 */

/*!
 * Constructs a GreengrassV2Request object for GreengrassV2 \a action.
 */
GreengrassV2Request::GreengrassV2Request(const Action action)
    : d_ptr(new GreengrassV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GreengrassV2Request::GreengrassV2Request(const GreengrassV2Request &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new GreengrassV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GreengrassV2Request object to be equal to \a other.
 */
GreengrassV2Request& GreengrassV2Request::operator=(const GreengrassV2Request &other)
{
    Q_D(GreengrassV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GreengrassV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassV2RequestPrivate.
 */
GreengrassV2Request::GreengrassV2Request(GreengrassV2RequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the GreengrassV2 action to be performed by this request.
 */
GreengrassV2Request::Action GreengrassV2Request::action() const
{
    Q_D(const GreengrassV2Request);
    return d->action;
}

/*!
 * Returns the name of the GreengrassV2 action to be performed by this request.
 */
QString GreengrassV2Request::actionString() const
{
    return GreengrassV2RequestPrivate::toString(action());
}

/*!
 * Returns the GreengrassV2 API version implemented by this request.
 */
QString GreengrassV2Request::apiVersion() const
{
    Q_D(const GreengrassV2Request);
    return d->apiVersion;
}

/*!
 * Sets the GreengrassV2 action to be performed by this request to \a action.
 */
void GreengrassV2Request::setAction(const Action action)
{
    Q_D(GreengrassV2Request);
    d->action = action;
}

/*!
 * Sets the GreengrassV2 API version to include in this request to \a version.
 */
void GreengrassV2Request::setApiVersion(const QString &version)
{
    Q_D(GreengrassV2Request);
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
bool GreengrassV2Request::operator==(const GreengrassV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GreengrassV2 queue name.
 *
 * @par From GreengrassV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GreengrassV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GreengrassV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GreengrassV2Request::clearParameter(const QString &name)
{
    Q_D(GreengrassV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GreengrassV2Request::clearParameters()
{
    Q_D(GreengrassV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GreengrassV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GreengrassV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GreengrassV2Request::parameters() const
{
    Q_D(const GreengrassV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GreengrassV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GreengrassV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GreengrassV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(GreengrassV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GreengrassV2 request using the given
 * \a endpoint.
 *
 * This GreengrassV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GreengrassV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GreengrassV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GreengrassV2::GreengrassV2RequestPrivate
 * \brief The GreengrassV2RequestPrivate class provides private implementation for GreengrassV2Request.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a GreengrassV2RequestPrivate object for GreengrassV2 \a action,
 * with public implementation \a q.
 */
GreengrassV2RequestPrivate::GreengrassV2RequestPrivate(const GreengrassV2Request::Action action, GreengrassV2Request * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GreengrassV2Request class's copy constructor.
 */
GreengrassV2RequestPrivate::GreengrassV2RequestPrivate(const GreengrassV2RequestPrivate &other,
                                     GreengrassV2Request * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GreengrassV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the GreengrassV2 service's Action
 * query parameters.
 */
QString GreengrassV2RequestPrivate::toString(const GreengrassV2Request::Action &action)
{
    #define ActionToString(action) \
        case GreengrassV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchAssociateClientDeviceWithCoreDevice);
        ActionToString(BatchDisassociateClientDeviceFromCoreDevice);
        ActionToString(CancelDeployment);
        ActionToString(CreateComponentVersion);
        ActionToString(CreateDeployment);
        ActionToString(DeleteComponent);
        ActionToString(DeleteCoreDevice);
        ActionToString(DescribeComponent);
        ActionToString(GetComponent);
        ActionToString(GetComponentVersionArtifact);
        ActionToString(GetCoreDevice);
        ActionToString(GetDeployment);
        ActionToString(ListClientDevicesAssociatedWithCoreDevice);
        ActionToString(ListComponentVersions);
        ActionToString(ListComponents);
        ActionToString(ListCoreDevices);
        ActionToString(ListDeployments);
        ActionToString(ListEffectiveDeployments);
        ActionToString(ListInstalledComponents);
        ActionToString(ListTagsForResource);
        ActionToString(ResolveComponentCandidates);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GreengrassV2
} // namespace QtAws
