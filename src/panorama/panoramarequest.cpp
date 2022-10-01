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

#include "panoramarequest.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::PanoramaRequest
 * \brief The PanoramaRequest class provides an interface for Panorama requests.
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * \enum PanoramaRequest::Action
 *
 * This enum describes the actions that can be performed as Panorama
 * requests.
 *
 * \value CreateApplicationInstanceAction Panorama CreateApplicationInstance action.
 * \value CreateJobForDevicesAction Panorama CreateJobForDevices action.
 * \value CreateNodeFromTemplateJobAction Panorama CreateNodeFromTemplateJob action.
 * \value CreatePackageAction Panorama CreatePackage action.
 * \value CreatePackageImportJobAction Panorama CreatePackageImportJob action.
 * \value DeleteDeviceAction Panorama DeleteDevice action.
 * \value DeletePackageAction Panorama DeletePackage action.
 * \value DeregisterPackageVersionAction Panorama DeregisterPackageVersion action.
 * \value DescribeApplicationInstanceAction Panorama DescribeApplicationInstance action.
 * \value DescribeApplicationInstanceDetailsAction Panorama DescribeApplicationInstanceDetails action.
 * \value DescribeDeviceAction Panorama DescribeDevice action.
 * \value DescribeDeviceJobAction Panorama DescribeDeviceJob action.
 * \value DescribeNodeAction Panorama DescribeNode action.
 * \value DescribeNodeFromTemplateJobAction Panorama DescribeNodeFromTemplateJob action.
 * \value DescribePackageAction Panorama DescribePackage action.
 * \value DescribePackageImportJobAction Panorama DescribePackageImportJob action.
 * \value DescribePackageVersionAction Panorama DescribePackageVersion action.
 * \value ListApplicationInstanceDependenciesAction Panorama ListApplicationInstanceDependencies action.
 * \value ListApplicationInstanceNodeInstancesAction Panorama ListApplicationInstanceNodeInstances action.
 * \value ListApplicationInstancesAction Panorama ListApplicationInstances action.
 * \value ListDevicesAction Panorama ListDevices action.
 * \value ListDevicesJobsAction Panorama ListDevicesJobs action.
 * \value ListNodeFromTemplateJobsAction Panorama ListNodeFromTemplateJobs action.
 * \value ListNodesAction Panorama ListNodes action.
 * \value ListPackageImportJobsAction Panorama ListPackageImportJobs action.
 * \value ListPackagesAction Panorama ListPackages action.
 * \value ListTagsForResourceAction Panorama ListTagsForResource action.
 * \value ProvisionDeviceAction Panorama ProvisionDevice action.
 * \value RegisterPackageVersionAction Panorama RegisterPackageVersion action.
 * \value RemoveApplicationInstanceAction Panorama RemoveApplicationInstance action.
 * \value TagResourceAction Panorama TagResource action.
 * \value UntagResourceAction Panorama UntagResource action.
 * \value UpdateDeviceMetadataAction Panorama UpdateDeviceMetadata action.
 */

/*!
 * Constructs a PanoramaRequest object for Panorama \a action.
 */
PanoramaRequest::PanoramaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PanoramaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PanoramaRequest::PanoramaRequest(const PanoramaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PanoramaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PanoramaRequest object to be equal to \a other.
 */
PanoramaRequest& PanoramaRequest::operator=(const PanoramaRequest &other)
{
    Q_D(PanoramaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PanoramaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PanoramaRequestPrivate.
 */
PanoramaRequest::PanoramaRequest(PanoramaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Panorama action to be performed by this request.
 */
PanoramaRequest::Action PanoramaRequest::action() const
{
    Q_D(const PanoramaRequest);
    return d->action;
}

/*!
 * Returns the name of the Panorama action to be performed by this request.
 */
QString PanoramaRequest::actionString() const
{
    return PanoramaRequestPrivate::toString(action());
}

/*!
 * Returns the Panorama API version implemented by this request.
 */
QString PanoramaRequest::apiVersion() const
{
    Q_D(const PanoramaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Panorama action to be performed by this request to \a action.
 */
void PanoramaRequest::setAction(const Action action)
{
    Q_D(PanoramaRequest);
    d->action = action;
}

/*!
 * Sets the Panorama API version to include in this request to \a version.
 */
void PanoramaRequest::setApiVersion(const QString &version)
{
    Q_D(PanoramaRequest);
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
bool PanoramaRequest::operator==(const PanoramaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Panorama queue name.
 *
 * @par From Panorama FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Panorama queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PanoramaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PanoramaRequest::clearParameter(const QString &name)
{
    Q_D(PanoramaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PanoramaRequest::clearParameters()
{
    Q_D(PanoramaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PanoramaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PanoramaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PanoramaRequest::parameters() const
{
    Q_D(const PanoramaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PanoramaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PanoramaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PanoramaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PanoramaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Panorama request using the given
 * \a endpoint.
 *
 * This Panorama implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PanoramaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PanoramaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Panorama::PanoramaRequestPrivate
 * \brief The PanoramaRequestPrivate class provides private implementation for PanoramaRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a PanoramaRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
PanoramaRequestPrivate::PanoramaRequestPrivate(const PanoramaRequest::Action action, PanoramaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-07-24"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PanoramaRequest class's copy constructor.
 */
PanoramaRequestPrivate::PanoramaRequestPrivate(const PanoramaRequestPrivate &other,
                                     PanoramaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PanoramaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Panorama service's Action
 * query parameters.
 */
QString PanoramaRequestPrivate::toString(const PanoramaRequest::Action &action)
{
    #define ActionToString(action) \
        case PanoramaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApplicationInstance);
        ActionToString(CreateJobForDevices);
        ActionToString(CreateNodeFromTemplateJob);
        ActionToString(CreatePackage);
        ActionToString(CreatePackageImportJob);
        ActionToString(DeleteDevice);
        ActionToString(DeletePackage);
        ActionToString(DeregisterPackageVersion);
        ActionToString(DescribeApplicationInstance);
        ActionToString(DescribeApplicationInstanceDetails);
        ActionToString(DescribeDevice);
        ActionToString(DescribeDeviceJob);
        ActionToString(DescribeNode);
        ActionToString(DescribeNodeFromTemplateJob);
        ActionToString(DescribePackage);
        ActionToString(DescribePackageImportJob);
        ActionToString(DescribePackageVersion);
        ActionToString(ListApplicationInstanceDependencies);
        ActionToString(ListApplicationInstanceNodeInstances);
        ActionToString(ListApplicationInstances);
        ActionToString(ListDevices);
        ActionToString(ListDevicesJobs);
        ActionToString(ListNodeFromTemplateJobs);
        ActionToString(ListNodes);
        ActionToString(ListPackageImportJobs);
        ActionToString(ListPackages);
        ActionToString(ListTagsForResource);
        ActionToString(ProvisionDevice);
        ActionToString(RegisterPackageVersion);
        ActionToString(RemoveApplicationInstance);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDeviceMetadata);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Panorama
} // namespace QtAws
