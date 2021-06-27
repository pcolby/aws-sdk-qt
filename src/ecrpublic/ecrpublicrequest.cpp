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

#include "ecrpublicrequest.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::ECRPublicRequest
 * \brief The ECRPublicRequest class provides an interface for ECRPublic requests.
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * \enum ECRPublicRequest::Action
 *
 * This enum describes the actions that can be performed as ECRPublic
 * requests.
 *
 * \value BatchCheckLayerAvailabilityAction ECRPublic BatchCheckLayerAvailability action.
 * \value BatchDeleteImageAction ECRPublic BatchDeleteImage action.
 * \value CompleteLayerUploadAction ECRPublic CompleteLayerUpload action.
 * \value CreateRepositoryAction ECRPublic CreateRepository action.
 * \value DeleteRepositoryAction ECRPublic DeleteRepository action.
 * \value DeleteRepositoryPolicyAction ECRPublic DeleteRepositoryPolicy action.
 * \value DescribeImageTagsAction ECRPublic DescribeImageTags action.
 * \value DescribeImagesAction ECRPublic DescribeImages action.
 * \value DescribeRegistriesAction ECRPublic DescribeRegistries action.
 * \value DescribeRepositoriesAction ECRPublic DescribeRepositories action.
 * \value GetAuthorizationTokenAction ECRPublic GetAuthorizationToken action.
 * \value GetRegistryCatalogDataAction ECRPublic GetRegistryCatalogData action.
 * \value GetRepositoryCatalogDataAction ECRPublic GetRepositoryCatalogData action.
 * \value GetRepositoryPolicyAction ECRPublic GetRepositoryPolicy action.
 * \value InitiateLayerUploadAction ECRPublic InitiateLayerUpload action.
 * \value ListTagsForResourceAction ECRPublic ListTagsForResource action.
 * \value PutImageAction ECRPublic PutImage action.
 * \value PutRegistryCatalogDataAction ECRPublic PutRegistryCatalogData action.
 * \value PutRepositoryCatalogDataAction ECRPublic PutRepositoryCatalogData action.
 * \value SetRepositoryPolicyAction ECRPublic SetRepositoryPolicy action.
 * \value TagResourceAction ECRPublic TagResource action.
 * \value UntagResourceAction ECRPublic UntagResource action.
 * \value UploadLayerPartAction ECRPublic UploadLayerPart action.
 */

/*!
 * Constructs a ECRPublicRequest object for ECRPublic \a action.
 */
ECRPublicRequest::ECRPublicRequest(const Action action)
    : d_ptr(new ECRPublicRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ECRPublicRequest::ECRPublicRequest(const ECRPublicRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ECRPublicRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ECRPublicRequest object to be equal to \a other.
 */
ECRPublicRequest& ECRPublicRequest::operator=(const ECRPublicRequest &other)
{
    Q_D(ECRPublicRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ECRPublicRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ECRPublicRequestPrivate.
 */
ECRPublicRequest::ECRPublicRequest(ECRPublicRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ECRPublic action to be performed by this request.
 */
ECRPublicRequest::Action ECRPublicRequest::action() const
{
    Q_D(const ECRPublicRequest);
    return d->action;
}

/*!
 * Returns the name of the ECRPublic action to be performed by this request.
 */
QString ECRPublicRequest::actionString() const
{
    return ECRPublicRequestPrivate::toString(action());
}

/*!
 * Returns the ECRPublic API version implemented by this request.
 */
QString ECRPublicRequest::apiVersion() const
{
    Q_D(const ECRPublicRequest);
    return d->apiVersion;
}

/*!
 * Sets the ECRPublic action to be performed by this request to \a action.
 */
void ECRPublicRequest::setAction(const Action action)
{
    Q_D(ECRPublicRequest);
    d->action = action;
}

/*!
 * Sets the ECRPublic API version to include in this request to \a version.
 */
void ECRPublicRequest::setApiVersion(const QString &version)
{
    Q_D(ECRPublicRequest);
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
bool ECRPublicRequest::operator==(const ECRPublicRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ECRPublic queue name.
 *
 * @par From ECRPublic FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ECRPublic queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ECRPublicRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ECRPublicRequest::clearParameter(const QString &name)
{
    Q_D(ECRPublicRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ECRPublicRequest::clearParameters()
{
    Q_D(ECRPublicRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ECRPublicRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ECRPublicRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ECRPublicRequest::parameters() const
{
    Q_D(const ECRPublicRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ECRPublicRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ECRPublicRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ECRPublicRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ECRPublicRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ECRPublic request using the given
 * \a endpoint.
 *
 * This ECRPublic implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ECRPublicRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ECRPublicRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ECRPublic::ECRPublicRequestPrivate
 * \brief The ECRPublicRequestPrivate class provides private implementation for ECRPublicRequest.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a ECRPublicRequestPrivate object for ECRPublic \a action,
 * with public implementation \a q.
 */
ECRPublicRequestPrivate::ECRPublicRequestPrivate(const ECRPublicRequest::Action action, ECRPublicRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ECRPublicRequest class's copy constructor.
 */
ECRPublicRequestPrivate::ECRPublicRequestPrivate(const ECRPublicRequestPrivate &other,
                                     ECRPublicRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ECRPublicRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ECRPublic service's Action
 * query parameters.
 */
QString ECRPublicRequestPrivate::toString(const ECRPublicRequest::Action &action)
{
    #define ActionToString(action) \
        case ECRPublicRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ECRPublic
} // namespace QtAws
