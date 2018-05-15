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

#include "glacierrequest.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::GlacierRequest
 * \brief The GlacierRequest class provides an interface for Glacier requests.
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * \enum GlacierRequest::Action
 *
 * This enum describes the actions that can be performed as Glacier
 * requests.
 *
 * \value AbortMultipartUploadAction Glacier AbortMultipartUpload action.
 * \value AbortVaultLockAction Glacier AbortVaultLock action.
 * \value AddTagsToVaultAction Glacier AddTagsToVault action.
 * \value CompleteMultipartUploadAction Glacier CompleteMultipartUpload action.
 * \value CompleteVaultLockAction Glacier CompleteVaultLock action.
 * \value CreateVaultAction Glacier CreateVault action.
 * \value DeleteArchiveAction Glacier DeleteArchive action.
 * \value DeleteVaultAction Glacier DeleteVault action.
 * \value DeleteVaultAccessPolicyAction Glacier DeleteVaultAccessPolicy action.
 * \value DeleteVaultNotificationsAction Glacier DeleteVaultNotifications action.
 * \value DescribeJobAction Glacier DescribeJob action.
 * \value DescribeVaultAction Glacier DescribeVault action.
 * \value GetDataRetrievalPolicyAction Glacier GetDataRetrievalPolicy action.
 * \value GetJobOutputAction Glacier GetJobOutput action.
 * \value GetVaultAccessPolicyAction Glacier GetVaultAccessPolicy action.
 * \value GetVaultLockAction Glacier GetVaultLock action.
 * \value GetVaultNotificationsAction Glacier GetVaultNotifications action.
 * \value InitiateJobAction Glacier InitiateJob action.
 * \value InitiateMultipartUploadAction Glacier InitiateMultipartUpload action.
 * \value InitiateVaultLockAction Glacier InitiateVaultLock action.
 * \value ListJobsAction Glacier ListJobs action.
 * \value ListMultipartUploadsAction Glacier ListMultipartUploads action.
 * \value ListPartsAction Glacier ListParts action.
 * \value ListProvisionedCapacityAction Glacier ListProvisionedCapacity action.
 * \value ListTagsForVaultAction Glacier ListTagsForVault action.
 * \value ListVaultsAction Glacier ListVaults action.
 * \value PurchaseProvisionedCapacityAction Glacier PurchaseProvisionedCapacity action.
 * \value RemoveTagsFromVaultAction Glacier RemoveTagsFromVault action.
 * \value SetDataRetrievalPolicyAction Glacier SetDataRetrievalPolicy action.
 * \value SetVaultAccessPolicyAction Glacier SetVaultAccessPolicy action.
 * \value SetVaultNotificationsAction Glacier SetVaultNotifications action.
 * \value UploadArchiveAction Glacier UploadArchive action.
 * \value UploadMultipartPartAction Glacier UploadMultipartPart action.
 */

/*!
 * Constructs a GlacierRequest object for Glacier \a action.
 */
GlacierRequest::GlacierRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GlacierRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GlacierRequest::GlacierRequest(const GlacierRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GlacierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GlacierRequest object to be equal to \a other.
 */
GlacierRequest& GlacierRequest::operator=(const GlacierRequest &other)
{
    Q_D(GlacierRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GlacierRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlacierRequestPrivate.
 */
GlacierRequest::GlacierRequest(GlacierRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Glacier action to be performed by this request.
 */
GlacierRequest::Action GlacierRequest::action() const
{
    Q_D(const GlacierRequest);
    return d->action;
}

/*!
 * Returns the name of the Glacier action to be performed by this request.
 */
QString GlacierRequest::actionString() const
{
    return GlacierRequestPrivate::toString(action());
}

/*!
 * Returns the Glacier API version implemented by this request.
 */
QString GlacierRequest::apiVersion() const
{
    Q_D(const GlacierRequest);
    return d->apiVersion;
}

/*!
 * Sets the Glacier action to be performed by this request to \a action.
 */
void GlacierRequest::setAction(const Action action)
{
    Q_D(GlacierRequest);
    d->action = action;
}

/*!
 * Sets the Glacier API version to include in this request to \a version.
 */
void GlacierRequest::setApiVersion(const QString &version)
{
    Q_D(GlacierRequest);
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
bool GlacierRequest::operator==(const GlacierRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Glacier queue name.
 *
 * @par From Glacier FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Glacier queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GlacierRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GlacierRequest::clearParameter(const QString &name)
{
    Q_D(GlacierRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GlacierRequest::clearParameters()
{
    Q_D(GlacierRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GlacierRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GlacierRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GlacierRequest::parameters() const
{
    Q_D(const GlacierRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GlacierRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GlacierRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GlacierRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GlacierRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Glacier request using the given
 * \a endpoint.
 *
 * This Glacier implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GlacierRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GlacierRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Glacier::GlacierRequestPrivate
 * \brief The GlacierRequestPrivate class provides private implementation for GlacierRequest.
 * \internal
 *
 * \inmodule QtAwsGlacier
 */

/*!
 * Constructs a GlacierRequestPrivate object for Glacier \a action,
 * with public implementation \a q.
 */
GlacierRequestPrivate::GlacierRequestPrivate(const GlacierRequest::Action action, GlacierRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GlacierRequest class's copy constructor.
 */
GlacierRequestPrivate::GlacierRequestPrivate(const GlacierRequestPrivate &other,
                                     GlacierRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GlacierRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Glacier service's Action
 * query parameters.
 */
QString GlacierRequestPrivate::toString(const GlacierRequest::Action &action)
{
    #define ActionToString(action) \
        case GlacierRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Glacier
} // namespace QtAws
