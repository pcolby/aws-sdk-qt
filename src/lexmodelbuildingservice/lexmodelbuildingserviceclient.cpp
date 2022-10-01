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

#include "lexmodelbuildingserviceclient.h"
#include "lexmodelbuildingserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createbotversionrequest.h"
#include "createbotversionresponse.h"
#include "createintentversionrequest.h"
#include "createintentversionresponse.h"
#include "createslottypeversionrequest.h"
#include "createslottypeversionresponse.h"
#include "deletebotrequest.h"
#include "deletebotresponse.h"
#include "deletebotaliasrequest.h"
#include "deletebotaliasresponse.h"
#include "deletebotchannelassociationrequest.h"
#include "deletebotchannelassociationresponse.h"
#include "deletebotversionrequest.h"
#include "deletebotversionresponse.h"
#include "deleteintentrequest.h"
#include "deleteintentresponse.h"
#include "deleteintentversionrequest.h"
#include "deleteintentversionresponse.h"
#include "deleteslottyperequest.h"
#include "deleteslottyperesponse.h"
#include "deleteslottypeversionrequest.h"
#include "deleteslottypeversionresponse.h"
#include "deleteutterancesrequest.h"
#include "deleteutterancesresponse.h"
#include "getbotrequest.h"
#include "getbotresponse.h"
#include "getbotaliasrequest.h"
#include "getbotaliasresponse.h"
#include "getbotaliasesrequest.h"
#include "getbotaliasesresponse.h"
#include "getbotchannelassociationrequest.h"
#include "getbotchannelassociationresponse.h"
#include "getbotchannelassociationsrequest.h"
#include "getbotchannelassociationsresponse.h"
#include "getbotversionsrequest.h"
#include "getbotversionsresponse.h"
#include "getbotsrequest.h"
#include "getbotsresponse.h"
#include "getbuiltinintentrequest.h"
#include "getbuiltinintentresponse.h"
#include "getbuiltinintentsrequest.h"
#include "getbuiltinintentsresponse.h"
#include "getbuiltinslottypesrequest.h"
#include "getbuiltinslottypesresponse.h"
#include "getexportrequest.h"
#include "getexportresponse.h"
#include "getimportrequest.h"
#include "getimportresponse.h"
#include "getintentrequest.h"
#include "getintentresponse.h"
#include "getintentversionsrequest.h"
#include "getintentversionsresponse.h"
#include "getintentsrequest.h"
#include "getintentsresponse.h"
#include "getmigrationrequest.h"
#include "getmigrationresponse.h"
#include "getmigrationsrequest.h"
#include "getmigrationsresponse.h"
#include "getslottyperequest.h"
#include "getslottyperesponse.h"
#include "getslottypeversionsrequest.h"
#include "getslottypeversionsresponse.h"
#include "getslottypesrequest.h"
#include "getslottypesresponse.h"
#include "getutterancesviewrequest.h"
#include "getutterancesviewresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putbotrequest.h"
#include "putbotresponse.h"
#include "putbotaliasrequest.h"
#include "putbotaliasresponse.h"
#include "putintentrequest.h"
#include "putintentresponse.h"
#include "putslottyperequest.h"
#include "putslottyperesponse.h"
#include "startimportrequest.h"
#include "startimportresponse.h"
#include "startmigrationrequest.h"
#include "startmigrationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LexModelBuildingService
 * \brief Contains classess for accessing Amazon Lex Model Building Service.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::LexModelBuildingServiceClient
 * \brief The LexModelBuildingServiceClient class provides access to the Amazon Lex Model Building Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 */

