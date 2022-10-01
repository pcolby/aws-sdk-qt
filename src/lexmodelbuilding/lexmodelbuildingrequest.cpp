// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexmodelbuildingrequest.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::LexModelBuildingRequest
 * \brief The LexModelBuildingRequest class provides an interface for LexModelBuilding requests.
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * \enum LexModelBuildingRequest::Action
 *
 * This enum describes the actions that can be performed as LexModelBuilding
 * requests.
 *
 * \value CreateBotVersionAction LexModelBuilding CreateBotVersion action.
 * \value CreateIntentVersionAction LexModelBuilding CreateIntentVersion action.
 * \value CreateSlotTypeVersionAction LexModelBuilding CreateSlotTypeVersion action.
 * \value DeleteBotAction LexModelBuilding DeleteBot action.
 * \value DeleteBotAliasAction LexModelBuilding DeleteBotAlias action.
 * \value DeleteBotChannelAssociationAction LexModelBuilding DeleteBotChannelAssociation action.
 * \value DeleteBotVersionAction LexModelBuilding DeleteBotVersion action.
 * \value DeleteIntentAction LexModelBuilding DeleteIntent action.
 * \value DeleteIntentVersionAction LexModelBuilding DeleteIntentVersion action.
 * \value DeleteSlotTypeAction LexModelBuilding DeleteSlotType action.
 * \value DeleteSlotTypeVersionAction LexModelBuilding DeleteSlotTypeVersion action.
 * \value DeleteUtterancesAction LexModelBuilding DeleteUtterances action.
 * \value GetBotAction LexModelBuilding GetBot action.
 * \value GetBotAliasAction LexModelBuilding GetBotAlias action.
 * \value GetBotAliasesAction LexModelBuilding GetBotAliases action.
 * \value GetBotChannelAssociationAction LexModelBuilding GetBotChannelAssociation action.
 * \value GetBotChannelAssociationsAction LexModelBuilding GetBotChannelAssociations action.
 * \value GetBotVersionsAction LexModelBuilding GetBotVersions action.
 * \value GetBotsAction LexModelBuilding GetBots action.
 * \value GetBuiltinIntentAction LexModelBuilding GetBuiltinIntent action.
 * \value GetBuiltinIntentsAction LexModelBuilding GetBuiltinIntents action.
 * \value GetBuiltinSlotTypesAction LexModelBuilding GetBuiltinSlotTypes action.
 * \value GetExportAction LexModelBuilding GetExport action.
 * \value GetImportAction LexModelBuilding GetImport action.
 * \value GetIntentAction LexModelBuilding GetIntent action.
 * \value GetIntentVersionsAction LexModelBuilding GetIntentVersions action.
 * \value GetIntentsAction LexModelBuilding GetIntents action.
 * \value GetMigrationAction LexModelBuilding GetMigration action.
 * \value GetMigrationsAction LexModelBuilding GetMigrations action.
 * \value GetSlotTypeAction LexModelBuilding GetSlotType action.
 * \value GetSlotTypeVersionsAction LexModelBuilding GetSlotTypeVersions action.
 * \value GetSlotTypesAction LexModelBuilding GetSlotTypes action.
 * \value GetUtterancesViewAction LexModelBuilding GetUtterancesView action.
 * \value ListTagsForResourceAction LexModelBuilding ListTagsForResource action.
 * \value PutBotAction LexModelBuilding PutBot action.
 * \value PutBotAliasAction LexModelBuilding PutBotAlias action.
 * \value PutIntentAction LexModelBuilding PutIntent action.
 * \value PutSlotTypeAction LexModelBuilding PutSlotType action.
 * \value StartImportAction LexModelBuilding StartImport action.
 * \value StartMigrationAction LexModelBuilding StartMigration action.
 * \value TagResourceAction LexModelBuilding TagResource action.
 * \value UntagResourceAction LexModelBuilding UntagResource action.
 */

/*!
 * Constructs a LexModelBuildingRequest object for LexModelBuilding \a action.
 */
