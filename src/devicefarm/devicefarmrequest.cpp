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

#include "devicefarmrequest.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeviceFarmRequest
 * \brief The DeviceFarmRequest class provides an interface for DeviceFarm requests.
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * \enum DeviceFarmRequest::Action
 *
 * This enum describes the actions that can be performed as DeviceFarm
 * requests.
 *
 * \value CreateDevicePoolAction DeviceFarm CreateDevicePool action.
 * \value CreateInstanceProfileAction DeviceFarm CreateInstanceProfile action.
 * \value CreateNetworkProfileAction DeviceFarm CreateNetworkProfile action.
 * \value CreateProjectAction DeviceFarm CreateProject action.
 * \value CreateRemoteAccessSessionAction DeviceFarm CreateRemoteAccessSession action.
 * \value CreateTestGridProjectAction DeviceFarm CreateTestGridProject action.
 * \value CreateTestGridUrlAction DeviceFarm CreateTestGridUrl action.
 * \value CreateUploadAction DeviceFarm CreateUpload action.
 * \value CreateVPCEConfigurationAction DeviceFarm CreateVPCEConfiguration action.
 * \value DeleteDevicePoolAction DeviceFarm DeleteDevicePool action.
 * \value DeleteInstanceProfileAction DeviceFarm DeleteInstanceProfile action.
 * \value DeleteNetworkProfileAction DeviceFarm DeleteNetworkProfile action.
 * \value DeleteProjectAction DeviceFarm DeleteProject action.
 * \value DeleteRemoteAccessSessionAction DeviceFarm DeleteRemoteAccessSession action.
 * \value DeleteRunAction DeviceFarm DeleteRun action.
 * \value DeleteTestGridProjectAction DeviceFarm DeleteTestGridProject action.
 * \value DeleteUploadAction DeviceFarm DeleteUpload action.
 * \value DeleteVPCEConfigurationAction DeviceFarm DeleteVPCEConfiguration action.
 * \value GetAccountSettingsAction DeviceFarm GetAccountSettings action.
 * \value GetDeviceAction DeviceFarm GetDevice action.
 * \value GetDeviceInstanceAction DeviceFarm GetDeviceInstance action.
 * \value GetDevicePoolAction DeviceFarm GetDevicePool action.
 * \value GetDevicePoolCompatibilityAction DeviceFarm GetDevicePoolCompatibility action.
 * \value GetInstanceProfileAction DeviceFarm GetInstanceProfile action.
 * \value GetJobAction DeviceFarm GetJob action.
 * \value GetNetworkProfileAction DeviceFarm GetNetworkProfile action.
 * \value GetOfferingStatusAction DeviceFarm GetOfferingStatus action.
 * \value GetProjectAction DeviceFarm GetProject action.
 * \value GetRemoteAccessSessionAction DeviceFarm GetRemoteAccessSession action.
 * \value GetRunAction DeviceFarm GetRun action.
 * \value GetSuiteAction DeviceFarm GetSuite action.
 * \value GetTestAction DeviceFarm GetTest action.
 * \value GetTestGridProjectAction DeviceFarm GetTestGridProject action.
 * \value GetTestGridSessionAction DeviceFarm GetTestGridSession action.
 * \value GetUploadAction DeviceFarm GetUpload action.
 * \value GetVPCEConfigurationAction DeviceFarm GetVPCEConfiguration action.
 * \value InstallToRemoteAccessSessionAction DeviceFarm InstallToRemoteAccessSession action.
 * \value ListArtifactsAction DeviceFarm ListArtifacts action.
 * \value ListDeviceInstancesAction DeviceFarm ListDeviceInstances action.
 * \value ListDevicePoolsAction DeviceFarm ListDevicePools action.
 * \value ListDevicesAction DeviceFarm ListDevices action.
 * \value ListInstanceProfilesAction DeviceFarm ListInstanceProfiles action.
 * \value ListJobsAction DeviceFarm ListJobs action.
 * \value ListNetworkProfilesAction DeviceFarm ListNetworkProfiles action.
 * \value ListOfferingPromotionsAction DeviceFarm ListOfferingPromotions action.
 * \value ListOfferingTransactionsAction DeviceFarm ListOfferingTransactions action.
 * \value ListOfferingsAction DeviceFarm ListOfferings action.
 * \value ListProjectsAction DeviceFarm ListProjects action.
 * \value ListRemoteAccessSessionsAction DeviceFarm ListRemoteAccessSessions action.
 * \value ListRunsAction DeviceFarm ListRuns action.
 * \value ListSamplesAction DeviceFarm ListSamples action.
 * \value ListSuitesAction DeviceFarm ListSuites action.
 * \value ListTagsForResourceAction DeviceFarm ListTagsForResource action.
 * \value ListTestGridProjectsAction DeviceFarm ListTestGridProjects action.
 * \value ListTestGridSessionActionsAction DeviceFarm ListTestGridSessionActions action.
 * \value ListTestGridSessionArtifactsAction DeviceFarm ListTestGridSessionArtifacts action.
 * \value ListTestGridSessionsAction DeviceFarm ListTestGridSessions action.
 * \value ListTestsAction DeviceFarm ListTests action.
 * \value ListUniqueProblemsAction DeviceFarm ListUniqueProblems action.
 * \value ListUploadsAction DeviceFarm ListUploads action.
 * \value ListVPCEConfigurationsAction DeviceFarm ListVPCEConfigurations action.
 * \value PurchaseOfferingAction DeviceFarm PurchaseOffering action.
 * \value RenewOfferingAction DeviceFarm RenewOffering action.
 * \value ScheduleRunAction DeviceFarm ScheduleRun action.
 * \value StopJobAction DeviceFarm StopJob action.
 * \value StopRemoteAccessSessionAction DeviceFarm StopRemoteAccessSession action.
 * \value StopRunAction DeviceFarm StopRun action.
 * \value TagResourceAction DeviceFarm TagResource action.
 * \value UntagResourceAction DeviceFarm UntagResource action.
 * \value UpdateDeviceInstanceAction DeviceFarm UpdateDeviceInstance action.
 * \value UpdateDevicePoolAction DeviceFarm UpdateDevicePool action.
 * \value UpdateInstanceProfileAction DeviceFarm UpdateInstanceProfile action.
 * \value UpdateNetworkProfileAction DeviceFarm UpdateNetworkProfile action.
 * \value UpdateProjectAction DeviceFarm UpdateProject action.
 * \value UpdateTestGridProjectAction DeviceFarm UpdateTestGridProject action.
 * \value UpdateUploadAction DeviceFarm UpdateUpload action.
 * \value UpdateVPCEConfigurationAction DeviceFarm UpdateVPCEConfiguration action.
 */

