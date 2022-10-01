// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudhsmrequest.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CloudHsmRequest
 * \brief The CloudHsmRequest class provides an interface for CloudHsm requests.
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * \enum CloudHsmRequest::Action
 *
 * This enum describes the actions that can be performed as CloudHsm
 * requests.
 *
 * \value AddTagsToResourceAction CloudHsm AddTagsToResource action.
 * \value CreateHapgAction CloudHsm CreateHapg action.
 * \value CreateHsmAction CloudHsm CreateHsm action.
 * \value CreateLunaClientAction CloudHsm CreateLunaClient action.
 * \value DeleteHapgAction CloudHsm DeleteHapg action.
 * \value DeleteHsmAction CloudHsm DeleteHsm action.
 * \value DeleteLunaClientAction CloudHsm DeleteLunaClient action.
 * \value DescribeHapgAction CloudHsm DescribeHapg action.
 * \value DescribeHsmAction CloudHsm DescribeHsm action.
 * \value DescribeLunaClientAction CloudHsm DescribeLunaClient action.
 * \value GetConfigAction CloudHsm GetConfig action.
 * \value ListAvailableZonesAction CloudHsm ListAvailableZones action.
 * \value ListHapgsAction CloudHsm ListHapgs action.
 * \value ListHsmsAction CloudHsm ListHsms action.
 * \value ListLunaClientsAction CloudHsm ListLunaClients action.
 * \value ListTagsForResourceAction CloudHsm ListTagsForResource action.
 * \value ModifyHapgAction CloudHsm ModifyHapg action.
 * \value ModifyHsmAction CloudHsm ModifyHsm action.
 * \value ModifyLunaClientAction CloudHsm ModifyLunaClient action.
 * \value RemoveTagsFromResourceAction CloudHsm RemoveTagsFromResource action.
 */

/*!
 * Constructs a CloudHsmRequest object for CloudHsm \a action.
 */
CloudHsmRequest::CloudHsmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudHsmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudHsmRequest::CloudHsmRequest(const CloudHsmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudHsmRequest object to be equal to \a other.
 */
CloudHsmRequest& CloudHsmRequest::operator=(const CloudHsmRequest &other)
{
    Q_D(CloudHsmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudHsmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHsmRequestPrivate.
 */
CloudHsmRequest::CloudHsmRequest(CloudHsmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudHsm action to be performed by this request.
 */
CloudHsmRequest::Action CloudHsmRequest::action() const
{
    Q_D(const CloudHsmRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudHsm action to be performed by this request.
 */
QString CloudHsmRequest::actionString() const
{
    return CloudHsmRequestPrivate::toString(action());
}

/*!
 * Returns the CloudHsm API version implemented by this request.
 */
QString CloudHsmRequest::apiVersion() const
{
    Q_D(const CloudHsmRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudHsm action to be performed by this request to \a action.
 */
void CloudHsmRequest::setAction(const Action action)
{
    Q_D(CloudHsmRequest);
    d->action = action;
}

/*!
 * Sets the CloudHsm API version to include in this request to \a version.
 */
void CloudHsmRequest::setApiVersion(const QString &version)
{
    Q_D(CloudHsmRequest);
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
bool CloudHsmRequest::operator==(const CloudHsmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudHsm queue name.
 *
 * @par From CloudHsm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHsm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudHsmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudHsmRequest::clearParameter(const QString &name)
{
    Q_D(CloudHsmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudHsmRequest::clearParameters()
{
    Q_D(CloudHsmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudHsmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHsmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudHsmRequest::parameters() const
{
    Q_D(const CloudHsmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudHsmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHsmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudHsmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHsmRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudHsm request using the given
 * \a endpoint.
 *
 * This CloudHsm implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudHsmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudHsmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudHsm::CloudHsmRequestPrivate
 * \brief The CloudHsmRequestPrivate class provides private implementation for CloudHsmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
CloudHsmRequestPrivate::CloudHsmRequestPrivate(const CloudHsmRequest::Action action, CloudHsmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-05-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHsmRequest class's copy constructor.
 */
CloudHsmRequestPrivate::CloudHsmRequestPrivate(const CloudHsmRequestPrivate &other,
                                     CloudHsmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudHsmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHsm service's Action
 * query parameters.
 */
QString CloudHsmRequestPrivate::toString(const CloudHsmRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudHsmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddTagsToResource);
        ActionToString(CreateHapg);
        ActionToString(CreateHsm);
        ActionToString(CreateLunaClient);
        ActionToString(DeleteHapg);
        ActionToString(DeleteHsm);
        ActionToString(DeleteLunaClient);
        ActionToString(DescribeHapg);
        ActionToString(DescribeHsm);
        ActionToString(DescribeLunaClient);
        ActionToString(GetConfig);
        ActionToString(ListAvailableZones);
        ActionToString(ListHapgs);
        ActionToString(ListHsms);
        ActionToString(ListLunaClients);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyHapg);
        ActionToString(ModifyHsm);
        ActionToString(ModifyLunaClient);
        ActionToString(RemoveTagsFromResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHsm
} // namespace QtAws