/*!
 * \brief Constructs a LexModelBuildingServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexModelBuildingServiceClientPrivate(this), parent)
{
    Q_D(LexModelBuildingServiceClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("models.lex");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lex Model Building Service");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * \overload LexModelBuildingServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LexModelBuildingServiceClient::LexModelBuildingServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexModelBuildingServiceClientPrivate(this), parent)
{
    Q_D(LexModelBuildingServiceClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("models.lex");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lex Model Building Service");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * CreateBotVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
CreateBotVersionResponse * LexModelBuildingServiceClient::createBotVersion(const CreateBotVersionRequest &request)
{
    return qobject_cast<CreateBotVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * CreateIntentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
CreateIntentVersionResponse * LexModelBuildingServiceClient::createIntentVersion(const CreateIntentVersionRequest &request)
{
    return qobject_cast<CreateIntentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * CreateSlotTypeVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
CreateSlotTypeVersionResponse * LexModelBuildingServiceClient::createSlotTypeVersion(const CreateSlotTypeVersionRequest &request)
{
    return qobject_cast<CreateSlotTypeVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all versions of the bot, including the <code>$LATEST</code> version. To delete a specific version of the bot,
 * use the <a>DeleteBotVersion</a> operation. The <code>DeleteBot</code> operation doesn't immediately remove the bot
 * schema. Instead, it is marked for deletion and removed
 *
 * later>
 *
 * Amazon Lex stores utterances indefinitely for improving the ability of your bot to respond to user inputs. These
 * utterances are not removed when the bot is deleted. To remove the utterances, use the <a>DeleteUtterances</a>
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
 */
