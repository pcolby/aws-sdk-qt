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

#include "ssmcontactsrequest.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::SSMContactsRequest
 * \brief The SSMContactsRequest class provides an interface for SSMContacts requests.
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * \enum SSMContactsRequest::Action
 *
 * This enum describes the actions that can be performed as SSMContacts
 * requests.
 *
 * \value AcceptPageAction SSMContacts AcceptPage action.
 * \value ActivateContactChannelAction SSMContacts ActivateContactChannel action.
 * \value CreateContactAction SSMContacts CreateContact action.
 * \value CreateContactChannelAction SSMContacts CreateContactChannel action.
 * \value DeactivateContactChannelAction SSMContacts DeactivateContactChannel action.
 * \value DeleteContactAction SSMContacts DeleteContact action.
 * \value DeleteContactChannelAction SSMContacts DeleteContactChannel action.
 * \value DescribeEngagementAction SSMContacts DescribeEngagement action.
 * \value DescribePageAction SSMContacts DescribePage action.
 * \value GetContactAction SSMContacts GetContact action.
 * \value GetContactChannelAction SSMContacts GetContactChannel action.
 * \value GetContactPolicyAction SSMContacts GetContactPolicy action.
 * \value ListContactChannelsAction SSMContacts ListContactChannels action.
 * \value ListContactsAction SSMContacts ListContacts action.
 * \value ListEngagementsAction SSMContacts ListEngagements action.
 * \value ListPageReceiptsAction SSMContacts ListPageReceipts action.
 * \value ListPagesByContactAction SSMContacts ListPagesByContact action.
 * \value ListPagesByEngagementAction SSMContacts ListPagesByEngagement action.
 * \value ListTagsForResourceAction SSMContacts ListTagsForResource action.
 * \value PutContactPolicyAction SSMContacts PutContactPolicy action.
 * \value SendActivationCodeAction SSMContacts SendActivationCode action.
 * \value StartEngagementAction SSMContacts StartEngagement action.
 * \value StopEngagementAction SSMContacts StopEngagement action.
 * \value TagResourceAction SSMContacts TagResource action.
 * \value UntagResourceAction SSMContacts UntagResource action.
 * \value UpdateContactAction SSMContacts UpdateContact action.
 * \value UpdateContactChannelAction SSMContacts UpdateContactChannel action.
 */

/*!
 * Constructs a SSMContactsRequest object for SSMContacts \a action.
 */
SSMContactsRequest::SSMContactsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SSMContactsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SSMContactsRequest::SSMContactsRequest(const SSMContactsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SSMContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SSMContactsRequest object to be equal to \a other.
 */
SSMContactsRequest& SSMContactsRequest::operator=(const SSMContactsRequest &other)
{
    Q_D(SSMContactsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SSMContactsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMContactsRequestPrivate.
 */
SSMContactsRequest::SSMContactsRequest(SSMContactsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSMContacts action to be performed by this request.
 */
SSMContactsRequest::Action SSMContactsRequest::action() const
{
    Q_D(const SSMContactsRequest);
    return d->action;
}

/*!
 * Returns the name of the SSMContacts action to be performed by this request.
 */
QString SSMContactsRequest::actionString() const
{
    return SSMContactsRequestPrivate::toString(action());
}

/*!
 * Returns the SSMContacts API version implemented by this request.
 */
QString SSMContactsRequest::apiVersion() const
{
    Q_D(const SSMContactsRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSMContacts action to be performed by this request to \a action.
 */
void SSMContactsRequest::setAction(const Action action)
{
    Q_D(SSMContactsRequest);
    d->action = action;
}

/*!
 * Sets the SSMContacts API version to include in this request to \a version.
 */
void SSMContactsRequest::setApiVersion(const QString &version)
{
    Q_D(SSMContactsRequest);
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
bool SSMContactsRequest::operator==(const SSMContactsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSMContacts queue name.
 *
 * @par From SSMContacts FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSMContacts queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SSMContactsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SSMContactsRequest::clearParameter(const QString &name)
{
    Q_D(SSMContactsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SSMContactsRequest::clearParameters()
{
    Q_D(SSMContactsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SSMContactsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SSMContactsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SSMContactsRequest::parameters() const
{
    Q_D(const SSMContactsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SSMContactsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SSMContactsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SSMContactsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SSMContactsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSMContacts request using the given
 * \a endpoint.
 *
 * This SSMContacts implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SSMContactsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SSMContactsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSMContacts::SSMContactsRequestPrivate
 * \brief The SSMContactsRequestPrivate class provides private implementation for SSMContactsRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a SSMContactsRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
SSMContactsRequestPrivate::SSMContactsRequestPrivate(const SSMContactsRequest::Action action, SSMContactsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SSMContactsRequest class's copy constructor.
 */
SSMContactsRequestPrivate::SSMContactsRequestPrivate(const SSMContactsRequestPrivate &other,
                                     SSMContactsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SSMContactsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSMContacts service's Action
 * query parameters.
 */
QString SSMContactsRequestPrivate::toString(const SSMContactsRequest::Action &action)
{
    #define ActionToString(action) \
        case SSMContactsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptPage);
        ActionToString(ActivateContactChannel);
        ActionToString(CreateContact);
        ActionToString(CreateContactChannel);
        ActionToString(DeactivateContactChannel);
        ActionToString(DeleteContact);
        ActionToString(DeleteContactChannel);
        ActionToString(DescribeEngagement);
        ActionToString(DescribePage);
        ActionToString(GetContact);
        ActionToString(GetContactChannel);
        ActionToString(GetContactPolicy);
        ActionToString(ListContactChannels);
        ActionToString(ListContacts);
        ActionToString(ListEngagements);
        ActionToString(ListPageReceipts);
        ActionToString(ListPagesByContact);
        ActionToString(ListPagesByEngagement);
        ActionToString(ListTagsForResource);
        ActionToString(PutContactPolicy);
        ActionToString(SendActivationCode);
        ActionToString(StartEngagement);
        ActionToString(StopEngagement);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateContact);
        ActionToString(UpdateContactChannel);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSMContacts
} // namespace QtAws
