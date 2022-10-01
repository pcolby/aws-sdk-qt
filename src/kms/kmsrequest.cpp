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

#include "kmsrequest.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace Kms {

/*!
 * \class QtAws::Kms::KmsRequest
 * \brief The KmsRequest class provides an interface for Kms requests.
 *
 * \inmodule QtAwsKms
 */

/*!
 * \enum KmsRequest::Action
 *
 * This enum describes the actions that can be performed as Kms
 * requests.
 *
 * \value CancelKeyDeletionAction Kms CancelKeyDeletion action.
 * \value ConnectCustomKeyStoreAction Kms ConnectCustomKeyStore action.
 * \value CreateAliasAction Kms CreateAlias action.
 * \value CreateCustomKeyStoreAction Kms CreateCustomKeyStore action.
 * \value CreateGrantAction Kms CreateGrant action.
 * \value CreateKeyAction Kms CreateKey action.
 * \value DecryptAction Kms Decrypt action.
 * \value DeleteAliasAction Kms DeleteAlias action.
 * \value DeleteCustomKeyStoreAction Kms DeleteCustomKeyStore action.
 * \value DeleteImportedKeyMaterialAction Kms DeleteImportedKeyMaterial action.
 * \value DescribeCustomKeyStoresAction Kms DescribeCustomKeyStores action.
 * \value DescribeKeyAction Kms DescribeKey action.
 * \value DisableKeyAction Kms DisableKey action.
 * \value DisableKeyRotationAction Kms DisableKeyRotation action.
 * \value DisconnectCustomKeyStoreAction Kms DisconnectCustomKeyStore action.
 * \value EnableKeyAction Kms EnableKey action.
 * \value EnableKeyRotationAction Kms EnableKeyRotation action.
 * \value EncryptAction Kms Encrypt action.
 * \value GenerateDataKeyAction Kms GenerateDataKey action.
 * \value GenerateDataKeyPairAction Kms GenerateDataKeyPair action.
 * \value GenerateDataKeyPairWithoutPlaintextAction Kms GenerateDataKeyPairWithoutPlaintext action.
 * \value GenerateDataKeyWithoutPlaintextAction Kms GenerateDataKeyWithoutPlaintext action.
 * \value GenerateMacAction Kms GenerateMac action.
 * \value GenerateRandomAction Kms GenerateRandom action.
 * \value GetKeyPolicyAction Kms GetKeyPolicy action.
 * \value GetKeyRotationStatusAction Kms GetKeyRotationStatus action.
 * \value GetParametersForImportAction Kms GetParametersForImport action.
 * \value GetPublicKeyAction Kms GetPublicKey action.
 * \value ImportKeyMaterialAction Kms ImportKeyMaterial action.
 * \value ListAliasesAction Kms ListAliases action.
 * \value ListGrantsAction Kms ListGrants action.
 * \value ListKeyPoliciesAction Kms ListKeyPolicies action.
 * \value ListKeysAction Kms ListKeys action.
 * \value ListResourceTagsAction Kms ListResourceTags action.
 * \value ListRetirableGrantsAction Kms ListRetirableGrants action.
 * \value PutKeyPolicyAction Kms PutKeyPolicy action.
 * \value ReEncryptAction Kms ReEncrypt action.
 * \value ReplicateKeyAction Kms ReplicateKey action.
 * \value RetireGrantAction Kms RetireGrant action.
 * \value RevokeGrantAction Kms RevokeGrant action.
 * \value ScheduleKeyDeletionAction Kms ScheduleKeyDeletion action.
 * \value SignAction Kms Sign action.
 * \value TagResourceAction Kms TagResource action.
 * \value UntagResourceAction Kms UntagResource action.
 * \value UpdateAliasAction Kms UpdateAlias action.
 * \value UpdateCustomKeyStoreAction Kms UpdateCustomKeyStore action.
 * \value UpdateKeyDescriptionAction Kms UpdateKeyDescription action.
 * \value UpdatePrimaryRegionAction Kms UpdatePrimaryRegion action.
 * \value VerifyAction Kms Verify action.
 * \value VerifyMacAction Kms VerifyMac action.
 */

/*!
 * Constructs a KmsRequest object for Kms \a action.
 */
