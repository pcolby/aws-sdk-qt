// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudcontrolrequest.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CloudControlRequest
 * \brief The CloudControlRequest class provides an interface for CloudControl requests.
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * \enum CloudControlRequest::Action
 *
 * This enum describes the actions that can be performed as CloudControl
 * requests.
 *
 * \value CancelResourceRequestAction CloudControl CancelResourceRequest action.
 * \value CreateResourceAction CloudControl CreateResource action.
 * \value DeleteResourceAction CloudControl DeleteResource action.
 * \value GetResourceAction CloudControl GetResource action.
 * \value GetResourceRequestStatusAction CloudControl GetResourceRequestStatus action.
 * \value ListResourceRequestsAction CloudControl ListResourceRequests action.
 * \value ListResourcesAction CloudControl ListResources action.
 * \value UpdateResourceAction CloudControl UpdateResource action.
 */

/*!
 * Constructs a CloudControlRequest object for CloudControl \a action.
 */
CloudControlRequest::CloudControlRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudControlRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudControlRequest::CloudControlRequest(const CloudControlRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudControlRequest object to be equal to \a other.
 */
CloudControlRequest& CloudControlRequest::operator=(const CloudControlRequest &other)
{
    Q_D(CloudControlRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudControlRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudControlRequestPrivate.
 */
CloudControlRequest::CloudControlRequest(CloudControlRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudControl action to be performed by this request.
 */
CloudControlRequest::Action CloudControlRequest::action() const
{
    Q_D(const CloudControlRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudControl action to be performed by this request.
 */
QString CloudControlRequest::actionString() const
{
    return CloudControlRequestPrivate::toString(action());
}

/*!
 * Returns the CloudControl API version implemented by this request.
 */
QString CloudControlRequest::apiVersion() const
{
    Q_D(const CloudControlRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudControl action to be performed by this request to \a action.
 */
void CloudControlRequest::setAction(const Action action)
{
    Q_D(CloudControlRequest);
    d->action = action;
}

/*!
 * Sets the CloudControl API version to include in this request to \a version.
 */
void CloudControlRequest::setApiVersion(const QString &version)
{
    Q_D(CloudControlRequest);
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
bool CloudControlRequest::operator==(const CloudControlRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudControl queue name.
 *
 * @par From CloudControl FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudControl queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudControlRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudControlRequest::clearParameter(const QString &name)
{
    Q_D(CloudControlRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudControlRequest::clearParameters()
{
    Q_D(CloudControlRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudControlRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudControlRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudControlRequest::parameters() const
{
    Q_D(const CloudControlRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudControlRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudControlRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudControlRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudControlRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudControl request using the given
 * \a endpoint.
 *
 * This CloudControl implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudControlRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudControlRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudControl::CloudControlRequestPrivate
 * \brief The CloudControlRequestPrivate class provides private implementation for CloudControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
CloudControlRequestPrivate::CloudControlRequestPrivate(const CloudControlRequest::Action action, CloudControlRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-09-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudControlRequest class's copy constructor.
 */
CloudControlRequestPrivate::CloudControlRequestPrivate(const CloudControlRequestPrivate &other,
                                     CloudControlRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudControlRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudControl service's Action
 * query parameters.
 */
QString CloudControlRequestPrivate::toString(const CloudControlRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudControlRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelResourceRequest);
        ActionToString(CreateResource);
        ActionToString(DeleteResource);
        ActionToString(GetResource);
        ActionToString(GetResourceRequestStatus);
        ActionToString(ListResourceRequests);
        ActionToString(ListResources);
        ActionToString(UpdateResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudControl
} // namespace QtAws
