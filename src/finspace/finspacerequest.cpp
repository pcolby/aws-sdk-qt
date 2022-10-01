// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finspacerequest.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::FinspaceRequest
 * \brief The FinspaceRequest class provides an interface for Finspace requests.
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * \enum FinspaceRequest::Action
 *
 * This enum describes the actions that can be performed as Finspace
 * requests.
 *
 * \value CreateEnvironmentAction Finspace CreateEnvironment action.
 * \value DeleteEnvironmentAction Finspace DeleteEnvironment action.
 * \value GetEnvironmentAction Finspace GetEnvironment action.
 * \value ListEnvironmentsAction Finspace ListEnvironments action.
 * \value ListTagsForResourceAction Finspace ListTagsForResource action.
 * \value TagResourceAction Finspace TagResource action.
 * \value UntagResourceAction Finspace UntagResource action.
 * \value UpdateEnvironmentAction Finspace UpdateEnvironment action.
 */

/*!
 * Constructs a FinspaceRequest object for Finspace \a action.
 */
FinspaceRequest::FinspaceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FinspaceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FinspaceRequest::FinspaceRequest(const FinspaceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FinspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FinspaceRequest object to be equal to \a other.
 */
FinspaceRequest& FinspaceRequest::operator=(const FinspaceRequest &other)
{
    Q_D(FinspaceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FinspaceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceRequestPrivate.
 */
FinspaceRequest::FinspaceRequest(FinspaceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Finspace action to be performed by this request.
 */
FinspaceRequest::Action FinspaceRequest::action() const
{
    Q_D(const FinspaceRequest);
    return d->action;
}

/*!
 * Returns the name of the Finspace action to be performed by this request.
 */
QString FinspaceRequest::actionString() const
{
    return FinspaceRequestPrivate::toString(action());
}

/*!
 * Returns the Finspace API version implemented by this request.
 */
QString FinspaceRequest::apiVersion() const
{
    Q_D(const FinspaceRequest);
    return d->apiVersion;
}

/*!
 * Sets the Finspace action to be performed by this request to \a action.
 */
void FinspaceRequest::setAction(const Action action)
{
    Q_D(FinspaceRequest);
    d->action = action;
}

/*!
 * Sets the Finspace API version to include in this request to \a version.
 */
void FinspaceRequest::setApiVersion(const QString &version)
{
    Q_D(FinspaceRequest);
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
bool FinspaceRequest::operator==(const FinspaceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Finspace queue name.
 *
 * @par From Finspace FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Finspace queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FinspaceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FinspaceRequest::clearParameter(const QString &name)
{
    Q_D(FinspaceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FinspaceRequest::clearParameters()
{
    Q_D(FinspaceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FinspaceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FinspaceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FinspaceRequest::parameters() const
{
    Q_D(const FinspaceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FinspaceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FinspaceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FinspaceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FinspaceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Finspace request using the given
 * \a endpoint.
 *
 * This Finspace implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FinspaceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FinspaceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Finspace::FinspaceRequestPrivate
 * \brief The FinspaceRequestPrivate class provides private implementation for FinspaceRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a FinspaceRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
FinspaceRequestPrivate::FinspaceRequestPrivate(const FinspaceRequest::Action action, FinspaceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-03-12"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FinspaceRequest class's copy constructor.
 */
FinspaceRequestPrivate::FinspaceRequestPrivate(const FinspaceRequestPrivate &other,
                                     FinspaceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FinspaceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Finspace service's Action
 * query parameters.
 */
QString FinspaceRequestPrivate::toString(const FinspaceRequest::Action &action)
{
    #define ActionToString(action) \
        case FinspaceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateEnvironment);
        ActionToString(DeleteEnvironment);
        ActionToString(GetEnvironment);
        ActionToString(ListEnvironments);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateEnvironment);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Finspace
} // namespace QtAws
