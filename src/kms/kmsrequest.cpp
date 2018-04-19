/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "kmsrequest.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/*!
 * \class QtAws::KMS::KMSRequest
 * \brief The KMSRequest class provides an interface for KMS requests.
 *
 * \inmodule QtAwsKMS
 */

/*!
 * \enum KMSRequest::Action
 *
 * This enum describes the actions that can be performed as KMS
 * requests.
 *
 * \value CancelKeyDeletionAction KMS CancelKeyDeletion action.
 * \value CreateAliasAction KMS CreateAlias action.
 * \value CreateGrantAction KMS CreateGrant action.
 * \value CreateKeyAction KMS CreateKey action.
 * \value DecryptAction KMS Decrypt action.
 * \value DeleteAliasAction KMS DeleteAlias action.
 * \value DeleteImportedKeyMaterialAction KMS DeleteImportedKeyMaterial action.
 * \value DescribeKeyAction KMS DescribeKey action.
 * \value DisableKeyAction KMS DisableKey action.
 * \value DisableKeyRotationAction KMS DisableKeyRotation action.
 * \value EnableKeyAction KMS EnableKey action.
 * \value EnableKeyRotationAction KMS EnableKeyRotation action.
 * \value EncryptAction KMS Encrypt action.
 * \value GenerateDataKeyAction KMS GenerateDataKey action.
 * \value GenerateDataKeyWithoutPlaintextAction KMS GenerateDataKeyWithoutPlaintext action.
 * \value GenerateRandomAction KMS GenerateRandom action.
 * \value GetKeyPolicyAction KMS GetKeyPolicy action.
 * \value GetKeyRotationStatusAction KMS GetKeyRotationStatus action.
 * \value GetParametersForImportAction KMS GetParametersForImport action.
 * \value ImportKeyMaterialAction KMS ImportKeyMaterial action.
 * \value ListAliasesAction KMS ListAliases action.
 * \value ListGrantsAction KMS ListGrants action.
 * \value ListKeyPoliciesAction KMS ListKeyPolicies action.
 * \value ListKeysAction KMS ListKeys action.
 * \value ListResourceTagsAction KMS ListResourceTags action.
 * \value ListRetirableGrantsAction KMS ListRetirableGrants action.
 * \value PutKeyPolicyAction KMS PutKeyPolicy action.
 * \value ReEncryptAction KMS ReEncrypt action.
 * \value RetireGrantAction KMS RetireGrant action.
 * \value RevokeGrantAction KMS RevokeGrant action.
 * \value ScheduleKeyDeletionAction KMS ScheduleKeyDeletion action.
 * \value TagResourceAction KMS TagResource action.
 * \value UntagResourceAction KMS UntagResource action.
 * \value UpdateAliasAction KMS UpdateAlias action.
 * \value UpdateKeyDescriptionAction KMS UpdateKeyDescription action.
 */

/*!
 * Constructs a KMSRequest object for KMS \a action.
 */
KMSRequest::KMSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KMSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KMSRequest::KMSRequest(const KMSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KMSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KMSRequest object to be equal to \a other.
 */
KMSRequest& KMSRequest::operator=(const KMSRequest &other)
{
    Q_D(KMSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KMSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KMSRequestPrivate.
 */
KMSRequest::KMSRequest(KMSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KMS action to be performed by this request.
 */
KMSRequest::Action KMSRequest::action() const
{
    Q_D(const KMSRequest);
    return d->action;
}

/*!
 * Returns the name of the KMS action to be performed by this request.
 */
QString KMSRequest::actionString() const
{
    return KMSRequestPrivate::toString(action());
}

/*!
 * Returns the KMS API version implemented by this request.
 */
QString KMSRequest::apiVersion() const
{
    Q_D(const KMSRequest);
    return d->apiVersion;
}

/*!
 * Sets the KMS action to be performed by this request to \a action.
 */
void KMSRequest::setAction(const Action action)
{
    Q_D(KMSRequest);
    d->action = action;
}

/*!
 * Sets the KMS API version to include in this request to \a version.
 */
void KMSRequest::setApiVersion(const QString &version)
{
    Q_D(KMSRequest);
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
bool KMSRequest::operator==(const KMSRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KMS queue name.
 *
 * @par From KMS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KMS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KMSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KMSRequest::clearParameter(const QString &name)
{
    Q_D(KMSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KMSRequest::clearParameters()
{
    Q_D(KMSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KMSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KMSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KMSRequest::parameters() const
{
    Q_D(const KMSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KMSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KMSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KMSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KMSRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KMS request using the given
 * \a endpoint.
 *
 * This KMS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KMSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const KMSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KMS::KMSRequestPrivate
 * \brief The KMSRequestPrivate class provides private implementation for KMSRequest.
 * \internal
 *
 * \inmodule QtAwsKMS
 */

/*!
 * Constructs a KMSRequestPrivate object for KMS \a action,
 * with public implementation \a q.
 */
KMSRequestPrivate::KMSRequestPrivate(const KMSRequest::Action action, KMSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KMSRequest class's copy constructor.
 */
KMSRequestPrivate::KMSRequestPrivate(const KMSRequestPrivate &other,
                                     KMSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KMSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KMS service's Action
 * query parameters.
 */
QString KMSRequestPrivate::toString(const KMSRequest::Action &action)
{
    #define ActionToString(action) \
        case KMSRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KMS
} // namespace QtAws