DeleteBotResponse * LexModelBuildingServiceClient::deleteBot(const DeleteBotRequest &request)
{
    return qobject_cast<DeleteBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an alias for the specified bot.
 *
 * </p
 *
 * You can't delete an alias that is used in the association between a bot and a messaging channel. If an alias is used in
 * a channel association, the <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code> exception that
 * includes a reference to the channel association that refers to the bot. You can remove the reference to the alias by
 * deleting the channel association. If you get the same exception again, delete the referring association until the
 * <code>DeleteBotAlias</code> operation is
 */
DeleteBotAliasResponse * LexModelBuildingServiceClient::deleteBotAlias(const DeleteBotAliasRequest &request)
{
    return qobject_cast<DeleteBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteBotChannelAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between an Amazon Lex bot and a messaging
 *
 * platform>
 *
 * This operation requires permission for the <code>lex:DeleteBotChannelAssociation</code>
 */
DeleteBotChannelAssociationResponse * LexModelBuildingServiceClient::deleteBotChannelAssociation(const DeleteBotChannelAssociationRequest &request)
{
    return qobject_cast<DeleteBotChannelAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteBotVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific version of a bot. To delete all versions of a bot, use the <a>DeleteBot</a> operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteBotVersion</code>
 */
DeleteBotVersionResponse * LexModelBuildingServiceClient::deleteBotVersion(const DeleteBotVersionRequest &request)
{
    return qobject_cast<DeleteBotVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteIntentResponse * LexModelBuildingServiceClient::deleteIntent(const DeleteIntentRequest &request)
{
    return qobject_cast<DeleteIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteIntentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific version of an intent. To delete all versions of a intent, use the <a>DeleteIntent</a> operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteIntentVersion</code>
 */
DeleteIntentVersionResponse * LexModelBuildingServiceClient::deleteIntentVersion(const DeleteIntentVersionRequest &request)
{
    return qobject_cast<DeleteIntentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteSlotTypeResponse * LexModelBuildingServiceClient::deleteSlotType(const DeleteSlotTypeRequest &request)
{
    return qobject_cast<DeleteSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteSlotTypeVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific version of a slot type. To delete all versions of a slot type, use the <a>DeleteSlotType</a>
 * operation.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:DeleteSlotTypeVersion</code>
 */
DeleteSlotTypeVersionResponse * LexModelBuildingServiceClient::deleteSlotTypeVersion(const DeleteSlotTypeVersionRequest &request)
{
    return qobject_cast<DeleteSlotTypeVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * DeleteUtterancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Use the <code>DeleteUtterances</code> operation to manually delete stored utterances for a specific user. When you use
 * the <code>DeleteUtterances</code> operation, utterances stored for improving your bot's ability to respond to user input
 * are deleted immediately. Utterances stored for use with the <code>GetUtterancesView</code> operation are deleted after
 * 15
 *
 * days>
 *
 * This operation requires permissions for the <code>lex:DeleteUtterances</code>
 */
DeleteUtterancesResponse * LexModelBuildingServiceClient::deleteUtterances(const DeleteUtterancesRequest &request)
{
    return qobject_cast<DeleteUtterancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata information for a specific bot. You must provide the bot name and the bot version or alias.
 *
 * </p
 *
 * This operation requires permissions for the <code>lex:GetBot</code> action.
 */
GetBotResponse * LexModelBuildingServiceClient::getBot(const GetBotRequest &request)
{
    return qobject_cast<GetBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an Amazon Lex bot alias. For more information about aliases, see
 *
 * <a>versioning-aliases</a>>
 *
 * This operation requires permissions for the <code>lex:GetBotAlias</code>
 */
GetBotAliasResponse * LexModelBuildingServiceClient::getBotAlias(const GetBotAliasRequest &request)
{
    return qobject_cast<GetBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of aliases for a specified Amazon Lex
 *
 * bot>
 *
 * This operation requires permissions for the <code>lex:GetBotAliases</code>
 */
GetBotAliasesResponse * LexModelBuildingServiceClient::getBotAliases(const GetBotAliasesRequest &request)
{
    return qobject_cast<GetBotAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotChannelAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the association between an Amazon Lex bot and a messaging
 *
 * platform>
 *
 * This operation requires permissions for the <code>lex:GetBotChannelAssociation</code>
 */
GetBotChannelAssociationResponse * LexModelBuildingServiceClient::getBotChannelAssociation(const GetBotChannelAssociationRequest &request)
{
    return qobject_cast<GetBotChannelAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotChannelAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the channels associated with the specified bot.
 *
 * </p
 *
 * The <code>GetBotChannelAssociations</code> operation requires permissions for the
 * <code>lex:GetBotChannelAssociations</code>
 */
GetBotChannelAssociationsResponse * LexModelBuildingServiceClient::getBotChannelAssociations(const GetBotChannelAssociationsRequest &request)
{
    return qobject_cast<GetBotChannelAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetBotVersionsResponse * LexModelBuildingServiceClient::getBotVersions(const GetBotVersionsRequest &request)
{
    return qobject_cast<GetBotVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetBotsResponse * LexModelBuildingServiceClient::getBots(const GetBotsRequest &request)
{
    return qobject_cast<GetBotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBuiltinIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a built-in
 *
 * intent>
 *
 * This operation requires permission for the <code>lex:GetBuiltinIntent</code>
 */
GetBuiltinIntentResponse * LexModelBuildingServiceClient::getBuiltinIntent(const GetBuiltinIntentRequest &request)
{
    return qobject_cast<GetBuiltinIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBuiltinIntentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of built-in intents that meet the specified
 *
 * criteria>
 *
 * This operation requires permission for the <code>lex:GetBuiltinIntents</code>
 */
GetBuiltinIntentsResponse * LexModelBuildingServiceClient::getBuiltinIntents(const GetBuiltinIntentsRequest &request)
{
    return qobject_cast<GetBuiltinIntentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetBuiltinSlotTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetBuiltinSlotTypesResponse * LexModelBuildingServiceClient::getBuiltinSlotTypes(const GetBuiltinSlotTypesRequest &request)
{
    return qobject_cast<GetBuiltinSlotTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports the contents of a Amazon Lex resource in a specified format.
 */
GetExportResponse * LexModelBuildingServiceClient::getExport(const GetExportRequest &request)
{
    return qobject_cast<GetExportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an import job started with the <code>StartImport</code>
 */
GetImportResponse * LexModelBuildingServiceClient::getImport(const GetImportRequest &request)
{
    return qobject_cast<GetImportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an intent. In addition to the intent name, you must specify the intent version.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lex:GetIntent</code> action.
 */
GetIntentResponse * LexModelBuildingServiceClient::getIntent(const GetIntentRequest &request)
{
    return qobject_cast<GetIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetIntentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetIntentVersionsResponse * LexModelBuildingServiceClient::getIntentVersions(const GetIntentVersionsRequest &request)
{
    return qobject_cast<GetIntentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetIntentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetIntentsResponse * LexModelBuildingServiceClient::getIntents(const GetIntentsRequest &request)
{
    return qobject_cast<GetIntentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetMigrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about an ongoing or complete migration from an Amazon Lex V1 bot to an Amazon Lex V2 bot. Use this
 * operation to view the migration alerts and warnings related to the
 */
GetMigrationResponse * LexModelBuildingServiceClient::getMigration(const GetMigrationRequest &request)
{
    return qobject_cast<GetMigrationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetMigrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of migrations between Amazon Lex V1 and Amazon Lex
 */
GetMigrationsResponse * LexModelBuildingServiceClient::getMigrations(const GetMigrationsRequest &request)
{
    return qobject_cast<GetMigrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific version of a slot type. In addition to specifying the slot type name, you must
 * specify the slot type
 *
 * version>
 *
 * This operation requires permissions for the <code>lex:GetSlotType</code>
 */
GetSlotTypeResponse * LexModelBuildingServiceClient::getSlotType(const GetSlotTypeRequest &request)
{
    return qobject_cast<GetSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetSlotTypeVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetSlotTypeVersionsResponse * LexModelBuildingServiceClient::getSlotTypeVersions(const GetSlotTypeVersionsRequest &request)
{
    return qobject_cast<GetSlotTypeVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetSlotTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetSlotTypesResponse * LexModelBuildingServiceClient::getSlotTypes(const GetSlotTypesRequest &request)
{
    return qobject_cast<GetSlotTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * GetUtterancesViewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * </p
 *
 * Utterance statistics are generated once a day. Data is available for the last 15 days. You can request information for
 * up to 5 versions of your bot in each request. Amazon Lex returns the most frequent utterances received by the bot in the
 * last 15 days. The response contains information about a maximum of 100 utterances for each
 *
 * version>
 *
 * If you set <code>childDirected</code> field to true when you created your bot, if you are using slot obfuscation with
 * one or more slots, or if you opted out of participating in improving Amazon Lex, utterances are not
 *
 * available>
 *
 * This operation requires permissions for the <code>lex:GetUtterancesView</code>
 */
GetUtterancesViewResponse * LexModelBuildingServiceClient::getUtterancesView(const GetUtterancesViewRequest &request)
{
    return qobject_cast<GetUtterancesViewResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of tags associated with the specified resource. Only bots, bot aliases, and bot channels can have tags
 * associated with
 */
ListTagsForResourceResponse * LexModelBuildingServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * PutBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Lex conversational bot or replaces an existing bot. When you create or update a bot you are only
 * required to specify a name, a locale, and whether the bot is directed toward children under age 13. You can use this to
 * add intents later, or to remove intents from an existing bot. When you create a bot with the minimum information, the
 * bot is created or updated but Amazon Lex returns the <code></code> response <code>FAILED</code>. You can build the bot
 * after you add one or more intents. For more information about Amazon Lex bots, see <a>how-it-works</a>.
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
 */
PutBotResponse * LexModelBuildingServiceClient::putBot(const PutBotRequest &request)
{
    return qobject_cast<PutBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * PutBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alias for the specified version of the bot or replaces an alias for the specified bot. To change the version
 * of the bot that the alias points to, replace the alias. For more information about aliases, see
 *
 * <a>versioning-aliases</a>>
 *
 * This operation requires permissions for the <code>lex:PutBotAlias</code> action.
 */
PutBotAliasResponse * LexModelBuildingServiceClient::putBotAlias(const PutBotAliasRequest &request)
{
    return qobject_cast<PutBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * PutIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
PutIntentResponse * LexModelBuildingServiceClient::putIntent(const PutIntentRequest &request)
{
    return qobject_cast<PutIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * PutSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
PutSlotTypeResponse * LexModelBuildingServiceClient::putSlotType(const PutSlotTypeRequest &request)
{
    return qobject_cast<PutSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * StartImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job to import a resource to Amazon
 */
StartImportResponse * LexModelBuildingServiceClient::startImport(const StartImportRequest &request)
{
    return qobject_cast<StartImportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * StartMigrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts migrating a bot from Amazon Lex V1 to Amazon Lex V2. Migrate your bot when you want to take advantage of the new
 * features of Amazon Lex
 *
 * V2>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/lex/latest/dg/migrate.html">Migrating a bot</a> in the
 * <i>Amazon Lex developer
 */
StartMigrationResponse * LexModelBuildingServiceClient::startMigration(const StartMigrationRequest &request)
{
    return qobject_cast<StartMigrationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified resource. If a tag key already exists, the existing value is replaced with the
 * new
 */
TagResourceResponse * LexModelBuildingServiceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelBuildingServiceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a bot, bot alias or bot
 */
UntagResourceResponse * LexModelBuildingServiceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::LexModelBuildingService::LexModelBuildingServiceClientPrivate
 * \brief The LexModelBuildingServiceClientPrivate class provides private implementation for LexModelBuildingServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a LexModelBuildingServiceClientPrivate object with public implementation \a q.
 */
LexModelBuildingServiceClientPrivate::LexModelBuildingServiceClientPrivate(LexModelBuildingServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LexModelBuildingService
} // namespace QtAws
