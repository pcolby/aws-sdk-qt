/*
    Copyright 2013-2018 Paul Colby

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

#include "storagegatewayrequest.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::StorageGatewayRequest
 * \brief The StorageGatewayRequest class provides an interface for StorageGateway requests.
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * \enum StorageGatewayRequest::Action
 *
 * This enum describes the actions that can be performed as StorageGateway
 * requests.
 *
 * \value ActivateGatewayAction StorageGateway ActivateGateway action.
 * \value AddCacheAction StorageGateway AddCache action.
 * \value AddTagsToResourceAction StorageGateway AddTagsToResource action.
 * \value AddUploadBufferAction StorageGateway AddUploadBuffer action.
 * \value AddWorkingStorageAction StorageGateway AddWorkingStorage action.
 * \value CancelArchivalAction StorageGateway CancelArchival action.
 * \value CancelRetrievalAction StorageGateway CancelRetrieval action.
 * \value CreateCachediSCSIVolumeAction StorageGateway CreateCachediSCSIVolume action.
 * \value CreateNFSFileShareAction StorageGateway CreateNFSFileShare action.
 * \value CreateSnapshotAction StorageGateway CreateSnapshot action.
 * \value CreateSnapshotFromVolumeRecoveryPointAction StorageGateway CreateSnapshotFromVolumeRecoveryPoint action.
 * \value CreateStorediSCSIVolumeAction StorageGateway CreateStorediSCSIVolume action.
 * \value CreateTapeWithBarcodeAction StorageGateway CreateTapeWithBarcode action.
 * \value CreateTapesAction StorageGateway CreateTapes action.
 * \value DeleteBandwidthRateLimitAction StorageGateway DeleteBandwidthRateLimit action.
 * \value DeleteChapCredentialsAction StorageGateway DeleteChapCredentials action.
 * \value DeleteFileShareAction StorageGateway DeleteFileShare action.
 * \value DeleteGatewayAction StorageGateway DeleteGateway action.
 * \value DeleteSnapshotScheduleAction StorageGateway DeleteSnapshotSchedule action.
 * \value DeleteTapeAction StorageGateway DeleteTape action.
 * \value DeleteTapeArchiveAction StorageGateway DeleteTapeArchive action.
 * \value DeleteVolumeAction StorageGateway DeleteVolume action.
 * \value DescribeBandwidthRateLimitAction StorageGateway DescribeBandwidthRateLimit action.
 * \value DescribeCacheAction StorageGateway DescribeCache action.
 * \value DescribeCachediSCSIVolumesAction StorageGateway DescribeCachediSCSIVolumes action.
 * \value DescribeChapCredentialsAction StorageGateway DescribeChapCredentials action.
 * \value DescribeGatewayInformationAction StorageGateway DescribeGatewayInformation action.
 * \value DescribeMaintenanceStartTimeAction StorageGateway DescribeMaintenanceStartTime action.
 * \value DescribeNFSFileSharesAction StorageGateway DescribeNFSFileShares action.
 * \value DescribeSnapshotScheduleAction StorageGateway DescribeSnapshotSchedule action.
 * \value DescribeStorediSCSIVolumesAction StorageGateway DescribeStorediSCSIVolumes action.
 * \value DescribeTapeArchivesAction StorageGateway DescribeTapeArchives action.
 * \value DescribeTapeRecoveryPointsAction StorageGateway DescribeTapeRecoveryPoints action.
 * \value DescribeTapesAction StorageGateway DescribeTapes action.
 * \value DescribeUploadBufferAction StorageGateway DescribeUploadBuffer action.
 * \value DescribeVTLDevicesAction StorageGateway DescribeVTLDevices action.
 * \value DescribeWorkingStorageAction StorageGateway DescribeWorkingStorage action.
 * \value DisableGatewayAction StorageGateway DisableGateway action.
 * \value ListFileSharesAction StorageGateway ListFileShares action.
 * \value ListGatewaysAction StorageGateway ListGateways action.
 * \value ListLocalDisksAction StorageGateway ListLocalDisks action.
 * \value ListTagsForResourceAction StorageGateway ListTagsForResource action.
 * \value ListTapesAction StorageGateway ListTapes action.
 * \value ListVolumeInitiatorsAction StorageGateway ListVolumeInitiators action.
 * \value ListVolumeRecoveryPointsAction StorageGateway ListVolumeRecoveryPoints action.
 * \value ListVolumesAction StorageGateway ListVolumes action.
 * \value NotifyWhenUploadedAction StorageGateway NotifyWhenUploaded action.
 * \value RefreshCacheAction StorageGateway RefreshCache action.
 * \value RemoveTagsFromResourceAction StorageGateway RemoveTagsFromResource action.
 * \value ResetCacheAction StorageGateway ResetCache action.
 * \value RetrieveTapeArchiveAction StorageGateway RetrieveTapeArchive action.
 * \value RetrieveTapeRecoveryPointAction StorageGateway RetrieveTapeRecoveryPoint action.
 * \value SetLocalConsolePasswordAction StorageGateway SetLocalConsolePassword action.
 * \value ShutdownGatewayAction StorageGateway ShutdownGateway action.
 * \value StartGatewayAction StorageGateway StartGateway action.
 * \value UpdateBandwidthRateLimitAction StorageGateway UpdateBandwidthRateLimit action.
 * \value UpdateChapCredentialsAction StorageGateway UpdateChapCredentials action.
 * \value UpdateGatewayInformationAction StorageGateway UpdateGatewayInformation action.
 * \value UpdateGatewaySoftwareNowAction StorageGateway UpdateGatewaySoftwareNow action.
 * \value UpdateMaintenanceStartTimeAction StorageGateway UpdateMaintenanceStartTime action.
 * \value UpdateNFSFileShareAction StorageGateway UpdateNFSFileShare action.
 * \value UpdateSnapshotScheduleAction StorageGateway UpdateSnapshotSchedule action.
 * \value UpdateVTLDeviceTypeAction StorageGateway UpdateVTLDeviceType action.
 */

