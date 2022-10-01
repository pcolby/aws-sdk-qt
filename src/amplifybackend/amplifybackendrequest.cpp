// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "amplifybackendrequest.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::AmplifyBackendRequest
 * \brief The AmplifyBackendRequest class provides an interface for AmplifyBackend requests.
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * \enum AmplifyBackendRequest::Action
 *
 * This enum describes the actions that can be performed as AmplifyBackend
 * requests.
 *
 * \value CloneBackendAction AmplifyBackend CloneBackend action.
 * \value CreateBackendAction AmplifyBackend CreateBackend action.
 * \value CreateBackendAPIAction AmplifyBackend CreateBackendAPI action.
 * \value CreateBackendAuthAction AmplifyBackend CreateBackendAuth action.
 * \value CreateBackendConfigAction AmplifyBackend CreateBackendConfig action.
 * \value CreateBackendStorageAction AmplifyBackend CreateBackendStorage action.
 * \value CreateTokenAction AmplifyBackend CreateToken action.
 * \value DeleteBackendAction AmplifyBackend DeleteBackend action.
 * \value DeleteBackendAPIAction AmplifyBackend DeleteBackendAPI action.
 * \value DeleteBackendAuthAction AmplifyBackend DeleteBackendAuth action.
 * \value DeleteBackendStorageAction AmplifyBackend DeleteBackendStorage action.
 * \value DeleteTokenAction AmplifyBackend DeleteToken action.
 * \value GenerateBackendAPIModelsAction AmplifyBackend GenerateBackendAPIModels action.
 * \value GetBackendAction AmplifyBackend GetBackend action.
 * \value GetBackendAPIAction AmplifyBackend GetBackendAPI action.
 * \value GetBackendAPIModelsAction AmplifyBackend GetBackendAPIModels action.
 * \value GetBackendAuthAction AmplifyBackend GetBackendAuth action.
 * \value GetBackendJobAction AmplifyBackend GetBackendJob action.
 * \value GetBackendStorageAction AmplifyBackend GetBackendStorage action.
 * \value GetTokenAction AmplifyBackend GetToken action.
 * \value ImportBackendAuthAction AmplifyBackend ImportBackendAuth action.
 * \value ImportBackendStorageAction AmplifyBackend ImportBackendStorage action.
 * \value ListBackendJobsAction AmplifyBackend ListBackendJobs action.
 * \value ListS3BucketsAction AmplifyBackend ListS3Buckets action.
 * \value RemoveAllBackendsAction AmplifyBackend RemoveAllBackends action.
 * \value RemoveBackendConfigAction AmplifyBackend RemoveBackendConfig action.
 * \value UpdateBackendAPIAction AmplifyBackend UpdateBackendAPI action.
 * \value UpdateBackendAuthAction AmplifyBackend UpdateBackendAuth action.
 * \value UpdateBackendConfigAction AmplifyBackend UpdateBackendConfig action.
 * \value UpdateBackendJobAction AmplifyBackend UpdateBackendJob action.
 * \value UpdateBackendStorageAction AmplifyBackend UpdateBackendStorage action.
 */

/*!
 * Constructs a AmplifyBackendRequest object for AmplifyBackend \a action.
 */