/*!
 * Constructs a DeviceFarmRequest object for DeviceFarm \a action.
 */
DeviceFarmRequest::DeviceFarmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DeviceFarmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DeviceFarmRequest::DeviceFarmRequest(const DeviceFarmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DeviceFarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DeviceFarmRequest object to be equal to \a other.
 */
DeviceFarmRequest& DeviceFarmRequest::operator=(const DeviceFarmRequest &other)
{
    Q_D(DeviceFarmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DeviceFarmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DeviceFarmRequestPrivate.
 */
DeviceFarmRequest::DeviceFarmRequest(DeviceFarmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DeviceFarm action to be performed by this request.
 */
DeviceFarmRequest::Action DeviceFarmRequest::action() const
{
    Q_D(const DeviceFarmRequest);
    return d->action;
}

/*!
 * Returns the name of the DeviceFarm action to be performed by this request.
 */
QString DeviceFarmRequest::actionString() const
{
    return DeviceFarmRequestPrivate::toString(action());
}

/*!
 * Returns the DeviceFarm API version implemented by this request.
 */
QString DeviceFarmRequest::apiVersion() const
{
    Q_D(const DeviceFarmRequest);
    return d->apiVersion;
}

/*!
 * Sets the DeviceFarm action to be performed by this request to \a action.
 */
void DeviceFarmRequest::setAction(const Action action)
{
    Q_D(DeviceFarmRequest);
    d->action = action;
}

/*!
 * Sets the DeviceFarm API version to include in this request to \a version.
 */
void DeviceFarmRequest::setApiVersion(const QString &version)
{
    Q_D(DeviceFarmRequest);
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
bool DeviceFarmRequest::operator==(const DeviceFarmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DeviceFarm queue name.
 *
 * @par From DeviceFarm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DeviceFarm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DeviceFarmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DeviceFarmRequest::clearParameter(const QString &name)
{
    Q_D(DeviceFarmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DeviceFarmRequest::clearParameters()
{
    Q_D(DeviceFarmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DeviceFarmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DeviceFarmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DeviceFarmRequest::parameters() const
{
    Q_D(const DeviceFarmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DeviceFarmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DeviceFarmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DeviceFarmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DeviceFarmRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DeviceFarm request using the given
 * \a endpoint.
 *
 * This DeviceFarm implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DeviceFarmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DeviceFarmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DeviceFarm::DeviceFarmRequestPrivate
 * \brief The DeviceFarmRequestPrivate class provides private implementation for DeviceFarmRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeviceFarmRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeviceFarmRequestPrivate::DeviceFarmRequestPrivate(const DeviceFarmRequest::Action action, DeviceFarmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DeviceFarmRequest class's copy constructor.
 */
DeviceFarmRequestPrivate::DeviceFarmRequestPrivate(const DeviceFarmRequestPrivate &other,
                                     DeviceFarmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DeviceFarmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DeviceFarm service's Action
 * query parameters.
 */
QString DeviceFarmRequestPrivate::toString(const DeviceFarmRequest::Action &action)
{
    #define ActionToString(action) \
        case DeviceFarmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DeviceFarm
} // namespace QtAws