/*!
 * Constructs a StorageGatewayRequest object for StorageGateway \a action.
 */
StorageGatewayRequest::StorageGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new StorageGatewayRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
StorageGatewayRequest::StorageGatewayRequest(const StorageGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new StorageGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the StorageGatewayRequest object to be equal to \a other.
 */
StorageGatewayRequest& StorageGatewayRequest::operator=(const StorageGatewayRequest &other)
{
    Q_D(StorageGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa StorageGatewayRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StorageGatewayRequestPrivate.
 */
StorageGatewayRequest::StorageGatewayRequest(StorageGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the StorageGateway action to be performed by this request.
 */
StorageGatewayRequest::Action StorageGatewayRequest::action() const
{
    Q_D(const StorageGatewayRequest);
    return d->action;
}

/*!
 * Returns the name of the StorageGateway action to be performed by this request.
 */
QString StorageGatewayRequest::actionString() const
{
    return StorageGatewayRequestPrivate::toString(action());
}

/*!
 * Returns the StorageGateway API version implemented by this request.
 */
QString StorageGatewayRequest::apiVersion() const
{
    Q_D(const StorageGatewayRequest);
    return d->apiVersion;
}

/*!
 * Sets the StorageGateway action to be performed by this request to \a action.
 */
void StorageGatewayRequest::setAction(const Action action)
{
    Q_D(StorageGatewayRequest);
    d->action = action;
}

/*!
 * Sets the StorageGateway API version to include in this request to \a version.
 */
void StorageGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(StorageGatewayRequest);
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
bool StorageGatewayRequest::operator==(const StorageGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid StorageGateway queue name.
 *
 * @par From StorageGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid StorageGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool StorageGatewayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int StorageGatewayRequest::clearParameter(const QString &name)
{
    Q_D(StorageGatewayRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void StorageGatewayRequest::clearParameters()
{
    Q_D(StorageGatewayRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant StorageGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const StorageGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &StorageGatewayRequest::parameters() const
{
    Q_D(const StorageGatewayRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void StorageGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(StorageGatewayRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void StorageGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(StorageGatewayRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the StorageGateway request using the given
 * \a endpoint.
 *
 * This StorageGateway implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest StorageGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const StorageGatewayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::StorageGateway::StorageGatewayRequestPrivate
 * \brief The StorageGatewayRequestPrivate class provides private implementation for StorageGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a StorageGatewayRequestPrivate object for StorageGateway \a action,
 * with public implementation \a q.
 */
StorageGatewayRequestPrivate::StorageGatewayRequestPrivate(const StorageGatewayRequest::Action action, StorageGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the StorageGatewayRequest class's copy constructor.
 */
StorageGatewayRequestPrivate::StorageGatewayRequestPrivate(const StorageGatewayRequestPrivate &other,
                                     StorageGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts StorageGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the StorageGateway service's Action
 * query parameters.
 */
QString StorageGatewayRequestPrivate::toString(const StorageGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case StorageGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace StorageGateway
} // namespace QtAws
