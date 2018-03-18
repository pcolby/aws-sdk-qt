/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lexmodelbuildingserviceclient.h"
#include "lexmodelbuildingserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  LexModelBuildingServiceClient
 *
 * @brief  Client for Amazon Lex Model Building Service
 *
 * <fullname>Amazon Lex Build-Time Actions</fullname>
 *
 * Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 * and delete conversational bots for new and existing client applications.
 */

/**
 * @brief  Constructs a new LexModelBuildingServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LexModelBuildingServiceClientPrivate(this), parent)
{
    Q_D(LexModelBuildingServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new LexModelBuildingServiceClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LexModelBuildingServiceClientPrivate(this), parent)
{
    Q_D(LexModelBuildingServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates a new version of the bot based on the <code>$LATEST</code> version. If the <code>$LATEST</code> version of this
 * resource hasn't changed since you created the last version, Amazon Lex doesn't create a new version. It returns the last
 * created
 *
 * version> <note>
 *
 * You can update only the <code>$LATEST</code> version of the bot. You can't update the numbered versions that you create
 * with the <code>CreateBotVersion</code>
 *
 * operation> </note>
 *
 * When you create the first version of a bot, Amazon Lex sets the version to 1. Subsequent versions increment by 1. For
 * more information, see <a>versioning-intro</a>.
 *
 * </p
 *
 * This operation requires permission for the <code>lex:CreateBotVersion</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBotVersionResponse * LexModelBuildingServiceClient::createBotVersion(const CreateBotVersionRequest &request)
{

}

/**
 * Creates a new version of an intent based on the <code>$LATEST</code> version of the intent. If the <code>$LATEST</code>
 * version of this intent hasn't changed since you last updated it, Amazon Lex doesn't create a new version. It returns the
 * last version you
 *
 * created> <note>
 *
 * You can update only the <code>$LATEST</code> version of the intent. You can't update the numbered versions that you
 * create with the <code>CreateIntentVersion</code>
 *
 * operation> </note>
 *
 * When you create a version of an intent, Amazon Lex sets the version to 1. Subsequent versions increment by 1. For more
 * information, see <a>versioning-intro</a>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lex:CreateIntentVersion</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIntentVersionResponse * LexModelBuildingServiceClient::createIntentVersion(const CreateIntentVersionRequest &request)
{

}

/**
 * Creates a new version of a slot type based on the <code>$LATEST</code> version of the specified slot type. If the
 * <code>$LATEST</code> version of this resource has not changed since the last version that you created, Amazon Lex
 * doesn't create a new version. It returns the last version that you created.
 *
 * </p <note>
 *
 * You can update only the <code>$LATEST</code> version of a slot type. You can't update the numbered versions that you
 * create with the <code>CreateSlotTypeVersion</code>
 *
 * operation> </note>
 *
 * When you create a version of a slot type, Amazon Lex sets the version to 1. Subsequent versions increment by 1. For more
 * information, see <a>versioning-intro</a>.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:CreateSlotTypeVersion</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSlotTypeVersionResponse * LexModelBuildingServiceClient::createSlotTypeVersion(const CreateSlotTypeVersionRequest &request)
{

}

/**
 * Deletes all versions of the bot, including the <code>$LATEST</code> version. To delete a specific version of the bot,
 * use the <a>DeleteBotVersion</a>
 *
 * operation>
 *
 * If a bot has an alias, you can't delete it. Instead, the <code>DeleteBot</code> operation returns a
 * <code>ResourceInUseException</code> exception that includes a reference to the alias that refers to the bot. To remove
 * the reference to the bot, delete the alias. If you get the same exception again, delete the referring alias until the
 * <code>DeleteBot</code> operation is
 *
 * successful>
 *
 * This operation requires permissions for the <code>lex:DeleteBot</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBotResponse * LexModelBuildingServiceClient::deleteBot(const DeleteBotRequest &request)
{

}

/**
 * Deletes an alias for the specified bot.
 *
 * </p
 *
 * You can't delete an alias that is used in the association between a bot and a messaging channel. If an alias is used in
 * a channel association, the <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code> exception that
 * includes a reference to the channel association that refers to the bot. You can remove the reference to the alias by
 * deleting the channel association. If you get the same exception again, delete the referring association until the
 * <code>DeleteBotAlias</code> operation is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBotAliasResponse * LexModelBuildingServiceClient::deleteBotAlias(const DeleteBotAliasRequest &request)
{

}

/**
 * Deletes the association between an Amazon Lex bot and a messaging
 *
 * platform>
 *
 * This operation requires permission for the <code>lex:DeleteBotChannelAssociation</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBotChannelAssociationResponse * LexModelBuildingServiceClient::deleteBotChannelAssociation(const DeleteBotChannelAssociationRequest &request)
{

}

/**
 * Deletes a specific version of a bot. To delete all versions of a bot, use the <a>DeleteBot</a> operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteBotVersion</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBotVersionResponse * LexModelBuildingServiceClient::deleteBotVersion(const DeleteBotVersionRequest &request)
{

}

/**
 * Deletes all versions of the intent, including the <code>$LATEST</code> version. To delete a specific version of the
 * intent, use the <a>DeleteIntentVersion</a>
 *
 * operation>
 *
 * You can delete a version of an intent only if it is not referenced. To delete an intent that is referred to in one or
 * more bots (see <a>how-it-works</a>), you must remove those references first.
 *
 * </p <note>
 *
 * If you get the <code>ResourceInUseException</code> exception, it provides an example reference that shows where the
 * intent is referenced. To remove the reference to the intent, either update the bot or delete it. If you get the same
 * exception when you attempt to delete the intent again, repeat until the intent has no references and the call to
 * <code>DeleteIntent</code> is successful.
 *
 * </p </note>
 *
 * This operation requires permission for the <code>lex:DeleteIntent</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIntentResponse * LexModelBuildingServiceClient::deleteIntent(const DeleteIntentRequest &request)
{

}

/**
 * Deletes a specific version of an intent. To delete all versions of a intent, use the <a>DeleteIntent</a> operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteIntentVersion</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIntentVersionResponse * LexModelBuildingServiceClient::deleteIntentVersion(const DeleteIntentVersionRequest &request)
{

}

/**
 * Deletes all versions of the slot type, including the <code>$LATEST</code> version. To delete a specific version of the
 * slot type, use the <a>DeleteSlotTypeVersion</a>
 *
 * operation>
 *
 * You can delete a version of a slot type only if it is not referenced. To delete a slot type that is referred to in one
 * or more intents, you must remove those references first.
 *
 * </p <note>
 *
 * If you get the <code>ResourceInUseException</code> exception, the exception provides an example reference that shows the
 * intent where the slot type is referenced. To remove the reference to the slot type, either update the intent or delete
 * it. If you get the same exception when you attempt to delete the slot type again, repeat until the slot type has no
 * references and the <code>DeleteSlotType</code> call is successful.
 *
 * </p </note>
 *
 * This operation requires permission for the <code>lex:DeleteSlotType</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSlotTypeResponse * LexModelBuildingServiceClient::deleteSlotType(const DeleteSlotTypeRequest &request)
{

}

/**
 * Deletes a specific version of a slot type. To delete all versions of a slot type, use the <a>DeleteSlotType</a>
 * operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteSlotTypeVersion</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSlotTypeVersionResponse * LexModelBuildingServiceClient::deleteSlotTypeVersion(const DeleteSlotTypeVersionRequest &request)
{

}

/**
 * Deletes stored
 *
 * utterances>
 *
 * Amazon Lex stores the utterances that users send to your bot. Utterances are stored for 15 days for use with the
 * <a>GetUtterancesView</a> operation, and then stored indefinitely for use in improving the ability of your bot to respond
 * to user
 *
 * input>
 *
 * Use the <code>DeleteStoredUtterances</code> operation to manually delete stored utterances for a specific
 *
 * user>
 *
 * This operation requires permissions for the <code>lex:DeleteUtterances</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUtterancesResponse * LexModelBuildingServiceClient::deleteUtterances(const DeleteUtterancesRequest &request)
{

}

/**
 * Returns metadata information for a specific bot. You must provide the bot name and the bot version or alias.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:GetBot</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotResponse * LexModelBuildingServiceClient::getBot(const GetBotRequest &request)
{

}

/**
 * Returns information about an Amazon Lex bot alias. For more information about aliases, see
 *
 * <a>versioning-aliases</a>>
 *
 * This operation requires permissions for the <code>lex:GetBotAlias</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotAliasResponse * LexModelBuildingServiceClient::getBotAlias(const GetBotAliasRequest &request)
{

}

/**
 * Returns a list of aliases for a specified Amazon Lex
 *
 * bot>
 *
 * This operation requires permissions for the <code>lex:GetBotAliases</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotAliasesResponse * LexModelBuildingServiceClient::getBotAliases(const GetBotAliasesRequest &request)
{

}

/**
 * Returns information about the association between an Amazon Lex bot and a messaging
 *
 * platform>
 *
 * This operation requires permissions for the <code>lex:GetBotChannelAssociation</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotChannelAssociationResponse * LexModelBuildingServiceClient::getBotChannelAssociation(const GetBotChannelAssociationRequest &request)
{

}

/**
 * Returns a list of all of the channels associated with the specified bot.
 *
 * </p
 *
 * The <code>GetBotChannelAssociations</code> operation requires permissions for the
 * <code>lex:GetBotChannelAssociations</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotChannelAssociationsResponse * LexModelBuildingServiceClient::getBotChannelAssociations(const GetBotChannelAssociationsRequest &request)
{

}

/**
 * Gets information about all of the versions of a
 *
 * bot>
 *
 * The <code>GetBotVersions</code> operation returns a <code>BotMetadata</code> object for each version of a bot. For
 * example, if a bot has three numbered versions, the <code>GetBotVersions</code> operation returns four
 * <code>BotMetadata</code> objects in the response, one for each numbered version and one for the <code>$LATEST</code>
 * version.
 *
 * </p
 *
 * The <code>GetBotVersions</code> operation always returns at least one version, the <code>$LATEST</code>
 *
 * version>
 *
 * This operation requires permissions for the <code>lex:GetBotVersions</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotVersionsResponse * LexModelBuildingServiceClient::getBotVersions(const GetBotVersionsRequest &request)
{

}

/**
 * Returns bot information as follows:
 *
 * </p <ul> <li>
 *
 * If you provide the <code>nameContains</code> field, the response includes information for the <code>$LATEST</code>
 * version of all bots whose name contains the specified
 *
 * string> </li> <li>
 *
 * If you don't specify the <code>nameContains</code> field, the operation returns information about the
 * <code>$LATEST</code> version of all of your
 *
 * bots> </li> </ul>
 *
 * This operation requires permission for the <code>lex:GetBots</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBotsResponse * LexModelBuildingServiceClient::getBots(const GetBotsRequest &request)
{

}

/**
 * Returns information about a built-in
 *
 * intent>
 *
 * This operation requires permission for the <code>lex:GetBuiltinIntent</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBuiltinIntentResponse * LexModelBuildingServiceClient::getBuiltinIntent(const GetBuiltinIntentRequest &request)
{

}

/**
 * Gets a list of built-in intents that meet the specified
 *
 * criteria>
 *
 * This operation requires permission for the <code>lex:GetBuiltinIntents</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBuiltinIntentsResponse * LexModelBuildingServiceClient::getBuiltinIntents(const GetBuiltinIntentsRequest &request)
{

}

/**
 * Gets a list of built-in slot types that meet the specified
 *
 * criteria>
 *
 * For a list of built-in slot types, see <a
 * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
 * Type Reference</a> in the <i>Alexa Skills
 *
 * Kit</i>>
 *
 * This operation requires permission for the <code>lex:GetBuiltInSlotTypes</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBuiltinSlotTypesResponse * LexModelBuildingServiceClient::getBuiltinSlotTypes(const GetBuiltinSlotTypesRequest &request)
{

}

/**
 * Exports the contents of a Amazon Lex resource in a specified format.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportResponse * LexModelBuildingServiceClient::getExport(const GetExportRequest &request)
{

}

/**
 * Gets information about an import job started with the <code>StartImport</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetImportResponse * LexModelBuildingServiceClient::getImport(const GetImportRequest &request)
{

}

/**
 * Returns information about an intent. In addition to the intent name, you must specify the intent version.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lex:GetIntent</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntentResponse * LexModelBuildingServiceClient::getIntent(const GetIntentRequest &request)
{

}

/**
 * Gets information about all of the versions of an
 *
 * intent>
 *
 * The <code>GetIntentVersions</code> operation returns an <code>IntentMetadata</code> object for each version of an
 * intent. For example, if an intent has three numbered versions, the <code>GetIntentVersions</code> operation returns four
 * <code>IntentMetadata</code> objects in the response, one for each numbered version and one for the <code>$LATEST</code>
 * version.
 *
 * </p
 *
 * The <code>GetIntentVersions</code> operation always returns at least one version, the <code>$LATEST</code>
 *
 * version>
 *
 * This operation requires permissions for the <code>lex:GetIntentVersions</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntentVersionsResponse * LexModelBuildingServiceClient::getIntentVersions(const GetIntentVersionsRequest &request)
{

}

/**
 * Returns intent information as follows:
 *
 * </p <ul> <li>
 *
 * If you specify the <code>nameContains</code> field, returns the <code>$LATEST</code> version of all intents that contain
 * the specified
 *
 * string> </li> <li>
 *
 * If you don't specify the <code>nameContains</code> field, returns information about the <code>$LATEST</code> version of
 * all intents.
 *
 * </p </li> </ul>
 *
 * The operation requires permission for the <code>lex:GetIntents</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntentsResponse * LexModelBuildingServiceClient::getIntents(const GetIntentsRequest &request)
{

}

/**
 * Returns information about a specific version of a slot type. In addition to specifying the slot type name, you must
 * specify the slot type
 *
 * version>
 *
 * This operation requires permissions for the <code>lex:GetSlotType</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSlotTypeResponse * LexModelBuildingServiceClient::getSlotType(const GetSlotTypeRequest &request)
{

}

/**
 * Gets information about all versions of a slot
 *
 * type>
 *
 * The <code>GetSlotTypeVersions</code> operation returns a <code>SlotTypeMetadata</code> object for each version of a slot
 * type. For example, if a slot type has three numbered versions, the <code>GetSlotTypeVersions</code> operation returns
 * four <code>SlotTypeMetadata</code> objects in the response, one for each numbered version and one for the
 * <code>$LATEST</code> version.
 *
 * </p
 *
 * The <code>GetSlotTypeVersions</code> operation always returns at least one version, the <code>$LATEST</code>
 *
 * version>
 *
 * This operation requires permissions for the <code>lex:GetSlotTypeVersions</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSlotTypeVersionsResponse * LexModelBuildingServiceClient::getSlotTypeVersions(const GetSlotTypeVersionsRequest &request)
{

}

/**
 * Returns slot type information as follows:
 *
 * </p <ul> <li>
 *
 * If you specify the <code>nameContains</code> field, returns the <code>$LATEST</code> version of all slot types that
 * contain the specified
 *
 * string> </li> <li>
 *
 * If you don't specify the <code>nameContains</code> field, returns information about the <code>$LATEST</code> version of
 * all slot types.
 *
 * </p </li> </ul>
 *
 * The operation requires permission for the <code>lex:GetSlotTypes</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSlotTypesResponse * LexModelBuildingServiceClient::getSlotTypes(const GetSlotTypesRequest &request)
{

}

/**
 * Use the <code>GetUtterancesView</code> operation to get information about the utterances that your users have made to
 * your bot. You can use this list to tune the utterances that your bot responds
 *
 * to>
 *
 * For example, say that you have created a bot to order flowers. After your users have used your bot for a while, use the
 * <code>GetUtterancesView</code> operation to see the requests that they have made and whether they have been successful.
 * You might find that the utterance "I want flowers" is not being recognized. You could add this utterance to the
 * <code>OrderFlowers</code> intent so that your bot recognizes that
 *
 * utterance>
 *
 * After you publish a new version of a bot, you can get information about the old version and the new so that you can
 * compare the performance across the two versions.
 *
 * </p <note>
 *
 * Utterance statistics are generated once a day. Data is available for the last 15 days. You can request information for
 * up to 5 versions in each request. The response contains information about a maximum of 100 utterances for each
 *
 * version> </note>
 *
 * This operation requires permissions for the <code>lex:GetUtterancesView</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUtterancesViewResponse * LexModelBuildingServiceClient::getUtterancesView(const GetUtterancesViewRequest &request)
{

}

/**
 * Creates an Amazon Lex conversational bot or replaces an existing bot. When you create or update a bot you are only
 * required to specify a name, a locale, and whether the bot is directed toward children under age 13. You can use this to
 * add intents later, or to remove intents from an existing bot. When you create a bot with the minimum information, the
 * bot is created or updated but Amazon Lex returns the <code/> response <code>FAILED</code>. You can build the bot after
 * you add one or more intents. For more information about Amazon Lex bots, see <a>how-it-works</a>.
 *
 * </p
 *
 * If you specify the name of an existing bot, the fields in the request replace the existing values in the
 * <code>$LATEST</code> version of the bot. Amazon Lex removes any fields that you don't provide values for in the request,
 * except for the <code>idleTTLInSeconds</code> and <code>privacySettings</code> fields, which are set to their default
 * values. If you don't specify values for required fields, Amazon Lex throws an
 *
 * exception>
 *
 * This operation requires permissions for the <code>lex:PutBot</code> action. For more information, see
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBotResponse * LexModelBuildingServiceClient::putBot(const PutBotRequest &request)
{

}

/**
 * Creates an alias for the specified version of the bot or replaces an alias for the specified bot. To change the version
 * of the bot that the alias points to, replace the alias. For more information about aliases, see
 *
 * <a>versioning-aliases</a>>
 *
 * This operation requires permissions for the <code>lex:PutBotAlias</code> action.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBotAliasResponse * LexModelBuildingServiceClient::putBotAlias(const PutBotAliasRequest &request)
{

}

/**
 * Creates an intent or replaces an existing
 *
 * intent>
 *
 * To define the interaction between the user and your bot, you use one or more intents. For a pizza ordering bot, for
 * example, you would create an <code>OrderPizza</code> intent.
 *
 * </p
 *
 * To create an intent or replace an existing intent, you must provide the
 *
 * following> <ul> <li>
 *
 * Intent name. For example,
 *
 * <code>OrderPizza</code>> </li> <li>
 *
 * Sample utterances. For example, "Can I order a pizza, please." and "I want to order a
 *
 * pizza.> </li> <li>
 *
 * Information to be gathered. You specify slot types for the information that your bot will request from the user. You can
 * specify standard slot types, such as a date or a time, or custom slot types such as the size and crust of a
 *
 * pizza> </li> <li>
 *
 * How the intent will be fulfilled. You can provide a Lambda function or configure the intent to return the intent
 * information to the client application. If you use a Lambda function, when all of the intent information is available,
 * Amazon Lex invokes your Lambda function. If you configure your intent to return the intent information to the client
 * application.
 *
 * </p </li> </ul>
 *
 * You can specify other optional information in the request, such
 *
 * as> <ul> <li>
 *
 * A confirmation prompt to ask the user to confirm an intent. For example, "Shall I order your
 *
 * pizza?> </li> <li>
 *
 * A conclusion statement to send to the user after the intent has been fulfilled. For example, "I placed your pizza
 *
 * order.> </li> <li>
 *
 * A follow-up prompt that asks the user for additional activity. For example, asking "Do you want to order a drink with
 * your
 *
 * pizza?> </li> </ul>
 *
 * If you specify an existing intent name to update the intent, Amazon Lex replaces the values in the <code>$LATEST</code>
 * version of the intent with the values in the request. Amazon Lex removes fields that you don't provide in the request.
 * If you don't specify the required fields, Amazon Lex throws an exception. When you update the <code>$LATEST</code>
 * version of an intent, the <code>status</code> field of any bot that uses the <code>$LATEST</code> version of the intent
 * is set to
 *
 * <code>NOT_BUILT</code>>
 *
 * For more information, see
 *
 * <a>how-it-works</a>>
 *
 * This operation requires permissions for the <code>lex:PutIntent</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutIntentResponse * LexModelBuildingServiceClient::putIntent(const PutIntentRequest &request)
{

}

/**
 * Creates a custom slot type or replaces an existing custom slot
 *
 * type>
 *
 * To create a custom slot type, specify a name for the slot type and a set of enumeration values, which are the values
 * that a slot of this type can assume. For more information, see
 *
 * <a>how-it-works</a>>
 *
 * If you specify the name of an existing slot type, the fields in the request replace the existing values in the
 * <code>$LATEST</code> version of the slot type. Amazon Lex removes the fields that you don't provide in the request. If
 * you don't specify required fields, Amazon Lex throws an exception. When you update the <code>$LATEST</code> version of a
 * slot type, if a bot uses the <code>$LATEST</code> version of an intent that contains the slot type, the bot's
 * <code>status</code> field is set to
 *
 * <code>NOT_BUILT</code>>
 *
 * This operation requires permissions for the <code>lex:PutSlotType</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutSlotTypeResponse * LexModelBuildingServiceClient::putSlotType(const PutSlotTypeRequest &request)
{

}

/**
 * Starts a job to import a resource to Amazon
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartImportResponse * LexModelBuildingServiceClient::startImport(const StartImportRequest &request)
{

}

/**
 * @internal
 *
 * @class  LexModelBuildingServiceClientPrivate
 *
 * @brief  Private implementation for LexModelBuildingServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LexModelBuildingServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public LexModelBuildingServiceClient instance.
 */
LexModelBuildingServiceClientPrivate::LexModelBuildingServiceClientPrivate(LexModelBuildingServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace LexModelBuildingService
} // namespace AWS
