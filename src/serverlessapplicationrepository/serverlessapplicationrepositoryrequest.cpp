// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "serverlessapplicationrepositoryrequest.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryRequest
 * \brief The ServerlessApplicationRepositoryRequest class provides an interface for ServerlessApplicationRepository requests.
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * \enum ServerlessApplicationRepositoryRequest::Action
 *
 * This enum describes the actions that can be performed as ServerlessApplicationRepository
 * requests.
 *
 * \value CreateApplicationAction ServerlessApplicationRepository CreateApplication action.
 * \value CreateApplicationVersionAction ServerlessApplicationRepository CreateApplicationVersion action.
 * \value CreateCloudFormationChangeSetAction ServerlessApplicationRepository CreateCloudFormationChangeSet action.
 * \value CreateCloudFormationTemplateAction ServerlessApplicationRepository CreateCloudFormationTemplate action.
 * \value DeleteApplicationAction ServerlessApplicationRepository DeleteApplication action.
 * \value GetApplicationAction ServerlessApplicationRepository GetApplication action.
 * \value GetApplicationPolicyAction ServerlessApplicationRepository GetApplicationPolicy action.
 * \value GetCloudFormationTemplateAction ServerlessApplicationRepository GetCloudFormationTemplate action.
 * \value ListApplicationDependenciesAction ServerlessApplicationRepository ListApplicationDependencies action.
 * \value ListApplicationVersionsAction ServerlessApplicationRepository ListApplicationVersions action.
 * \value ListApplicationsAction ServerlessApplicationRepository ListApplications action.
 * \value PutApplicationPolicyAction ServerlessApplicationRepository PutApplicationPolicy action.
 * \value UnshareApplicationAction ServerlessApplicationRepository UnshareApplication action.
 * \value UpdateApplicationAction ServerlessApplicationRepository UpdateApplication action.
 */

/*!
 * Constructs a ServerlessApplicationRepositoryRequest object for ServerlessApplicationRepository \a action.
 */
ServerlessApplicationRepositoryRequest::ServerlessApplicationRepositoryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServerlessApplicationRepositoryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ServerlessApplicationRepositoryRequest::ServerlessApplicationRepositoryRequest(const ServerlessApplicationRepositoryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServerlessApplicationRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ServerlessApplicationRepositoryRequest object to be equal to \a other.
 */
ServerlessApplicationRepositoryRequest& ServerlessApplicationRepositoryRequest::operator=(const ServerlessApplicationRepositoryRequest &other)
{
    Q_D(ServerlessApplicationRepositoryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ServerlessApplicationRepositoryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServerlessApplicationRepositoryRequestPrivate.
 */
ServerlessApplicationRepositoryRequest::ServerlessApplicationRepositoryRequest(ServerlessApplicationRepositoryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ServerlessApplicationRepository action to be performed by this request.
 */
ServerlessApplicationRepositoryRequest::Action ServerlessApplicationRepositoryRequest::action() const
{
    Q_D(const ServerlessApplicationRepositoryRequest);
    return d->action;
}

/*!
 * Returns the name of the ServerlessApplicationRepository action to be performed by this request.
 */
QString ServerlessApplicationRepositoryRequest::actionString() const
{
    return ServerlessApplicationRepositoryRequestPrivate::toString(action());
}

/*!
 * Returns the ServerlessApplicationRepository API version implemented by this request.
 */
QString ServerlessApplicationRepositoryRequest::apiVersion() const
{
    Q_D(const ServerlessApplicationRepositoryRequest);
    return d->apiVersion;
}

/*!
 * Sets the ServerlessApplicationRepository action to be performed by this request to \a action.
 */
void ServerlessApplicationRepositoryRequest::setAction(const Action action)
{
    Q_D(ServerlessApplicationRepositoryRequest);
    d->action = action;
}

/*!
 * Sets the ServerlessApplicationRepository API version to include in this request to \a version.
 */
void ServerlessApplicationRepositoryRequest::setApiVersion(const QString &version)
{
    Q_D(ServerlessApplicationRepositoryRequest);
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
bool ServerlessApplicationRepositoryRequest::operator==(const ServerlessApplicationRepositoryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ServerlessApplicationRepository queue name.
 *
 * @par From ServerlessApplicationRepository FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServerlessApplicationRepository queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServerlessApplicationRepositoryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ServerlessApplicationRepositoryRequest::clearParameter(const QString &name)
{
    Q_D(ServerlessApplicationRepositoryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ServerlessApplicationRepositoryRequest::clearParameters()
{
    Q_D(ServerlessApplicationRepositoryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ServerlessApplicationRepositoryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServerlessApplicationRepositoryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ServerlessApplicationRepositoryRequest::parameters() const
{
    Q_D(const ServerlessApplicationRepositoryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ServerlessApplicationRepositoryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServerlessApplicationRepositoryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ServerlessApplicationRepositoryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServerlessApplicationRepositoryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ServerlessApplicationRepository request using the given
 * \a endpoint.
 *
 * This ServerlessApplicationRepository implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ServerlessApplicationRepositoryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ServerlessApplicationRepositoryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryRequestPrivate
 * \brief The ServerlessApplicationRepositoryRequestPrivate class provides private implementation for ServerlessApplicationRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a ServerlessApplicationRepositoryRequestPrivate object for ServerlessApplicationRepository \a action,
 * with public implementation \a q.
 */
ServerlessApplicationRepositoryRequestPrivate::ServerlessApplicationRepositoryRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action, ServerlessApplicationRepositoryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-09-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServerlessApplicationRepositoryRequest class's copy constructor.
 */
ServerlessApplicationRepositoryRequestPrivate::ServerlessApplicationRepositoryRequestPrivate(const ServerlessApplicationRepositoryRequestPrivate &other,
                                     ServerlessApplicationRepositoryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ServerlessApplicationRepositoryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServerlessApplicationRepository service's Action
 * query parameters.
 */
QString ServerlessApplicationRepositoryRequestPrivate::toString(const ServerlessApplicationRepositoryRequest::Action &action)
{
    #define ActionToString(action) \
        case ServerlessApplicationRepositoryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApplication);
        ActionToString(CreateApplicationVersion);
        ActionToString(CreateCloudFormationChangeSet);
        ActionToString(CreateCloudFormationTemplate);
        ActionToString(DeleteApplication);
        ActionToString(GetApplication);
        ActionToString(GetApplicationPolicy);
        ActionToString(GetCloudFormationTemplate);
        ActionToString(ListApplicationDependencies);
        ActionToString(ListApplicationVersions);
        ActionToString(ListApplications);
        ActionToString(PutApplicationPolicy);
        ActionToString(UnshareApplication);
        ActionToString(UpdateApplication);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
