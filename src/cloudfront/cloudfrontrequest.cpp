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

#include "cloudfrontrequest.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontRequest
 * \brief The CloudFrontRequest class provides an interface for CloudFront requests.
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * \enum CloudFrontRequest::Action
 *
 * This enum describes the actions that can be performed as CloudFront
 * requests.
 *
 * \value CreateCloudFrontOriginAccessIdentityAction CloudFront CreateCloudFrontOriginAccessIdentity action.
 * \value CreateDistributionAction CloudFront CreateDistribution action.
 * \value CreateDistributionWithTagsAction CloudFront CreateDistributionWithTags action.
 * \value CreateFieldLevelEncryptionConfigAction CloudFront CreateFieldLevelEncryptionConfig action.
 * \value CreateFieldLevelEncryptionProfileAction CloudFront CreateFieldLevelEncryptionProfile action.
 * \value CreateInvalidationAction CloudFront CreateInvalidation action.
 * \value CreatePublicKeyAction CloudFront CreatePublicKey action.
 * \value CreateStreamingDistributionAction CloudFront CreateStreamingDistribution action.
 * \value CreateStreamingDistributionWithTagsAction CloudFront CreateStreamingDistributionWithTags action.
 * \value DeleteCloudFrontOriginAccessIdentityAction CloudFront DeleteCloudFrontOriginAccessIdentity action.
 * \value DeleteDistributionAction CloudFront DeleteDistribution action.
 * \value DeleteFieldLevelEncryptionConfigAction CloudFront DeleteFieldLevelEncryptionConfig action.
 * \value DeleteFieldLevelEncryptionProfileAction CloudFront DeleteFieldLevelEncryptionProfile action.
 * \value DeletePublicKeyAction CloudFront DeletePublicKey action.
 * \value DeleteServiceLinkedRoleAction CloudFront DeleteServiceLinkedRole action.
 * \value DeleteStreamingDistributionAction CloudFront DeleteStreamingDistribution action.
 * \value GetCloudFrontOriginAccessIdentityAction CloudFront GetCloudFrontOriginAccessIdentity action.
 * \value GetCloudFrontOriginAccessIdentityConfigAction CloudFront GetCloudFrontOriginAccessIdentityConfig action.
 * \value GetDistributionAction CloudFront GetDistribution action.
 * \value GetDistributionConfigAction CloudFront GetDistributionConfig action.
 * \value GetFieldLevelEncryptionAction CloudFront GetFieldLevelEncryption action.
 * \value GetFieldLevelEncryptionConfigAction CloudFront GetFieldLevelEncryptionConfig action.
 * \value GetFieldLevelEncryptionProfileAction CloudFront GetFieldLevelEncryptionProfile action.
 * \value GetFieldLevelEncryptionProfileConfigAction CloudFront GetFieldLevelEncryptionProfileConfig action.
 * \value GetInvalidationAction CloudFront GetInvalidation action.
 * \value GetPublicKeyAction CloudFront GetPublicKey action.
 * \value GetPublicKeyConfigAction CloudFront GetPublicKeyConfig action.
 * \value GetStreamingDistributionAction CloudFront GetStreamingDistribution action.
 * \value GetStreamingDistributionConfigAction CloudFront GetStreamingDistributionConfig action.
 * \value ListCloudFrontOriginAccessIdentitiesAction CloudFront ListCloudFrontOriginAccessIdentities action.
 * \value ListDistributionsAction CloudFront ListDistributions action.
 * \value ListDistributionsByWebACLIdAction CloudFront ListDistributionsByWebACLId action.
 * \value ListFieldLevelEncryptionConfigsAction CloudFront ListFieldLevelEncryptionConfigs action.
 * \value ListFieldLevelEncryptionProfilesAction CloudFront ListFieldLevelEncryptionProfiles action.
 * \value ListInvalidationsAction CloudFront ListInvalidations action.
 * \value ListPublicKeysAction CloudFront ListPublicKeys action.
 * \value ListStreamingDistributionsAction CloudFront ListStreamingDistributions action.
 * \value ListTagsForResourceAction CloudFront ListTagsForResource action.
 * \value TagResourceAction CloudFront TagResource action.
 * \value UntagResourceAction CloudFront UntagResource action.
 * \value UpdateCloudFrontOriginAccessIdentityAction CloudFront UpdateCloudFrontOriginAccessIdentity action.
 * \value UpdateDistributionAction CloudFront UpdateDistribution action.
 * \value UpdateFieldLevelEncryptionConfigAction CloudFront UpdateFieldLevelEncryptionConfig action.
 * \value UpdateFieldLevelEncryptionProfileAction CloudFront UpdateFieldLevelEncryptionProfile action.
 * \value UpdatePublicKeyAction CloudFront UpdatePublicKey action.
 * \value UpdateStreamingDistributionAction CloudFront UpdateStreamingDistribution action.
 */

/*!
 * Constructs a CloudFrontRequest object for CloudFront \a action.
 */
CloudFrontRequest::CloudFrontRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudFrontRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudFrontRequest::CloudFrontRequest(const CloudFrontRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudFrontRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudFrontRequest object to be equal to \a other.
 */
CloudFrontRequest& CloudFrontRequest::operator=(const CloudFrontRequest &other)
{
    Q_D(CloudFrontRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudFrontRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudFrontRequestPrivate.
 */
CloudFrontRequest::CloudFrontRequest(CloudFrontRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudFront action to be performed by this request.
 */
CloudFrontRequest::Action CloudFrontRequest::action() const
{
    Q_D(const CloudFrontRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudFront action to be performed by this request.
 */
QString CloudFrontRequest::actionString() const
{
    return CloudFrontRequestPrivate::toString(action());
}

/*!
 * Returns the CloudFront API version implemented by this request.
 */
QString CloudFrontRequest::apiVersion() const
{
    Q_D(const CloudFrontRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudFront action to be performed by this request to \a action.
 */
void CloudFrontRequest::setAction(const Action action)
{
    Q_D(CloudFrontRequest);
    d->action = action;
}

/*!
 * Sets the CloudFront API version to include in this request to \a version.
 */
void CloudFrontRequest::setApiVersion(const QString &version)
{
    Q_D(CloudFrontRequest);
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
bool CloudFrontRequest::operator==(const CloudFrontRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudFront queue name.
 *
 * @par From CloudFront FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudFront queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudFrontRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudFrontRequest::clearParameter(const QString &name)
{
    Q_D(CloudFrontRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudFrontRequest::clearParameters()
{
    Q_D(CloudFrontRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudFrontRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudFrontRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudFrontRequest::parameters() const
{
    Q_D(const CloudFrontRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudFrontRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudFrontRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudFrontRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudFrontRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudFront request using the given
 * \a endpoint.
 *
 * This CloudFront implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudFrontRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudFrontRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudFront::CloudFrontRequestPrivate
 * \brief The CloudFrontRequestPrivate class provides private implementation for CloudFrontRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CloudFrontRequestPrivate::CloudFrontRequestPrivate(const CloudFrontRequest::Action action, CloudFrontRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudFrontRequest class's copy constructor.
 */
CloudFrontRequestPrivate::CloudFrontRequestPrivate(const CloudFrontRequestPrivate &other,
                                     CloudFrontRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudFrontRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudFront service's Action
 * query parameters.
 */
QString CloudFrontRequestPrivate::toString(const CloudFrontRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudFrontRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudFront
} // namespace QtAws
