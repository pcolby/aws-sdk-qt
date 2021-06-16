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

#include "lexmodelbuildingservicerequest.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::LexModelBuildingServiceRequest
 * \brief The LexModelBuildingServiceRequest class provides an interface for LexModelBuildingService requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * \enum LexModelBuildingServiceRequest::Action
 *
 * This enum describes the actions that can be performed as LexModelBuildingService
 * requests.
 *
 * \value CreateBotVersionAction LexModelBuildingService CreateBotVersion action.
 * \value CreateIntentVersionAction LexModelBuildingService CreateIntentVersion action.
 * \value CreateSlotTypeVersionAction LexModelBuildingService CreateSlotTypeVersion action.
 * \value DeleteBotAction LexModelBuildingService DeleteBot action.
 * \value DeleteBotAliasAction LexModelBuildingService DeleteBotAlias action.
 * \value DeleteBotChannelAssociationAction LexModelBuildingService DeleteBotChannelAssociation action.
 * \value DeleteBotVersionAction LexModelBuildingService DeleteBotVersion action.
 * \value DeleteIntentAction LexModelBuildingService DeleteIntent action.
 * \value DeleteIntentVersionAction LexModelBuildingService DeleteIntentVersion action.
 * \value DeleteSlotTypeAction LexModelBuildingService DeleteSlotType action.
 * \value DeleteSlotTypeVersionAction LexModelBuildingService DeleteSlotTypeVersion action.
 * \value DeleteUtterancesAction LexModelBuildingService DeleteUtterances action.
 * \value GetBotAction LexModelBuildingService GetBot action.
 * \value GetBotAliasAction LexModelBuildingService GetBotAlias action.
 * \value GetBotAliasesAction LexModelBuildingService GetBotAliases action.
 * \value GetBotChannelAssociationAction LexModelBuildingService GetBotChannelAssociation action.
 * \value GetBotChannelAssociationsAction LexModelBuildingService GetBotChannelAssociations action.
 * \value GetBotVersionsAction LexModelBuildingService GetBotVersions action.
 * \value GetBotsAction LexModelBuildingService GetBots action.
 * \value GetBuiltinIntentAction LexModelBuildingService GetBuiltinIntent action.
 * \value GetBuiltinIntentsAction LexModelBuildingService GetBuiltinIntents action.
 * \value GetBuiltinSlotTypesAction LexModelBuildingService GetBuiltinSlotTypes action.
 * \value GetExportAction LexModelBuildingService GetExport action.
 * \value GetImportAction LexModelBuildingService GetImport action.
 * \value GetIntentAction LexModelBuildingService GetIntent action.
 * \value GetIntentVersionsAction LexModelBuildingService GetIntentVersions action.
 * \value GetIntentsAction LexModelBuildingService GetIntents action.
 * \value GetSlotTypeAction LexModelBuildingService GetSlotType action.
 * \value GetSlotTypeVersionsAction LexModelBuildingService GetSlotTypeVersions action.
 * \value GetSlotTypesAction LexModelBuildingService GetSlotTypes action.
 * \value GetUtterancesViewAction LexModelBuildingService GetUtterancesView action.
 * \value ListTagsForResourceAction LexModelBuildingService ListTagsForResource action.
 * \value PutBotAction LexModelBuildingService PutBot action.
 * \value PutBotAliasAction LexModelBuildingService PutBotAlias action.
 * \value PutIntentAction LexModelBuildingService PutIntent action.
 * \value PutSlotTypeAction LexModelBuildingService PutSlotType action.
 * \value StartImportAction LexModelBuildingService StartImport action.
 * \value TagResourceAction LexModelBuildingService TagResource action.
 * \value UntagResourceAction LexModelBuildingService UntagResource action.
 */

/*!
 * Constructs a LexModelBuildingServiceRequest object for LexModelBuildingService \a action.
 */
LexModelBuildingServiceRequest::LexModelBuildingServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LexModelBuildingServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexModelBuildingServiceRequest::LexModelBuildingServiceRequest(const LexModelBuildingServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LexModelBuildingServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexModelBuildingServiceRequest object to be equal to \a other.
 */
LexModelBuildingServiceRequest& LexModelBuildingServiceRequest::operator=(const LexModelBuildingServiceRequest &other)
{
    Q_D(LexModelBuildingServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexModelBuildingServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexModelBuildingServiceRequestPrivate.
 */
LexModelBuildingServiceRequest::LexModelBuildingServiceRequest(LexModelBuildingServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LexModelBuildingService action to be performed by this request.
 */
LexModelBuildingServiceRequest::Action LexModelBuildingServiceRequest::action() const
{
    Q_D(const LexModelBuildingServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the LexModelBuildingService action to be performed by this request.
 */
QString LexModelBuildingServiceRequest::actionString() const
{
    return LexModelBuildingServiceRequestPrivate::toString(action());
}

/*!
 * Returns the LexModelBuildingService API version implemented by this request.
 */
QString LexModelBuildingServiceRequest::apiVersion() const
{
    Q_D(const LexModelBuildingServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the LexModelBuildingService action to be performed by this request to \a action.
 */
void LexModelBuildingServiceRequest::setAction(const Action action)
{
    Q_D(LexModelBuildingServiceRequest);
    d->action = action;
}

/*!
 * Sets the LexModelBuildingService API version to include in this request to \a version.
 */
void LexModelBuildingServiceRequest::setApiVersion(const QString &version)
{
    Q_D(LexModelBuildingServiceRequest);
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
bool LexModelBuildingServiceRequest::operator==(const LexModelBuildingServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexModelBuildingService queue name.
 *
 * @par From LexModelBuildingService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexModelBuildingService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexModelBuildingServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexModelBuildingServiceRequest::clearParameter(const QString &name)
{
    Q_D(LexModelBuildingServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexModelBuildingServiceRequest::clearParameters()
{
    Q_D(LexModelBuildingServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexModelBuildingServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexModelBuildingServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexModelBuildingServiceRequest::parameters() const
{
    Q_D(const LexModelBuildingServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexModelBuildingServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexModelBuildingServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexModelBuildingServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LexModelBuildingServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexModelBuildingService request using the given
 * \a endpoint.
 *
 * This LexModelBuildingService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexModelBuildingServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexModelBuildingServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexModelBuildingService::LexModelBuildingServiceRequestPrivate
 * \brief The LexModelBuildingServiceRequestPrivate class provides private implementation for LexModelBuildingServiceRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a LexModelBuildingServiceRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
LexModelBuildingServiceRequestPrivate::LexModelBuildingServiceRequestPrivate(const LexModelBuildingServiceRequest::Action action, LexModelBuildingServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexModelBuildingServiceRequest class's copy constructor.
 */
LexModelBuildingServiceRequestPrivate::LexModelBuildingServiceRequestPrivate(const LexModelBuildingServiceRequestPrivate &other,
                                     LexModelBuildingServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexModelBuildingServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LexModelBuildingService service's Action
 * query parameters.
 */
QString LexModelBuildingServiceRequestPrivate::toString(const LexModelBuildingServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case LexModelBuildingServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LexModelBuildingService
} // namespace QtAws