KmsRequest::KmsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KmsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KmsRequest::KmsRequest(const KmsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KmsRequest object to be equal to \a other.
 */
KmsRequest& KmsRequest::operator=(const KmsRequest &other)
{
    Q_D(KmsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KmsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KmsRequestPrivate.
 */
KmsRequest::KmsRequest(KmsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Kms action to be performed by this request.
 */
KmsRequest::Action KmsRequest::action() const
{
    Q_D(const KmsRequest);
    return d->action;
}

/*!
 * Returns the name of the Kms action to be performed by this request.
 */
QString KmsRequest::actionString() const
{
    return KmsRequestPrivate::toString(action());
}

/*!
 * Returns the Kms API version implemented by this request.
 */
QString KmsRequest::apiVersion() const
{
    Q_D(const KmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Kms action to be performed by this request to \a action.
 */
void KmsRequest::setAction(const Action action)
{
    Q_D(KmsRequest);
    d->action = action;
}

/*!
 * Sets the Kms API version to include in this request to \a version.
 */
void KmsRequest::setApiVersion(const QString &version)
{
    Q_D(KmsRequest);
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
bool KmsRequest::operator==(const KmsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Kms queue name.
 *
 * @par From Kms FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Kms queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KmsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KmsRequest::clearParameter(const QString &name)
{
    Q_D(KmsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KmsRequest::clearParameters()
{
    Q_D(KmsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KmsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KmsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KmsRequest::parameters() const
{
    Q_D(const KmsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KmsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KmsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KmsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KmsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Kms request using the given
 * \a endpoint.
 *
 * This Kms implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KmsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KmsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Kms::KmsRequestPrivate
 * \brief The KmsRequestPrivate class provides private implementation for KmsRequest.
 * \internal
 *
 * \inmodule QtAwsKms
 */

/*!
 * Constructs a KmsRequestPrivate object for Kms \a action,
 * with public implementation \a q.
 */
KmsRequestPrivate::KmsRequestPrivate(const KmsRequest::Action action, KmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KmsRequest class's copy constructor.
 */
KmsRequestPrivate::KmsRequestPrivate(const KmsRequestPrivate &other,
                                     KmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KmsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Kms service's Action
 * query parameters.
 */
QString KmsRequestPrivate::toString(const KmsRequest::Action &action)
{
    #define ActionToString(action) \
        case KmsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelKeyDeletion);
        ActionToString(ConnectCustomKeyStore);
        ActionToString(CreateAlias);
        ActionToString(CreateCustomKeyStore);
        ActionToString(CreateGrant);
        ActionToString(CreateKey);
        ActionToString(Decrypt);
        ActionToString(DeleteAlias);
        ActionToString(DeleteCustomKeyStore);
        ActionToString(DeleteImportedKeyMaterial);
        ActionToString(DescribeCustomKeyStores);
        ActionToString(DescribeKey);
        ActionToString(DisableKey);
        ActionToString(DisableKeyRotation);
        ActionToString(DisconnectCustomKeyStore);
        ActionToString(EnableKey);
        ActionToString(EnableKeyRotation);
        ActionToString(Encrypt);
        ActionToString(GenerateDataKey);
        ActionToString(GenerateDataKeyPair);
        ActionToString(GenerateDataKeyPairWithoutPlaintext);
        ActionToString(GenerateDataKeyWithoutPlaintext);
        ActionToString(GenerateMac);
        ActionToString(GenerateRandom);
        ActionToString(GetKeyPolicy);
        ActionToString(GetKeyRotationStatus);
        ActionToString(GetParametersForImport);
        ActionToString(GetPublicKey);
        ActionToString(ImportKeyMaterial);
        ActionToString(ListAliases);
        ActionToString(ListGrants);
        ActionToString(ListKeyPolicies);
        ActionToString(ListKeys);
        ActionToString(ListResourceTags);
        ActionToString(ListRetirableGrants);
        ActionToString(PutKeyPolicy);
        ActionToString(ReEncrypt);
        ActionToString(ReplicateKey);
        ActionToString(RetireGrant);
        ActionToString(RevokeGrant);
        ActionToString(ScheduleKeyDeletion);
        ActionToString(Sign);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAlias);
        ActionToString(UpdateCustomKeyStore);
        ActionToString(UpdateKeyDescription);
        ActionToString(UpdatePrimaryRegion);
        ActionToString(Verify);
        ActionToString(VerifyMac);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Kms
} // namespace QtAws
