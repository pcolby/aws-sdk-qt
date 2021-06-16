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

#include "codeartifactrequest.h"
#include "codeartifactrequest_p.h"

namespace QtAws {
namespace CodeArtifact {

/*!
 * \class QtAws::CodeArtifact::CodeArtifactRequest
 * \brief The CodeArtifactRequest class provides an interface for CodeArtifact requests.
 *
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * \enum CodeArtifactRequest::Action
 *
 * This enum describes the actions that can be performed as CodeArtifact
 * requests.
 *
 * \value AssociateExternalConnectionAction CodeArtifact AssociateExternalConnection action.
 * \value CopyPackageVersionsAction CodeArtifact CopyPackageVersions action.
 * \value CreateDomainAction CodeArtifact CreateDomain action.
 * \value CreateRepositoryAction CodeArtifact CreateRepository action.
 * \value DeleteDomainAction CodeArtifact DeleteDomain action.
 * \value DeleteDomainPermissionsPolicyAction CodeArtifact DeleteDomainPermissionsPolicy action.
 * \value DeletePackageVersionsAction CodeArtifact DeletePackageVersions action.
 * \value DeleteRepositoryAction CodeArtifact DeleteRepository action.
 * \value DeleteRepositoryPermissionsPolicyAction CodeArtifact DeleteRepositoryPermissionsPolicy action.
 * \value DescribeDomainAction CodeArtifact DescribeDomain action.
 * \value DescribePackageVersionAction CodeArtifact DescribePackageVersion action.
 * \value DescribeRepositoryAction CodeArtifact DescribeRepository action.
 * \value DisassociateExternalConnectionAction CodeArtifact DisassociateExternalConnection action.
 * \value DisposePackageVersionsAction CodeArtifact DisposePackageVersions action.
 * \value GetAuthorizationTokenAction CodeArtifact GetAuthorizationToken action.
 * \value GetDomainPermissionsPolicyAction CodeArtifact GetDomainPermissionsPolicy action.
 * \value GetPackageVersionAssetAction CodeArtifact GetPackageVersionAsset action.
 * \value GetPackageVersionReadmeAction CodeArtifact GetPackageVersionReadme action.
 * \value GetRepositoryEndpointAction CodeArtifact GetRepositoryEndpoint action.
 * \value GetRepositoryPermissionsPolicyAction CodeArtifact GetRepositoryPermissionsPolicy action.
 * \value ListDomainsAction CodeArtifact ListDomains action.
 * \value ListPackageVersionAssetsAction CodeArtifact ListPackageVersionAssets action.
 * \value ListPackageVersionDependenciesAction CodeArtifact ListPackageVersionDependencies action.
 * \value ListPackageVersionsAction CodeArtifact ListPackageVersions action.
 * \value ListPackagesAction CodeArtifact ListPackages action.
 * \value ListRepositoriesAction CodeArtifact ListRepositories action.
 * \value ListRepositoriesInDomainAction CodeArtifact ListRepositoriesInDomain action.
 * \value ListTagsForResourceAction CodeArtifact ListTagsForResource action.
 * \value PutDomainPermissionsPolicyAction CodeArtifact PutDomainPermissionsPolicy action.
 * \value PutRepositoryPermissionsPolicyAction CodeArtifact PutRepositoryPermissionsPolicy action.
 * \value TagResourceAction CodeArtifact TagResource action.
 * \value UntagResourceAction CodeArtifact UntagResource action.
 * \value UpdatePackageVersionsStatusAction CodeArtifact UpdatePackageVersionsStatus action.
 * \value UpdateRepositoryAction CodeArtifact UpdateRepository action.
 */

/*!
 * Constructs a CodeArtifactRequest object for CodeArtifact \a action.
 */
CodeArtifactRequest::CodeArtifactRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeArtifactRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeArtifactRequest::CodeArtifactRequest(const CodeArtifactRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeArtifactRequest object to be equal to \a other.
 */
CodeArtifactRequest& CodeArtifactRequest::operator=(const CodeArtifactRequest &other)
{
    Q_D(CodeArtifactRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeArtifactRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeArtifactRequestPrivate.
 */
CodeArtifactRequest::CodeArtifactRequest(CodeArtifactRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodeArtifact action to be performed by this request.
 */
CodeArtifactRequest::Action CodeArtifactRequest::action() const
{
    Q_D(const CodeArtifactRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeArtifact action to be performed by this request.
 */
QString CodeArtifactRequest::actionString() const
{
    return CodeArtifactRequestPrivate::toString(action());
}

/*!
 * Returns the CodeArtifact API version implemented by this request.
 */
QString CodeArtifactRequest::apiVersion() const
{
    Q_D(const CodeArtifactRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeArtifact action to be performed by this request to \a action.
 */
void CodeArtifactRequest::setAction(const Action action)
{
    Q_D(CodeArtifactRequest);
    d->action = action;
}

/*!
 * Sets the CodeArtifact API version to include in this request to \a version.
 */
void CodeArtifactRequest::setApiVersion(const QString &version)
{
    Q_D(CodeArtifactRequest);
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
bool CodeArtifactRequest::operator==(const CodeArtifactRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeArtifact queue name.
 *
 * @par From CodeArtifact FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeArtifact queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeArtifactRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeArtifactRequest::clearParameter(const QString &name)
{
    Q_D(CodeArtifactRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeArtifactRequest::clearParameters()
{
    Q_D(CodeArtifactRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeArtifactRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeArtifactRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeArtifactRequest::parameters() const
{
    Q_D(const CodeArtifactRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeArtifactRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeArtifactRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeArtifactRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeArtifactRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeArtifact request using the given
 * \a endpoint.
 *
 * This CodeArtifact implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeArtifactRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeArtifactRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeArtifact::CodeArtifactRequestPrivate
 * \brief The CodeArtifactRequestPrivate class provides private implementation for CodeArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * Constructs a CodeArtifactRequestPrivate object for CodeArtifact \a action,
 * with public implementation \a q.
 */
CodeArtifactRequestPrivate::CodeArtifactRequestPrivate(const CodeArtifactRequest::Action action, CodeArtifactRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeArtifactRequest class's copy constructor.
 */
CodeArtifactRequestPrivate::CodeArtifactRequestPrivate(const CodeArtifactRequestPrivate &other,
                                     CodeArtifactRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeArtifactRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeArtifact service's Action
 * query parameters.
 */
QString CodeArtifactRequestPrivate::toString(const CodeArtifactRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeArtifactRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeArtifact
} // namespace QtAws