AmplifyBackendRequest::AmplifyBackendRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AmplifyBackendRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AmplifyBackendRequest::AmplifyBackendRequest(const AmplifyBackendRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AmplifyBackendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AmplifyBackendRequest object to be equal to \a other.
 */
AmplifyBackendRequest& AmplifyBackendRequest::operator=(const AmplifyBackendRequest &other)
{
    Q_D(AmplifyBackendRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AmplifyBackendRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyBackendRequestPrivate.
 */
AmplifyBackendRequest::AmplifyBackendRequest(AmplifyBackendRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AmplifyBackend action to be performed by this request.
 */
AmplifyBackendRequest::Action AmplifyBackendRequest::action() const
{
    Q_D(const AmplifyBackendRequest);
    return d->action;
}

/*!
 * Returns the name of the AmplifyBackend action to be performed by this request.
 */
QString AmplifyBackendRequest::actionString() const
{
    return AmplifyBackendRequestPrivate::toString(action());
}

/*!
 * Returns the AmplifyBackend API version implemented by this request.
 */
QString AmplifyBackendRequest::apiVersion() const
{
    Q_D(const AmplifyBackendRequest);
    return d->apiVersion;
}

/*!
 * Sets the AmplifyBackend action to be performed by this request to \a action.
 */
void AmplifyBackendRequest::setAction(const Action action)
{
    Q_D(AmplifyBackendRequest);
    d->action = action;
}

/*!
 * Sets the AmplifyBackend API version to include in this request to \a version.
 */
void AmplifyBackendRequest::setApiVersion(const QString &version)
{
    Q_D(AmplifyBackendRequest);
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
bool AmplifyBackendRequest::operator==(const AmplifyBackendRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AmplifyBackend queue name.
 *
 * @par From AmplifyBackend FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AmplifyBackend queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AmplifyBackendRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AmplifyBackendRequest::clearParameter(const QString &name)
{
    Q_D(AmplifyBackendRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AmplifyBackendRequest::clearParameters()
{
    Q_D(AmplifyBackendRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AmplifyBackendRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AmplifyBackendRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AmplifyBackendRequest::parameters() const
{
    Q_D(const AmplifyBackendRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AmplifyBackendRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AmplifyBackendRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AmplifyBackendRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AmplifyBackendRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AmplifyBackend request using the given
 * \a endpoint.
 *
 * This AmplifyBackend implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AmplifyBackendRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AmplifyBackendRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AmplifyBackend::AmplifyBackendRequestPrivate
 * \brief The AmplifyBackendRequestPrivate class provides private implementation for AmplifyBackendRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a AmplifyBackendRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
AmplifyBackendRequestPrivate::AmplifyBackendRequestPrivate(const AmplifyBackendRequest::Action action, AmplifyBackendRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-11"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AmplifyBackendRequest class's copy constructor.
 */
AmplifyBackendRequestPrivate::AmplifyBackendRequestPrivate(const AmplifyBackendRequestPrivate &other,
                                     AmplifyBackendRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AmplifyBackendRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AmplifyBackend service's Action
 * query parameters.
 */
QString AmplifyBackendRequestPrivate::toString(const AmplifyBackendRequest::Action &action)
{
    #define ActionToString(action) \
        case AmplifyBackendRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CloneBackend);
        ActionToString(CreateBackend);
        ActionToString(CreateBackendAPI);
        ActionToString(CreateBackendAuth);
        ActionToString(CreateBackendConfig);
        ActionToString(CreateBackendStorage);
        ActionToString(CreateToken);
        ActionToString(DeleteBackend);
        ActionToString(DeleteBackendAPI);
        ActionToString(DeleteBackendAuth);
        ActionToString(DeleteBackendStorage);
        ActionToString(DeleteToken);
        ActionToString(GenerateBackendAPIModels);
        ActionToString(GetBackend);
        ActionToString(GetBackendAPI);
        ActionToString(GetBackendAPIModels);
        ActionToString(GetBackendAuth);
        ActionToString(GetBackendJob);
        ActionToString(GetBackendStorage);
        ActionToString(GetToken);
        ActionToString(ImportBackendAuth);
        ActionToString(ImportBackendStorage);
        ActionToString(ListBackendJobs);
        ActionToString(ListS3Buckets);
        ActionToString(RemoveAllBackends);
        ActionToString(RemoveBackendConfig);
        ActionToString(UpdateBackendAPI);
        ActionToString(UpdateBackendAuth);
        ActionToString(UpdateBackendConfig);
        ActionToString(UpdateBackendJob);
        ActionToString(UpdateBackendStorage);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AmplifyBackend
} // namespace QtAws