LexModelBuildingRequest::LexModelBuildingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LexModelBuildingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LexModelBuildingRequest::LexModelBuildingRequest(const LexModelBuildingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LexModelBuildingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LexModelBuildingRequest object to be equal to \a other.
 */
LexModelBuildingRequest& LexModelBuildingRequest::operator=(const LexModelBuildingRequest &other)
{
    Q_D(LexModelBuildingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LexModelBuildingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexModelBuildingRequestPrivate.
 */
LexModelBuildingRequest::LexModelBuildingRequest(LexModelBuildingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LexModelBuilding action to be performed by this request.
 */
LexModelBuildingRequest::Action LexModelBuildingRequest::action() const
{
    Q_D(const LexModelBuildingRequest);
    return d->action;
}

/*!
 * Returns the name of the LexModelBuilding action to be performed by this request.
 */
QString LexModelBuildingRequest::actionString() const
{
    return LexModelBuildingRequestPrivate::toString(action());
}

/*!
 * Returns the LexModelBuilding API version implemented by this request.
 */
QString LexModelBuildingRequest::apiVersion() const
{
    Q_D(const LexModelBuildingRequest);
    return d->apiVersion;
}

/*!
 * Sets the LexModelBuilding action to be performed by this request to \a action.
 */
void LexModelBuildingRequest::setAction(const Action action)
{
    Q_D(LexModelBuildingRequest);
    d->action = action;
}

/*!
 * Sets the LexModelBuilding API version to include in this request to \a version.
 */
void LexModelBuildingRequest::setApiVersion(const QString &version)
{
    Q_D(LexModelBuildingRequest);
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
bool LexModelBuildingRequest::operator==(const LexModelBuildingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LexModelBuilding queue name.
 *
 * @par From LexModelBuilding FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LexModelBuilding queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LexModelBuildingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LexModelBuildingRequest::clearParameter(const QString &name)
{
    Q_D(LexModelBuildingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LexModelBuildingRequest::clearParameters()
{
    Q_D(LexModelBuildingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LexModelBuildingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LexModelBuildingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LexModelBuildingRequest::parameters() const
{
    Q_D(const LexModelBuildingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LexModelBuildingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LexModelBuildingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LexModelBuildingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LexModelBuildingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LexModelBuilding request using the given
 * \a endpoint.
 *
 * This LexModelBuilding implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LexModelBuildingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LexModelBuildingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LexModelBuilding::LexModelBuildingRequestPrivate
 * \brief The LexModelBuildingRequestPrivate class provides private implementation for LexModelBuildingRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a LexModelBuildingRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
LexModelBuildingRequestPrivate::LexModelBuildingRequestPrivate(const LexModelBuildingRequest::Action action, LexModelBuildingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-04-19"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LexModelBuildingRequest class's copy constructor.
 */
LexModelBuildingRequestPrivate::LexModelBuildingRequestPrivate(const LexModelBuildingRequestPrivate &other,
                                     LexModelBuildingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LexModelBuildingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LexModelBuilding service's Action
 * query parameters.
 */
QString LexModelBuildingRequestPrivate::toString(const LexModelBuildingRequest::Action &action)
{
    #define ActionToString(action) \
        case LexModelBuildingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateBotVersion);
        ActionToString(CreateIntentVersion);
        ActionToString(CreateSlotTypeVersion);
        ActionToString(DeleteBot);
        ActionToString(DeleteBotAlias);
        ActionToString(DeleteBotChannelAssociation);
        ActionToString(DeleteBotVersion);
        ActionToString(DeleteIntent);
        ActionToString(DeleteIntentVersion);
        ActionToString(DeleteSlotType);
        ActionToString(DeleteSlotTypeVersion);
        ActionToString(DeleteUtterances);
        ActionToString(GetBot);
        ActionToString(GetBotAlias);
        ActionToString(GetBotAliases);
        ActionToString(GetBotChannelAssociation);
        ActionToString(GetBotChannelAssociations);
        ActionToString(GetBotVersions);
        ActionToString(GetBots);
        ActionToString(GetBuiltinIntent);
        ActionToString(GetBuiltinIntents);
        ActionToString(GetBuiltinSlotTypes);
        ActionToString(GetExport);
        ActionToString(GetImport);
        ActionToString(GetIntent);
        ActionToString(GetIntentVersions);
        ActionToString(GetIntents);
        ActionToString(GetMigration);
        ActionToString(GetMigrations);
        ActionToString(GetSlotType);
        ActionToString(GetSlotTypeVersions);
        ActionToString(GetSlotTypes);
        ActionToString(GetUtterancesView);
        ActionToString(ListTagsForResource);
        ActionToString(PutBot);
        ActionToString(PutBotAlias);
        ActionToString(PutIntent);
        ActionToString(PutSlotType);
        ActionToString(StartImport);
        ActionToString(StartMigration);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LexModelBuilding
} // namespace QtAws
