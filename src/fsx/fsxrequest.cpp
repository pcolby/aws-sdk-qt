// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fsxrequest.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::FSxRequest
 * \brief The FSxRequest class provides an interface for FSx requests.
 *
 * \inmodule QtAwsFSx
 */

/*!
 * \enum FSxRequest::Action
 *
 * This enum describes the actions that can be performed as FSx
 * requests.
 *
 * \value AssociateFileSystemAliasesAction FSx AssociateFileSystemAliases action.
 * \value CancelDataRepositoryTaskAction FSx CancelDataRepositoryTask action.
 * \value CopyBackupAction FSx CopyBackup action.
 * \value CreateBackupAction FSx CreateBackup action.
 * \value CreateDataRepositoryAssociationAction FSx CreateDataRepositoryAssociation action.
 * \value CreateDataRepositoryTaskAction FSx CreateDataRepositoryTask action.
 * \value CreateFileSystemAction FSx CreateFileSystem action.
 * \value CreateFileSystemFromBackupAction FSx CreateFileSystemFromBackup action.
 * \value CreateSnapshotAction FSx CreateSnapshot action.
 * \value CreateStorageVirtualMachineAction FSx CreateStorageVirtualMachine action.
 * \value CreateVolumeAction FSx CreateVolume action.
 * \value CreateVolumeFromBackupAction FSx CreateVolumeFromBackup action.
 * \value DeleteBackupAction FSx DeleteBackup action.
 * \value DeleteDataRepositoryAssociationAction FSx DeleteDataRepositoryAssociation action.
 * \value DeleteFileSystemAction FSx DeleteFileSystem action.
 * \value DeleteSnapshotAction FSx DeleteSnapshot action.
 * \value DeleteStorageVirtualMachineAction FSx DeleteStorageVirtualMachine action.
 * \value DeleteVolumeAction FSx DeleteVolume action.
 * \value DescribeBackupsAction FSx DescribeBackups action.
 * \value DescribeDataRepositoryAssociationsAction FSx DescribeDataRepositoryAssociations action.
 * \value DescribeDataRepositoryTasksAction FSx DescribeDataRepositoryTasks action.
 * \value DescribeFileSystemAliasesAction FSx DescribeFileSystemAliases action.
 * \value DescribeFileSystemsAction FSx DescribeFileSystems action.
 * \value DescribeSnapshotsAction FSx DescribeSnapshots action.
 * \value DescribeStorageVirtualMachinesAction FSx DescribeStorageVirtualMachines action.
 * \value DescribeVolumesAction FSx DescribeVolumes action.
 * \value DisassociateFileSystemAliasesAction FSx DisassociateFileSystemAliases action.
 * \value ListTagsForResourceAction FSx ListTagsForResource action.
 * \value ReleaseFileSystemNfsV3LocksAction FSx ReleaseFileSystemNfsV3Locks action.
 * \value RestoreVolumeFromSnapshotAction FSx RestoreVolumeFromSnapshot action.
 * \value TagResourceAction FSx TagResource action.
 * \value UntagResourceAction FSx UntagResource action.
 * \value UpdateDataRepositoryAssociationAction FSx UpdateDataRepositoryAssociation action.
 * \value UpdateFileSystemAction FSx UpdateFileSystem action.
 * \value UpdateSnapshotAction FSx UpdateSnapshot action.
 * \value UpdateStorageVirtualMachineAction FSx UpdateStorageVirtualMachine action.
 * \value UpdateVolumeAction FSx UpdateVolume action.
 */

/*!
 * Constructs a FSxRequest object for FSx \a action.
 */
FSxRequest::FSxRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FSxRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FSxRequest::FSxRequest(const FSxRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FSxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FSxRequest object to be equal to \a other.
 */
FSxRequest& FSxRequest::operator=(const FSxRequest &other)
{
    Q_D(FSxRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FSxRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FSxRequestPrivate.
 */
FSxRequest::FSxRequest(FSxRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the FSx action to be performed by this request.
 */
FSxRequest::Action FSxRequest::action() const
{
    Q_D(const FSxRequest);
    return d->action;
}

/*!
 * Returns the name of the FSx action to be performed by this request.
 */
QString FSxRequest::actionString() const
{
    return FSxRequestPrivate::toString(action());
}

/*!
 * Returns the FSx API version implemented by this request.
 */
QString FSxRequest::apiVersion() const
{
    Q_D(const FSxRequest);
    return d->apiVersion;
}

/*!
 * Sets the FSx action to be performed by this request to \a action.
 */
void FSxRequest::setAction(const Action action)
{
    Q_D(FSxRequest);
    d->action = action;
}

/*!
 * Sets the FSx API version to include in this request to \a version.
 */
void FSxRequest::setApiVersion(const QString &version)
{
    Q_D(FSxRequest);
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
bool FSxRequest::operator==(const FSxRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid FSx queue name.
 *
 * @par From FSx FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FSx queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FSxRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FSxRequest::clearParameter(const QString &name)
{
    Q_D(FSxRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FSxRequest::clearParameters()
{
    Q_D(FSxRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FSxRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FSxRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FSxRequest::parameters() const
{
    Q_D(const FSxRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FSxRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FSxRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FSxRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FSxRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the FSx request using the given
 * \a endpoint.
 *
 * This FSx implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FSxRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FSxRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::FSx::FSxRequestPrivate
 * \brief The FSxRequestPrivate class provides private implementation for FSxRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a FSxRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
FSxRequestPrivate::FSxRequestPrivate(const FSxRequest::Action action, FSxRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-03-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FSxRequest class's copy constructor.
 */
FSxRequestPrivate::FSxRequestPrivate(const FSxRequestPrivate &other,
                                     FSxRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FSxRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the FSx service's Action
 * query parameters.
 */
QString FSxRequestPrivate::toString(const FSxRequest::Action &action)
{
    #define ActionToString(action) \
        case FSxRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateFileSystemAliases);
        ActionToString(CancelDataRepositoryTask);
        ActionToString(CopyBackup);
        ActionToString(CreateBackup);
        ActionToString(CreateDataRepositoryAssociation);
        ActionToString(CreateDataRepositoryTask);
        ActionToString(CreateFileSystem);
        ActionToString(CreateFileSystemFromBackup);
        ActionToString(CreateSnapshot);
        ActionToString(CreateStorageVirtualMachine);
        ActionToString(CreateVolume);
        ActionToString(CreateVolumeFromBackup);
        ActionToString(DeleteBackup);
        ActionToString(DeleteDataRepositoryAssociation);
        ActionToString(DeleteFileSystem);
        ActionToString(DeleteSnapshot);
        ActionToString(DeleteStorageVirtualMachine);
        ActionToString(DeleteVolume);
        ActionToString(DescribeBackups);
        ActionToString(DescribeDataRepositoryAssociations);
        ActionToString(DescribeDataRepositoryTasks);
        ActionToString(DescribeFileSystemAliases);
        ActionToString(DescribeFileSystems);
        ActionToString(DescribeSnapshots);
        ActionToString(DescribeStorageVirtualMachines);
        ActionToString(DescribeVolumes);
        ActionToString(DisassociateFileSystemAliases);
        ActionToString(ListTagsForResource);
        ActionToString(ReleaseFileSystemNfsV3Locks);
        ActionToString(RestoreVolumeFromSnapshot);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDataRepositoryAssociation);
        ActionToString(UpdateFileSystem);
        ActionToString(UpdateSnapshot);
        ActionToString(UpdateStorageVirtualMachine);
        ActionToString(UpdateVolume);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FSx
} // namespace QtAws
