// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointsmsvoicev2request.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2Request
 * \brief The PinpointSmsVoiceV2Request class provides an interface for PinpointSmsVoiceV2 requests.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * \enum PinpointSmsVoiceV2Request::Action
 *
 * This enum describes the actions that can be performed as PinpointSmsVoiceV2
 * requests.
 *
 * \value AssociateOriginationIdentityAction PinpointSmsVoiceV2 AssociateOriginationIdentity action.
 * \value CreateConfigurationSetAction PinpointSmsVoiceV2 CreateConfigurationSet action.
 * \value CreateEventDestinationAction PinpointSmsVoiceV2 CreateEventDestination action.
 * \value CreateOptOutListAction PinpointSmsVoiceV2 CreateOptOutList action.
 * \value CreatePoolAction PinpointSmsVoiceV2 CreatePool action.
 * \value DeleteConfigurationSetAction PinpointSmsVoiceV2 DeleteConfigurationSet action.
 * \value DeleteDefaultMessageTypeAction PinpointSmsVoiceV2 DeleteDefaultMessageType action.
 * \value DeleteDefaultSenderIdAction PinpointSmsVoiceV2 DeleteDefaultSenderId action.
 * \value DeleteEventDestinationAction PinpointSmsVoiceV2 DeleteEventDestination action.
 * \value DeleteKeywordAction PinpointSmsVoiceV2 DeleteKeyword action.
 * \value DeleteOptOutListAction PinpointSmsVoiceV2 DeleteOptOutList action.
 * \value DeleteOptedOutNumberAction PinpointSmsVoiceV2 DeleteOptedOutNumber action.
 * \value DeletePoolAction PinpointSmsVoiceV2 DeletePool action.
 * \value DeleteTextMessageSpendLimitOverrideAction PinpointSmsVoiceV2 DeleteTextMessageSpendLimitOverride action.
 * \value DeleteVoiceMessageSpendLimitOverrideAction PinpointSmsVoiceV2 DeleteVoiceMessageSpendLimitOverride action.
 * \value DescribeAccountAttributesAction PinpointSmsVoiceV2 DescribeAccountAttributes action.
 * \value DescribeAccountLimitsAction PinpointSmsVoiceV2 DescribeAccountLimits action.
 * \value DescribeConfigurationSetsAction PinpointSmsVoiceV2 DescribeConfigurationSets action.
 * \value DescribeKeywordsAction PinpointSmsVoiceV2 DescribeKeywords action.
 * \value DescribeOptOutListsAction PinpointSmsVoiceV2 DescribeOptOutLists action.
 * \value DescribeOptedOutNumbersAction PinpointSmsVoiceV2 DescribeOptedOutNumbers action.
 * \value DescribePhoneNumbersAction PinpointSmsVoiceV2 DescribePhoneNumbers action.
 * \value DescribePoolsAction PinpointSmsVoiceV2 DescribePools action.
 * \value DescribeSenderIdsAction PinpointSmsVoiceV2 DescribeSenderIds action.
 * \value DescribeSpendLimitsAction PinpointSmsVoiceV2 DescribeSpendLimits action.
 * \value DisassociateOriginationIdentityAction PinpointSmsVoiceV2 DisassociateOriginationIdentity action.
 * \value ListPoolOriginationIdentitiesAction PinpointSmsVoiceV2 ListPoolOriginationIdentities action.
 * \value ListTagsForResourceAction PinpointSmsVoiceV2 ListTagsForResource action.
 * \value PutKeywordAction PinpointSmsVoiceV2 PutKeyword action.
 * \value PutOptedOutNumberAction PinpointSmsVoiceV2 PutOptedOutNumber action.
 * \value ReleasePhoneNumberAction PinpointSmsVoiceV2 ReleasePhoneNumber action.
 * \value RequestPhoneNumberAction PinpointSmsVoiceV2 RequestPhoneNumber action.
 * \value SendTextMessageAction PinpointSmsVoiceV2 SendTextMessage action.
 * \value SendVoiceMessageAction PinpointSmsVoiceV2 SendVoiceMessage action.
 * \value SetDefaultMessageTypeAction PinpointSmsVoiceV2 SetDefaultMessageType action.
 * \value SetDefaultSenderIdAction PinpointSmsVoiceV2 SetDefaultSenderId action.
 * \value SetTextMessageSpendLimitOverrideAction PinpointSmsVoiceV2 SetTextMessageSpendLimitOverride action.
 * \value SetVoiceMessageSpendLimitOverrideAction PinpointSmsVoiceV2 SetVoiceMessageSpendLimitOverride action.
 * \value TagResourceAction PinpointSmsVoiceV2 TagResource action.
 * \value UntagResourceAction PinpointSmsVoiceV2 UntagResource action.
 * \value UpdateEventDestinationAction PinpointSmsVoiceV2 UpdateEventDestination action.
 * \value UpdatePhoneNumberAction PinpointSmsVoiceV2 UpdatePhoneNumber action.
 * \value UpdatePoolAction PinpointSmsVoiceV2 UpdatePool action.
 */

/*!
 * Constructs a PinpointSmsVoiceV2Request object for PinpointSmsVoiceV2 \a action.
 */
