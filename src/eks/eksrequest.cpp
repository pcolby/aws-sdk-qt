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

#include "eksrequest.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::EksRequest
 * \brief The EksRequest class provides an interface for Eks requests.
 *
 * \inmodule QtAwsEks
 */

/*!
 * \enum EksRequest::Action
 *
 * This enum describes the actions that can be performed as Eks
 * requests.
 *
 * \value AssociateEncryptionConfigAction Eks AssociateEncryptionConfig action.
 * \value AssociateIdentityProviderConfigAction Eks AssociateIdentityProviderConfig action.
 * \value CreateAddonAction Eks CreateAddon action.
 * \value CreateClusterAction Eks CreateCluster action.
 * \value CreateFargateProfileAction Eks CreateFargateProfile action.
 * \value CreateNodegroupAction Eks CreateNodegroup action.
 * \value DeleteAddonAction Eks DeleteAddon action.
 * \value DeleteClusterAction Eks DeleteCluster action.
 * \value DeleteFargateProfileAction Eks DeleteFargateProfile action.
 * \value DeleteNodegroupAction Eks DeleteNodegroup action.
 * \value DeregisterClusterAction Eks DeregisterCluster action.
 * \value DescribeAddonAction Eks DescribeAddon action.
 * \value DescribeAddonVersionsAction Eks DescribeAddonVersions action.
 * \value DescribeClusterAction Eks DescribeCluster action.
 * \value DescribeFargateProfileAction Eks DescribeFargateProfile action.
 * \value DescribeIdentityProviderConfigAction Eks DescribeIdentityProviderConfig action.
 * \value DescribeNodegroupAction Eks DescribeNodegroup action.
 * \value DescribeUpdateAction Eks DescribeUpdate action.
 * \value DisassociateIdentityProviderConfigAction Eks DisassociateIdentityProviderConfig action.
 * \value ListAddonsAction Eks ListAddons action.
 * \value ListClustersAction Eks ListClusters action.
 * \value ListFargateProfilesAction Eks ListFargateProfiles action.
 * \value ListIdentityProviderConfigsAction Eks ListIdentityProviderConfigs action.
 * \value ListNodegroupsAction Eks ListNodegroups action.
 * \value ListTagsForResourceAction Eks ListTagsForResource action.
 * \value ListUpdatesAction Eks ListUpdates action.
 * \value RegisterClusterAction Eks RegisterCluster action.
 * \value TagResourceAction Eks TagResource action.
 * \value UntagResourceAction Eks UntagResource action.
 * \value UpdateAddonAction Eks UpdateAddon action.
 * \value UpdateClusterConfigAction Eks UpdateClusterConfig action.
 * \value UpdateClusterVersionAction Eks UpdateClusterVersion action.
 * \value UpdateNodegroupConfigAction Eks UpdateNodegroupConfig action.
 * \value UpdateNodegroupVersionAction Eks UpdateNodegroupVersion action.
 */

/*!
 * Constructs a EksRequest object for Eks \a action.
 */
EksRequest::EksRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EksRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EksRequest::EksRequest(const EksRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EksRequest object to be equal to \a other.
 */
EksRequest& EksRequest::operator=(const EksRequest &other)
{
    Q_D(EksRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EksRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EksRequestPrivate.
 */
EksRequest::EksRequest(EksRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Eks action to be performed by this request.
 */
EksRequest::Action EksRequest::action() const
{
    Q_D(const EksRequest);
    return d->action;
}

/*!
 * Returns the name of the Eks action to be performed by this request.
 */
QString EksRequest::actionString() const
{
    return EksRequestPrivate::toString(action());
}

/*!
 * Returns the Eks API version implemented by this request.
 */
QString EksRequest::apiVersion() const
{
    Q_D(const EksRequest);
    return d->apiVersion;
}

/*!
 * Sets the Eks action to be performed by this request to \a action.
 */
void EksRequest::setAction(const Action action)
{
    Q_D(EksRequest);
    d->action = action;
}

/*!
 * Sets the Eks API version to include in this request to \a version.
 */
void EksRequest::setApiVersion(const QString &version)
{
    Q_D(EksRequest);
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
bool EksRequest::operator==(const EksRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Eks queue name.
 *
 * @par From Eks FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Eks queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EksRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EksRequest::clearParameter(const QString &name)
{
    Q_D(EksRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EksRequest::clearParameters()
{
    Q_D(EksRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EksRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EksRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EksRequest::parameters() const
{
    Q_D(const EksRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EksRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EksRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EksRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EksRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Eks request using the given
 * \a endpoint.
 *
 * This Eks implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EksRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EksRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Eks::EksRequestPrivate
 * \brief The EksRequestPrivate class provides private implementation for EksRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a EksRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
EksRequestPrivate::EksRequestPrivate(const EksRequest::Action action, EksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EksRequest class's copy constructor.
 */
EksRequestPrivate::EksRequestPrivate(const EksRequestPrivate &other,
                                     EksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EksRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Eks service's Action
 * query parameters.
 */
QString EksRequestPrivate::toString(const EksRequest::Action &action)
{
    #define ActionToString(action) \
        case EksRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateEncryptionConfig);
        ActionToString(AssociateIdentityProviderConfig);
        ActionToString(CreateAddon);
        ActionToString(CreateCluster);
        ActionToString(CreateFargateProfile);
        ActionToString(CreateNodegroup);
        ActionToString(DeleteAddon);
        ActionToString(DeleteCluster);
        ActionToString(DeleteFargateProfile);
        ActionToString(DeleteNodegroup);
        ActionToString(DeregisterCluster);
        ActionToString(DescribeAddon);
        ActionToString(DescribeAddonVersions);
        ActionToString(DescribeCluster);
        ActionToString(DescribeFargateProfile);
        ActionToString(DescribeIdentityProviderConfig);
        ActionToString(DescribeNodegroup);
        ActionToString(DescribeUpdate);
        ActionToString(DisassociateIdentityProviderConfig);
        ActionToString(ListAddons);
        ActionToString(ListClusters);
        ActionToString(ListFargateProfiles);
        ActionToString(ListIdentityProviderConfigs);
        ActionToString(ListNodegroups);
        ActionToString(ListTagsForResource);
        ActionToString(ListUpdates);
        ActionToString(RegisterCluster);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAddon);
        ActionToString(UpdateClusterConfig);
        ActionToString(UpdateClusterVersion);
        ActionToString(UpdateNodegroupConfig);
        ActionToString(UpdateNodegroupVersion);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Eks
} // namespace QtAws
