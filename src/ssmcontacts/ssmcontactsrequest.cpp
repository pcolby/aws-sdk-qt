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
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::SsmContactsRequest
 * \brief The SsmContactsRequest class provides an interface for SsmContacts requests.
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * \enum SsmContactsRequest::Action
 *
 * This enum describes the actions that can be performed as SsmContacts
 * requests.
 *
 * \value AcceptPageAction SsmContacts AcceptPage action.
 * \value ActivateContactChannelAction SsmContacts ActivateContactChannel action.
 * \value CreateContactAction SsmContacts CreateContact action.
 * \value CreateContactChannelAction SsmContacts CreateContactChannel action.
 * \value DeactivateContactChannelAction SsmContacts DeactivateContactChannel action.
 * \value DeleteContactAction SsmContacts DeleteContact action.
 * \value DeleteContactChannelAction SsmContacts DeleteContactChannel action.
 * \value DescribeEngagementAction SsmContacts DescribeEngagement action.
 * \value DescribePageAction SsmContacts DescribePage action.
 * \value GetContactAction SsmContacts GetContact action.
 * \value GetContactChannelAction SsmContacts GetContactChannel action.
 * \value GetContactPolicyAction SsmContacts GetContactPolicy action.
 * \value ListContactChannelsAction SsmContacts ListContactChannels action.
 * \value ListContactsAction SsmContacts ListContacts action.
 * \value ListEngagementsAction SsmContacts ListEngagements action.
 * \value ListPageReceiptsAction SsmContacts ListPageReceipts action.
 * \value ListPagesByContactAction SsmContacts ListPagesByContact action.
 * \value ListPagesByEngagementAction SsmContacts ListPagesByEngagement action.
 * \value ListTagsForResourceAction SsmContacts ListTagsForResource action.
 * \value PutContactPolicyAction SsmContacts PutContactPolicy action.
 * \value SendActivationCodeAction SsmContacts SendActivationCode action.
 * \value StartEngagementAction SsmContacts StartEngagement action.
 * \value StopEngagementAction SsmContacts StopEngagement action.
 * \value TagResourceAction SsmContacts TagResource action.
 * \value UntagResourceAction SsmContacts UntagResource action.
 * \value UpdateContactAction SsmContacts UpdateContact action.
 * \value UpdateContactChannelAction SsmContacts UpdateContactChannel action.
 */

/*!
 * Constructs a SsmContactsRequest object for SsmContacts \a action.
 */
SsmContactsRequest::SsmContactsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsmContactsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsmContactsRequest::SsmContactsRequest(const SsmContactsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsmContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsmContactsRequest object to be equal to \a other.
 */
SsmContactsRequest& SsmContactsRequest::operator=(const SsmContactsRequest &other)
{
    Q_D(SsmContactsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsmContactsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmContactsRequestPrivate.
 */
SsmContactsRequest::SsmContactsRequest(SsmContactsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SsmContacts action to be performed by this request.
 */
SsmContactsRequest::Action SsmContactsRequest::action() const
{
    Q_D(const SsmContactsRequest);
    return d->action;
}

/*!
 * Returns the name of the SsmContacts action to be performed by this request.
 */
QString SsmContactsRequest::actionString() const
{
    return SsmContactsRequestPrivate::toString(action());
}

/*!
 * Returns the SsmContacts API version implemented by this request.
 */
QString SsmContactsRequest::apiVersion() const
{
    Q_D(const SsmContactsRequest);
    return d->apiVersion;
}

/*!
 * Sets the SsmContacts action to be performed by this request to \a action.
 */
void SsmContactsRequest::setAction(const Action action)
{
    Q_D(SsmContactsRequest);
    d->action = action;
}

/*!
 * Sets the SsmContacts API version to include in this request to \a version.
 */
void SsmContactsRequest::setApiVersion(const QString &version)
{
    Q_D(SsmContactsRequest);
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
bool SsmContactsRequest::operator==(const SsmContactsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SsmContacts queue name.
 *
 * @par From SsmContacts FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SsmContacts queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsmContactsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsmContactsRequest::clearParameter(const QString &name)
{
    Q_D(SsmContactsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsmContactsRequest::clearParameters()
{
    Q_D(SsmContactsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsmContactsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsmContactsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsmContactsRequest::parameters() const
{
    Q_D(const SsmContactsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsmContactsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsmContactsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsmContactsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsmContactsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SsmContacts request using the given
 * \a endpoint.
 *
 * This SsmContacts implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsmContactsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsmContactsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SsmContacts::SsmContactsRequestPrivate
 * \brief The SsmContactsRequestPrivate class provides private implementation for SsmContactsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a SsmContactsRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
SsmContactsRequestPrivate::SsmContactsRequestPrivate(const SsmContactsRequest::Action action, SsmContactsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-05-03"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsmContactsRequest class's copy constructor.
 */
SsmContactsRequestPrivate::SsmContactsRequestPrivate(const SsmContactsRequestPrivate &other,
                                     SsmContactsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsmContactsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SsmContacts service's Action
 * query parameters.
 */
QString SsmContactsRequestPrivate::toString(const SsmContactsRequest::Action &action)
{
    #define ActionToString(action) \
        case SsmContactsRequest::action##Action: return QStringLiteral(#action)
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

} // namespace SsmContacts
} // namespace QtAws
