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
namespace KMS {

/*!
 * \class QtAws::KMS::KmsRequest
 * \brief The KmsRequest class provides an interface for KMS requests.
 *
 * \inmodule QtAwsKMS
 */

/*!
 * \enum KmsRequest::Action
 *
 * This enum describes the actions that can be performed as KMS
 * requests.
 *
 * \value CancelKeyDeletionAction KMS CancelKeyDeletion action.
 * \value ConnectCustomKeyStoreAction KMS ConnectCustomKeyStore action.
 * \value CreateAliasAction KMS CreateAlias action.
 * \value CreateCustomKeyStoreAction KMS CreateCustomKeyStore action.
 * \value CreateGrantAction KMS CreateGrant action.
 * \value CreateKeyAction KMS CreateKey action.
 * \value DecryptAction KMS Decrypt action.
 * \value DeleteAliasAction KMS DeleteAlias action.
 * \value DeleteCustomKeyStoreAction KMS DeleteCustomKeyStore action.
 * \value DeleteImportedKeyMaterialAction KMS DeleteImportedKeyMaterial action.
 * \value DescribeCustomKeyStoresAction KMS DescribeCustomKeyStores action.
 * \value DescribeKeyAction KMS DescribeKey action.
 * \value DisableKeyAction KMS DisableKey action.
 * \value DisableKeyRotationAction KMS DisableKeyRotation action.
 * \value DisconnectCustomKeyStoreAction KMS DisconnectCustomKeyStore action.
 * \value EnableKeyAction KMS EnableKey action.
 * \value EnableKeyRotationAction KMS EnableKeyRotation action.
 * \value EncryptAction KMS Encrypt action.
 * \value GenerateDataKeyAction KMS GenerateDataKey action.
 * \value GenerateDataKeyPairAction KMS GenerateDataKeyPair action.
 * \value GenerateDataKeyPairWithoutPlaintextAction KMS GenerateDataKeyPairWithoutPlaintext action.
 * \value GenerateDataKeyWithoutPlaintextAction KMS GenerateDataKeyWithoutPlaintext action.
 * \value GenerateRandomAction KMS GenerateRandom action.
 * \value GetKeyPolicyAction KMS GetKeyPolicy action.
 * \value GetKeyRotationStatusAction KMS GetKeyRotationStatus action.
 * \value GetParametersForImportAction KMS GetParametersForImport action.
 * \value GetPublicKeyAction KMS GetPublicKey action.
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
 * \value SignAction KMS Sign action.
 * \value TagResourceAction KMS TagResource action.
 * \value UntagResourceAction KMS UntagResource action.
 * \value UpdateAliasAction KMS UpdateAlias action.
 * \value UpdateCustomKeyStoreAction KMS UpdateCustomKeyStore action.
 * \value UpdateKeyDescriptionAction KMS UpdateKeyDescription action.
 * \value VerifyAction KMS Verify action.
 */

/*!
 * Constructs a KmsRequest object for KMS \a action.
 */
KmsRequest::KmsRequest(const Action action)
    : d_ptr(new KmsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KmsRequest::KmsRequest(const KmsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new KmsRequestPrivate(*other.d_func(), this))
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
KmsRequest::KmsRequest(KmsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the KMS action to be performed by this request.
 */
KmsRequest::Action KmsRequest::action() const
{
    Q_D(const KmsRequest);
    return d->action;
}

/*!
 * Returns the name of the KMS action to be performed by this request.
 */
QString KmsRequest::actionString() const
{
    return KmsRequestPrivate::toString(action());
}

/*!
 * Returns the KMS API version implemented by this request.
 */
QString KmsRequest::apiVersion() const
{
    Q_D(const KmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the KMS action to be performed by this request to \a action.
 */
void KmsRequest::setAction(const Action action)
{
    Q_D(KmsRequest);
    d->action = action;
}

/*!
 * Sets the KMS API version to include in this request to \a version.
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
 * Returns a network request for the KMS request using the given
 * \a endpoint.
 *
 * This KMS implementation builds request URLs by combining the
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
 * \class QtAws::KMS::KmsRequestPrivate
 * \brief The KmsRequestPrivate class provides private implementation for KmsRequest.
 * \internal
 *
 * \inmodule QtAwsKMS
 */

/*!
 * Constructs a KmsRequestPrivate object for KMS \a action,
 * with public implementation \a q.
 */
KmsRequestPrivate::KmsRequestPrivate(const KmsRequest::Action action, KmsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
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
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KmsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KMS service's Action
 * query parameters.
 */
QString KmsRequestPrivate::toString(const KmsRequest::Action &action)
{
    #define ActionToString(action) \
        case KmsRequest::action##Action: return QStringLiteral(#action)
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
