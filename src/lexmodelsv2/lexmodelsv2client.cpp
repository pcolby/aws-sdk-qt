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

#include "lexmodelsv2client.h"
#include "lexmodelsv2client_p.h"

#include "core/awssignaturev4.h"
#include "buildbotlocalerequest.h"
#include "buildbotlocaleresponse.h"
#include "createbotrequest.h"
#include "createbotresponse.h"
#include "createbotaliasrequest.h"
#include "createbotaliasresponse.h"
#include "createbotlocalerequest.h"
#include "createbotlocaleresponse.h"
#include "createbotversionrequest.h"
#include "createbotversionresponse.h"
#include "createexportrequest.h"
#include "createexportresponse.h"
#include "createintentrequest.h"
#include "createintentresponse.h"
#include "createresourcepolicyrequest.h"
#include "createresourcepolicyresponse.h"
#include "createresourcepolicystatementrequest.h"
#include "createresourcepolicystatementresponse.h"
#include "createslotrequest.h"
#include "createslotresponse.h"
#include "createslottyperequest.h"
#include "createslottyperesponse.h"
#include "createuploadurlrequest.h"
#include "createuploadurlresponse.h"
#include "deletebotrequest.h"
#include "deletebotresponse.h"
#include "deletebotaliasrequest.h"
#include "deletebotaliasresponse.h"
#include "deletebotlocalerequest.h"
#include "deletebotlocaleresponse.h"
#include "deletebotversionrequest.h"
#include "deletebotversionresponse.h"
#include "deletecustomvocabularyrequest.h"
#include "deletecustomvocabularyresponse.h"
#include "deleteexportrequest.h"
#include "deleteexportresponse.h"
#include "deleteimportrequest.h"
#include "deleteimportresponse.h"
#include "deleteintentrequest.h"
#include "deleteintentresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteresourcepolicystatementrequest.h"
#include "deleteresourcepolicystatementresponse.h"
#include "deleteslotrequest.h"
#include "deleteslotresponse.h"
#include "deleteslottyperequest.h"
#include "deleteslottyperesponse.h"
#include "deleteutterancesrequest.h"
#include "deleteutterancesresponse.h"
#include "describebotrequest.h"
#include "describebotresponse.h"
#include "describebotaliasrequest.h"
#include "describebotaliasresponse.h"
#include "describebotlocalerequest.h"
#include "describebotlocaleresponse.h"
#include "describebotrecommendationrequest.h"
#include "describebotrecommendationresponse.h"
#include "describebotversionrequest.h"
#include "describebotversionresponse.h"
#include "describecustomvocabularymetadatarequest.h"
#include "describecustomvocabularymetadataresponse.h"
#include "describeexportrequest.h"
#include "describeexportresponse.h"
#include "describeimportrequest.h"
#include "describeimportresponse.h"
#include "describeintentrequest.h"
#include "describeintentresponse.h"
#include "describeresourcepolicyrequest.h"
#include "describeresourcepolicyresponse.h"
#include "describeslotrequest.h"
#include "describeslotresponse.h"
#include "describeslottyperequest.h"
#include "describeslottyperesponse.h"
#include "listaggregatedutterancesrequest.h"
#include "listaggregatedutterancesresponse.h"
#include "listbotaliasesrequest.h"
#include "listbotaliasesresponse.h"
#include "listbotlocalesrequest.h"
#include "listbotlocalesresponse.h"
#include "listbotrecommendationsrequest.h"
#include "listbotrecommendationsresponse.h"
#include "listbotversionsrequest.h"
#include "listbotversionsresponse.h"
#include "listbotsrequest.h"
#include "listbotsresponse.h"
#include "listbuiltinintentsrequest.h"
#include "listbuiltinintentsresponse.h"
#include "listbuiltinslottypesrequest.h"
#include "listbuiltinslottypesresponse.h"
#include "listexportsrequest.h"
#include "listexportsresponse.h"
#include "listimportsrequest.h"
#include "listimportsresponse.h"
#include "listintentsrequest.h"
#include "listintentsresponse.h"
#include "listrecommendedintentsrequest.h"
#include "listrecommendedintentsresponse.h"
#include "listslottypesrequest.h"
#include "listslottypesresponse.h"
#include "listslotsrequest.h"
#include "listslotsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "searchassociatedtranscriptsrequest.h"
#include "searchassociatedtranscriptsresponse.h"
#include "startbotrecommendationrequest.h"
#include "startbotrecommendationresponse.h"
#include "startimportrequest.h"
#include "startimportresponse.h"
#include "stopbotrecommendationrequest.h"
#include "stopbotrecommendationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebotrequest.h"
#include "updatebotresponse.h"
#include "updatebotaliasrequest.h"
#include "updatebotaliasresponse.h"
#include "updatebotlocalerequest.h"
#include "updatebotlocaleresponse.h"
#include "updatebotrecommendationrequest.h"
#include "updatebotrecommendationresponse.h"
#include "updateexportrequest.h"
#include "updateexportresponse.h"
#include "updateintentrequest.h"
#include "updateintentresponse.h"
#include "updateresourcepolicyrequest.h"
#include "updateresourcepolicyresponse.h"
#include "updateslotrequest.h"
#include "updateslotresponse.h"
#include "updateslottyperequest.h"
#include "updateslottyperesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LexModelsV2
 * \brief Contains classess for accessing Amazon Lex Model Building V2.
 *
 * \inmodule QtAwsLexModelsV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::LexModelsV2Client
 * \brief The LexModelsV2Client class provides access to the Amazon Lex Model Building V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexModelsV2
 *
 */