PinpointSmsVoiceV2Request::PinpointSmsVoiceV2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PinpointSmsVoiceV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PinpointSmsVoiceV2Request::PinpointSmsVoiceV2Request(const PinpointSmsVoiceV2Request &other)
    : QtAws::Core::AwsAbstractRequest(new PinpointSmsVoiceV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PinpointSmsVoiceV2Request object to be equal to \a other.
 */
PinpointSmsVoiceV2Request& PinpointSmsVoiceV2Request::operator=(const PinpointSmsVoiceV2Request &other)
{
    Q_D(PinpointSmsVoiceV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PinpointSmsVoiceV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSmsVoiceV2RequestPrivate.
 */
PinpointSmsVoiceV2Request::PinpointSmsVoiceV2Request(PinpointSmsVoiceV2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PinpointSmsVoiceV2 action to be performed by this request.
 */
PinpointSmsVoiceV2Request::Action PinpointSmsVoiceV2Request::action() const
{
    Q_D(const PinpointSmsVoiceV2Request);
    return d->action;
}

/*!
 * Returns the name of the PinpointSmsVoiceV2 action to be performed by this request.
 */
QString PinpointSmsVoiceV2Request::actionString() const
{
    return PinpointSmsVoiceV2RequestPrivate::toString(action());
}

/*!
 * Returns the PinpointSmsVoiceV2 API version implemented by this request.
 */
QString PinpointSmsVoiceV2Request::apiVersion() const
{
    Q_D(const PinpointSmsVoiceV2Request);
    return d->apiVersion;
}

/*!
 * Sets the PinpointSmsVoiceV2 action to be performed by this request to \a action.
 */
void PinpointSmsVoiceV2Request::setAction(const Action action)
{
    Q_D(PinpointSmsVoiceV2Request);
    d->action = action;
}

/*!
 * Sets the PinpointSmsVoiceV2 API version to include in this request to \a version.
 */
void PinpointSmsVoiceV2Request::setApiVersion(const QString &version)
{
    Q_D(PinpointSmsVoiceV2Request);
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
bool PinpointSmsVoiceV2Request::operator==(const PinpointSmsVoiceV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PinpointSmsVoiceV2 queue name.
 *
 * @par From PinpointSmsVoiceV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PinpointSmsVoiceV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PinpointSmsVoiceV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PinpointSmsVoiceV2Request::clearParameter(const QString &name)
{
    Q_D(PinpointSmsVoiceV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PinpointSmsVoiceV2Request::clearParameters()
{
    Q_D(PinpointSmsVoiceV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PinpointSmsVoiceV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PinpointSmsVoiceV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PinpointSmsVoiceV2Request::parameters() const
{
    Q_D(const PinpointSmsVoiceV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PinpointSmsVoiceV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PinpointSmsVoiceV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PinpointSmsVoiceV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(PinpointSmsVoiceV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PinpointSmsVoiceV2 request using the given
 * \a endpoint.
 *
 * This PinpointSmsVoiceV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PinpointSmsVoiceV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PinpointSmsVoiceV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2RequestPrivate
 * \brief The PinpointSmsVoiceV2RequestPrivate class provides private implementation for PinpointSmsVoiceV2Request.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a PinpointSmsVoiceV2RequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
PinpointSmsVoiceV2RequestPrivate::PinpointSmsVoiceV2RequestPrivate(const PinpointSmsVoiceV2Request::Action action, PinpointSmsVoiceV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2022-03-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PinpointSmsVoiceV2Request class's copy constructor.
 */
PinpointSmsVoiceV2RequestPrivate::PinpointSmsVoiceV2RequestPrivate(const PinpointSmsVoiceV2RequestPrivate &other,
                                     PinpointSmsVoiceV2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PinpointSmsVoiceV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the PinpointSmsVoiceV2 service's Action
 * query parameters.
 */
QString PinpointSmsVoiceV2RequestPrivate::toString(const PinpointSmsVoiceV2Request::Action &action)
{
    #define ActionToString(action) \
        case PinpointSmsVoiceV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateOriginationIdentity);
        ActionToString(CreateConfigurationSet);
        ActionToString(CreateEventDestination);
        ActionToString(CreateOptOutList);
        ActionToString(CreatePool);
        ActionToString(DeleteConfigurationSet);
        ActionToString(DeleteDefaultMessageType);
        ActionToString(DeleteDefaultSenderId);
        ActionToString(DeleteEventDestination);
        ActionToString(DeleteKeyword);
        ActionToString(DeleteOptOutList);
        ActionToString(DeleteOptedOutNumber);
        ActionToString(DeletePool);
        ActionToString(DeleteTextMessageSpendLimitOverride);
        ActionToString(DeleteVoiceMessageSpendLimitOverride);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeAccountLimits);
        ActionToString(DescribeConfigurationSets);
        ActionToString(DescribeKeywords);
        ActionToString(DescribeOptOutLists);
        ActionToString(DescribeOptedOutNumbers);
        ActionToString(DescribePhoneNumbers);
        ActionToString(DescribePools);
        ActionToString(DescribeSenderIds);
        ActionToString(DescribeSpendLimits);
        ActionToString(DisassociateOriginationIdentity);
        ActionToString(ListPoolOriginationIdentities);
        ActionToString(ListTagsForResource);
        ActionToString(PutKeyword);
        ActionToString(PutOptedOutNumber);
        ActionToString(ReleasePhoneNumber);
        ActionToString(RequestPhoneNumber);
        ActionToString(SendTextMessage);
        ActionToString(SendVoiceMessage);
        ActionToString(SetDefaultMessageType);
        ActionToString(SetDefaultSenderId);
        ActionToString(SetTextMessageSpendLimitOverride);
        ActionToString(SetVoiceMessageSpendLimitOverride);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateEventDestination);
        ActionToString(UpdatePhoneNumber);
        ActionToString(UpdatePool);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