/*!
 * \brief Constructs a LexModelsV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LexModelsV2Client::LexModelsV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexModelsV2ClientPrivate(this), parent)
{
    Q_D(LexModelsV2Client);
    d->apiVersion = QStringLiteral("2020-08-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("models-v2-lex");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lex Model Building V2");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * \overload LexModelsV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LexModelsV2Client::LexModelsV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexModelsV2ClientPrivate(this), parent)
{
    Q_D(LexModelsV2Client);
    d->apiVersion = QStringLiteral("2020-08-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("models-v2-lex");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lex Model Building V2");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * BuildBotLocaleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Builds a bot, its intents, and its slot types into a specific locale. A bot can be built into multiple locales. At
 * runtime the locale is used to choose a specific build of the
 */
BuildBotLocaleResponse * LexModelsV2Client::buildBotLocale(const BuildBotLocaleRequest &request)
{
    return qobject_cast<BuildBotLocaleResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Lex conversational bot.
 */
CreateBotResponse * LexModelsV2Client::createBot(const CreateBotRequest &request)
{
    return qobject_cast<CreateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alias for the specified version of a bot. Use an alias to enable you to change the version of a bot without
 * updating applications that use the
 *
 * bot>
 *
 * For example, you can create an alias called "PROD" that your applications use to call the Amazon Lex bot.
 */
CreateBotAliasResponse * LexModelsV2Client::createBotAlias(const CreateBotAliasRequest &request)
{
    return qobject_cast<CreateBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateBotLocaleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a locale in the bot. The locale contains the intents and slot types that the bot uses in conversations with
 * users in the specified language and locale. You must add a locale to a bot before you can add intents and slot types to
 * the
 */
CreateBotLocaleResponse * LexModelsV2Client::createBotLocale(const CreateBotLocaleRequest &request)
{
    return qobject_cast<CreateBotLocaleResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateBotVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the bot based on the <code>DRAFT</code> version. If the <code>DRAFT</code> version of this
 * resource hasn't changed since you created the last version, Amazon Lex doesn't create a new version, it returns the last
 * created
 *
 * version>
 *
 * When you create the first version of a bot, Amazon Lex sets the version to 1. Subsequent versions increment by
 */
CreateBotVersionResponse * LexModelsV2Client::createBotVersion(const CreateBotVersionRequest &request)
{
    return qobject_cast<CreateBotVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a zip archive containing the contents of a bot or a bot locale. The archive contains a directory structure that
 * contains JSON files that define the
 *
 * bot>
 *
 * You can create an archive that contains the complete definition of a bot, or you can specify that the archive contain
 * only the definition of a single bot
 *
 * locale>
 *
 * For more information about exporting bots, and about the structure of the export archive, see <a
 * href="https://docs.aws.amazon.com/lexv2/latest/dg/importing-exporting.html"> Importing and exporting bots </a>
 */
CreateExportResponse * LexModelsV2Client::createExport(const CreateExportRequest &request)
{
    return qobject_cast<CreateExportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 *
 * intent>
 *
 * To define the interaction between the user and your bot, you define one or more intents. For example, for a pizza
 * ordering bot you would create an <code>OrderPizza</code>
 *
 * intent>
 *
 * When you create an intent, you must provide a name. You can optionally provide the
 *
 * following> <ul> <li>
 *
 * Sample utterances. For example, "I want to order a pizza" and "Can I order a pizza." You can't provide utterances for
 * built-in
 *
 * intents> </li> <li>
 *
 * Information to be gathered. You specify slots for the information that you bot requests from the user. You can specify
 * standard slot types, such as date and time, or custom slot types for your
 *
 * application> </li> <li>
 *
 * How the intent is fulfilled. You can provide a Lambda function or configure the intent to return the intent information
 * to your client application. If you use a Lambda function, Amazon Lex invokes the function when all of the intent
 * information is
 *
 * available> </li> <li>
 *
 * A confirmation prompt to send to the user to confirm an intent. For example, "Shall I order your
 *
 * pizza?> </li> <li>
 *
 * A conclusion statement to send to the user after the intent is fulfilled. For example, "I ordered your
 *
 * pizza.> </li> <li>
 *
 * A follow-up prompt that asks the user for additional activity. For example, "Do you want a drink with your
 */
CreateIntentResponse * LexModelsV2Client::createIntent(const CreateIntentRequest &request)
{
    return qobject_cast<CreateIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new resource policy with the specified policy
 */
CreateResourcePolicyResponse * LexModelsV2Client::createResourcePolicy(const CreateResourcePolicyRequest &request)
{
    return qobject_cast<CreateResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateResourcePolicyStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new resource policy statement to a bot or bot alias. If a resource policy exists, the statement is added to the
 * current resource policy. If a policy doesn't exist, a new policy is
 *
 * created>
 *
 * You can't create a resource policy statement that allows cross-account
 */
CreateResourcePolicyStatementResponse * LexModelsV2Client::createResourcePolicyStatement(const CreateResourcePolicyStatementRequest &request)
{
    return qobject_cast<CreateResourcePolicyStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateSlotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a slot in an intent. A slot is a variable needed to fulfill an intent. For example, an <code>OrderPizza</code>
 * intent might need slots for size, crust, and number of pizzas. For each slot, you define one or more utterances that
 * Amazon Lex uses to elicit a response from the user.
 */
CreateSlotResponse * LexModelsV2Client::createSlot(const CreateSlotRequest &request)
{
    return qobject_cast<CreateSlotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom slot
 *
 * typ>
 *
 * To create a custom slot type, specify a name for the slot type and a set of enumeration values, the values that a slot
 * of this type can assume.
 */
CreateSlotTypeResponse * LexModelsV2Client::createSlotType(const CreateSlotTypeRequest &request)
{
    return qobject_cast<CreateSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * CreateUploadUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a pre-signed S3 write URL that you use to upload the zip archive when importing a bot or a bot locale.
 */
CreateUploadUrlResponse * LexModelsV2Client::createUploadUrl(const CreateUploadUrlRequest &request)
{
    return qobject_cast<CreateUploadUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all versions of a bot, including the <code>Draft</code> version. To delete a specific version, use the
 * <code>DeleteBotVersion</code>
 *
 * operation>
 *
 * When you delete a bot, all of the resources contained in the bot are also deleted. Deleting a bot removes all locales,
 * intents, slot, and slot types defined for the
 *
 * bot>
 *
 * If a bot has an alias, the <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code> exception. If
 * you want to delete the bot and the alias, set the <code>skipResourceInUseCheck</code> parameter to
 */
DeleteBotResponse * LexModelsV2Client::deleteBot(const DeleteBotRequest &request)
{
    return qobject_cast<DeleteBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified bot
 */
DeleteBotAliasResponse * LexModelsV2Client::deleteBotAlias(const DeleteBotAliasRequest &request)
{
    return qobject_cast<DeleteBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteBotLocaleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a locale from a
 *
 * bot>
 *
 * When you delete a locale, all intents, slots, and slot types defined for the locale are also
 */
DeleteBotLocaleResponse * LexModelsV2Client::deleteBotLocale(const DeleteBotLocaleRequest &request)
{
    return qobject_cast<DeleteBotLocaleResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteBotVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific version of a bot. To delete all version of a bot, use the <a
 * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DeleteBot.html">DeleteBot</a>
 */
DeleteBotVersionResponse * LexModelsV2Client::deleteBotVersion(const DeleteBotVersionRequest &request)
{
    return qobject_cast<DeleteBotVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteCustomVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a custom vocabulary from the specified locale in the specified
 */
DeleteCustomVocabularyResponse * LexModelsV2Client::deleteCustomVocabulary(const DeleteCustomVocabularyRequest &request)
{
    return qobject_cast<DeleteCustomVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a previous export and the associated files stored in an S3
 */
DeleteExportResponse * LexModelsV2Client::deleteExport(const DeleteExportRequest &request)
{
    return qobject_cast<DeleteExportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a previous import and the associated file stored in an S3
 */
DeleteImportResponse * LexModelsV2Client::deleteImport(const DeleteImportRequest &request)
{
    return qobject_cast<DeleteImportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified
 *
 * intent>
 *
 * Deleting an intent also deletes the slots associated with the
 */
DeleteIntentResponse * LexModelsV2Client::deleteIntent(const DeleteIntentRequest &request)
{
    return qobject_cast<DeleteIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an existing policy from a bot or bot alias. If the resource doesn't have a policy attached, Amazon Lex returns
 * an
 */
DeleteResourcePolicyResponse * LexModelsV2Client::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteResourcePolicyStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a policy statement from a resource policy. If you delete the last statement from a policy, the policy is
 * deleted. If you specify a statement ID that doesn't exist in the policy, or if the bot or bot alias doesn't have a
 * policy attached, Amazon Lex returns an
 */
DeleteResourcePolicyStatementResponse * LexModelsV2Client::deleteResourcePolicyStatement(const DeleteResourcePolicyStatementRequest &request)
{
    return qobject_cast<DeleteResourcePolicyStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteSlotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified slot from an
 */
DeleteSlotResponse * LexModelsV2Client::deleteSlot(const DeleteSlotRequest &request)
{
    return qobject_cast<DeleteSlotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a slot type from a bot
 *
 * locale>
 *
 * If a slot is using the slot type, Amazon Lex throws a <code>ResourceInUseException</code> exception. To avoid the
 * exception, set the <code>skipResourceInUseCheck</code> parameter to
 */
DeleteSlotTypeResponse * LexModelsV2Client::deleteSlotType(const DeleteSlotTypeRequest &request)
{
    return qobject_cast<DeleteSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DeleteUtterancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes stored
 *
 * utterances>
 *
 * Amazon Lex stores the utterances that users send to your bot. Utterances are stored for 15 days for use with the <a
 * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListAggregatedUtterances.html">ListAggregatedUtterances</a>
 * operation, and then stored indefinitely for use in improving the ability of your bot to respond to user
 *
 * input.>
 *
 * Use the <code>DeleteUtterances</code> operation to manually delete utterances for a specific session. When you use the
 * <code>DeleteUtterances</code> operation, utterances stored for improving your bot's ability to respond to user input are
 * deleted immediately. Utterances stored for use with the <code>ListAggregatedUtterances</code> operation are deleted
 * after 15
 */
DeleteUtterancesResponse * LexModelsV2Client::deleteUtterances(const DeleteUtterancesRequest &request)
{
    return qobject_cast<DeleteUtterancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides metadata information about a bot.
 */
DescribeBotResponse * LexModelsV2Client::describeBot(const DescribeBotRequest &request)
{
    return qobject_cast<DescribeBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a specific bot
 */
DescribeBotAliasResponse * LexModelsV2Client::describeBotAlias(const DescribeBotAliasRequest &request)
{
    return qobject_cast<DescribeBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeBotLocaleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings that a bot has for a specific locale.
 */
DescribeBotLocaleResponse * LexModelsV2Client::describeBotLocale(const DescribeBotLocaleRequest &request)
{
    return qobject_cast<DescribeBotLocaleResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeBotRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides metadata information about a bot recommendation. This information will enable you to get a description on the
 * request inputs, to download associated transcripts after processing is complete, and to download intents and slot-types
 * generated by the bot
 */
DescribeBotRecommendationResponse * LexModelsV2Client::describeBotRecommendation(const DescribeBotRecommendationRequest &request)
{
    return qobject_cast<DescribeBotRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeBotVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides metadata about a version of a
 */
DescribeBotVersionResponse * LexModelsV2Client::describeBotVersion(const DescribeBotVersionRequest &request)
{
    return qobject_cast<DescribeBotVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeCustomVocabularyMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides metadata information about a custom
 */
DescribeCustomVocabularyMetadataResponse * LexModelsV2Client::describeCustomVocabularyMetadata(const DescribeCustomVocabularyMetadataRequest &request)
{
    return qobject_cast<DescribeCustomVocabularyMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific
 */
DescribeExportResponse * LexModelsV2Client::describeExport(const DescribeExportRequest &request)
{
    return qobject_cast<DescribeExportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific
 */
DescribeImportResponse * LexModelsV2Client::describeImport(const DescribeImportRequest &request)
{
    return qobject_cast<DescribeImportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about an
 */
DescribeIntentResponse * LexModelsV2Client::describeIntent(const DescribeIntentRequest &request)
{
    return qobject_cast<DescribeIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the resource policy and policy revision for a bot or bot
 */
DescribeResourcePolicyResponse * LexModelsV2Client::describeResourcePolicy(const DescribeResourcePolicyRequest &request)
{
    return qobject_cast<DescribeResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeSlotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets metadata information about a
 */
DescribeSlotResponse * LexModelsV2Client::describeSlot(const DescribeSlotRequest &request)
{
    return qobject_cast<DescribeSlotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * DescribeSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets metadata information about a slot
 */
DescribeSlotTypeResponse * LexModelsV2Client::describeSlotType(const DescribeSlotTypeRequest &request)
{
    return qobject_cast<DescribeSlotTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListAggregatedUtterancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of utterances that users have sent to the
 *
 * bot>
 *
 * Utterances are aggregated by the text of the utterance. For example, all instances where customers used the phrase "I
 * want to order pizza" are aggregated into the same line in the
 *
 * response>
 *
 * You can see both detected utterances and missed utterances. A detected utterance is where the bot properly recognized
 * the utterance and activated the associated intent. A missed utterance was not recognized by the bot and didn't activate
 * an
 *
 * intent>
 *
 * Utterances can be aggregated for a bot alias or for a bot version, but not both at the same
 *
 * time>
 *
 * Utterances statistics are not generated under the following
 *
 * conditions> <ul> <li>
 *
 * The <code>childDirected</code> field was set to true when the bot was
 *
 * created> </li> <li>
 *
 * You are using slot obfuscation with one or more
 *
 * slots> </li> <li>
 *
 * You opted out of participating in improving Amazon
 */
ListAggregatedUtterancesResponse * LexModelsV2Client::listAggregatedUtterances(const ListAggregatedUtterancesRequest &request)
{
    return qobject_cast<ListAggregatedUtterancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBotAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of aliases for the specified
 */
ListBotAliasesResponse * LexModelsV2Client::listBotAliases(const ListBotAliasesRequest &request)
{
    return qobject_cast<ListBotAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBotLocalesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of locales for the specified
 */
ListBotLocalesResponse * LexModelsV2Client::listBotLocales(const ListBotLocalesRequest &request)
{
    return qobject_cast<ListBotLocalesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBotRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list of bot recommendations that meet the specified
 */
ListBotRecommendationsResponse * LexModelsV2Client::listBotRecommendations(const ListBotRecommendationsRequest &request)
{
    return qobject_cast<ListBotRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBotVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about all of the versions of a
 *
 * bot>
 *
 * The <code>ListBotVersions</code> operation returns a summary of each version of a bot. For example, if a bot has three
 * numbered versions, the <code>ListBotVersions</code> operation returns for summaries, one for each numbered version and
 * one for the <code>DRAFT</code>
 *
 * version>
 *
 * The <code>ListBotVersions</code> operation always returns at least one version, the <code>DRAFT</code>
 */
ListBotVersionsResponse * LexModelsV2Client::listBotVersions(const ListBotVersionsRequest &request)
{
    return qobject_cast<ListBotVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of available
 */
ListBotsResponse * LexModelsV2Client::listBots(const ListBotsRequest &request)
{
    return qobject_cast<ListBotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBuiltInIntentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of built-in intents provided by Amazon Lex that you can use in your bot.
 *
 * </p
 *
 * To use a built-in intent as a the base for your own intent, include the built-in intent signature in the
 * <code>parentIntentSignature</code> parameter when you call the <code>CreateIntent</code> operation. For more
 * information, see <a
 */
ListBuiltInIntentsResponse * LexModelsV2Client::listBuiltInIntents(const ListBuiltInIntentsRequest &request)
{
    return qobject_cast<ListBuiltInIntentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListBuiltInSlotTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of built-in slot types that meet the specified
 */
ListBuiltInSlotTypesResponse * LexModelsV2Client::listBuiltInSlotTypes(const ListBuiltInSlotTypesRequest &request)
{
    return qobject_cast<ListBuiltInSlotTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the exports for a bot, bot locale, or custom vocabulary. Exports are kept in the list for 7
 */
ListExportsResponse * LexModelsV2Client::listExports(const ListExportsRequest &request)
{
    return qobject_cast<ListExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListImportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the imports for a bot, bot locale, or custom vocabulary. Imports are kept in the list for 7
 */
ListImportsResponse * LexModelsV2Client::listImports(const ListImportsRequest &request)
{
    return qobject_cast<ListImportsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListIntentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list of intents that meet the specified
 */
ListIntentsResponse * LexModelsV2Client::listIntents(const ListIntentsRequest &request)
{
    return qobject_cast<ListIntentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListRecommendedIntentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of recommended intents provided by the bot recommendation that you can use in your
 */
ListRecommendedIntentsResponse * LexModelsV2Client::listRecommendedIntents(const ListRecommendedIntentsRequest &request)
{
    return qobject_cast<ListRecommendedIntentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListSlotTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of slot types that match the specified
 */
ListSlotTypesResponse * LexModelsV2Client::listSlotTypes(const ListSlotTypesRequest &request)
{
    return qobject_cast<ListSlotTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListSlotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of slots that match the specified
 */
ListSlotsResponse * LexModelsV2Client::listSlots(const ListSlotsRequest &request)
{
    return qobject_cast<ListSlotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of tags associated with a resource. Only bots, bot aliases, and bot channels can have tags associated with
 */
ListTagsForResourceResponse * LexModelsV2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * SearchAssociatedTranscriptsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Search for associated transcripts that meet the specified
 */
SearchAssociatedTranscriptsResponse * LexModelsV2Client::searchAssociatedTranscripts(const SearchAssociatedTranscriptsRequest &request)
{
    return qobject_cast<SearchAssociatedTranscriptsResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * StartBotRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this to provide your transcript data, and to start the bot recommendation
 */
StartBotRecommendationResponse * LexModelsV2Client::startBotRecommendation(const StartBotRecommendationRequest &request)
{
    return qobject_cast<StartBotRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * StartImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts importing a bot, bot locale, or custom vocabulary from a zip archive that you uploaded to an S3
 */
StartImportResponse * LexModelsV2Client::startImport(const StartImportRequest &request)
{
    return qobject_cast<StartImportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * StopBotRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stop an already running Bot Recommendation
 */
StopBotRecommendationResponse * LexModelsV2Client::stopBotRecommendation(const StopBotRecommendationRequest &request)
{
    return qobject_cast<StopBotRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified resource. If a tag key already exists, the existing value is replaced with the
 * new
 */
TagResourceResponse * LexModelsV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a bot, bot alias, or bot
 */
UntagResourceResponse * LexModelsV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing bot.
 */
UpdateBotResponse * LexModelsV2Client::updateBot(const UpdateBotRequest &request)
{
    return qobject_cast<UpdateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateBotAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing bot
 */
UpdateBotAliasResponse * LexModelsV2Client::updateBotAlias(const UpdateBotAliasRequest &request)
{
    return qobject_cast<UpdateBotAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateBotLocaleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings that a bot has for a specific
 */
UpdateBotLocaleResponse * LexModelsV2Client::updateBotLocale(const UpdateBotLocaleRequest &request)
{
    return qobject_cast<UpdateBotLocaleResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateBotRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing bot recommendation
 */
UpdateBotRecommendationResponse * LexModelsV2Client::updateBotRecommendation(const UpdateBotRecommendationRequest &request)
{
    return qobject_cast<UpdateBotRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the password used to protect an export zip
 *
 * archive>
 *
 * The password is not required. If you don't supply a password, Amazon Lex generates a zip file that is not protected by a
 * password. This is the archive that is available at the pre-signed S3 URL provided by the <a
 * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
 */
UpdateExportResponse * LexModelsV2Client::updateExport(const UpdateExportRequest &request)
{
    return qobject_cast<UpdateExportResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateIntentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for an
 */
UpdateIntentResponse * LexModelsV2Client::updateIntent(const UpdateIntentRequest &request)
{
    return qobject_cast<UpdateIntentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the existing resource policy for a bot or bot alias with a new one. If the policy doesn't exist, Amazon Lex
 * returns an
 */
UpdateResourcePolicyResponse * LexModelsV2Client::updateResourcePolicy(const UpdateResourcePolicyRequest &request)
{
    return qobject_cast<UpdateResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateSlotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for a
 */
UpdateSlotResponse * LexModelsV2Client::updateSlot(const UpdateSlotRequest &request)
{
    return qobject_cast<UpdateSlotResponse *>(send(request));
}

/*!
 * Sends \a request to the LexModelsV2Client service, and returns a pointer to an
 * UpdateSlotTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing slot
 */
UpdateSlotTypeResponse * LexModelsV2Client::updateSlotType(const UpdateSlotTypeRequest &request)
{
    return qobject_cast<UpdateSlotTypeResponse *>(send(request));
}

/*!
 * \class QtAws::LexModelsV2::LexModelsV2ClientPrivate
 * \brief The LexModelsV2ClientPrivate class provides private implementation for LexModelsV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a LexModelsV2ClientPrivate object with public implementation \a q.
 */
LexModelsV2ClientPrivate::LexModelsV2ClientPrivate(LexModelsV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LexModelsV2
} // namespace QtAws
