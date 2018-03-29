/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pollyclient.h"
#include "pollyclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace Polly {

/**
 * @class  PollyClient
 *
 * @brief  Client for Amazon Polly
 *
 * Amazon Polly is a web service that makes it easy to synthesize speech from
 *
 * text>
 *
 * The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 * Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 * for your application
 */

/**
 * @brief  Constructs a new PollyClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
PollyClient::PollyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PollyClientPrivate(this), parent)
{
    Q_D(PollyClient);
    d->apiVersion = QStringLiteral("2016-06-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("polly");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Polly");
    d->serviceName = QStringLiteral("polly");
}

/**
 * @brief  Constructs a new PollyClient object.
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
PollyClient::PollyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PollyClientPrivate(this), parent)
{
    Q_D(PollyClient);
    d->apiVersion = QStringLiteral("2016-06-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("polly");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Polly");
    d->serviceName = QStringLiteral("polly");
}

/**
 * Deletes the specified pronunciation lexicon stored in an AWS Region. A lexicon which has been deleted is not available
 * for speech synthesis, nor is it possible to retrieve it using either the <code>GetLexicon</code> or
 * <code>ListLexicon</code>
 *
 * APIs>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLexiconResponse * PollyClient::deleteLexicon(const DeleteLexiconRequest &request)
{
    return qobject_cast<DeleteLexiconResponse *>(send(request));
}

/**
 * Returns the list of voices that are available for use when requesting speech synthesis. Each voice speaks a specified
 * language, is either male or female, and is identified by an ID, which is the ASCII version of the voice name.
 *
 * </p
 *
 * When synthesizing speech ( <code>SynthesizeSpeech</code> ), you provide the voice ID for the voice you want from the
 * list of voices returned by
 *
 * <code>DescribeVoices</code>>
 *
 * For example, you want your news reader application to read news in a specific language, but giving a user the option to
 * choose the voice. Using the <code>DescribeVoices</code> operation you can provide the user with a list of available
 * voices to select
 *
 * from>
 *
 * You can optionally specify a language code to filter the available voices. For example, if you specify
 * <code>en-US</code>, the operation returns a list of all available US English voices.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>polly:DescribeVoices</code>
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeVoicesResponse * PollyClient::describeVoices(const DescribeVoicesRequest &request)
{
    return qobject_cast<DescribeVoicesResponse *>(send(request));
}

/**
 * Returns the content of the specified pronunciation lexicon stored in an AWS Region. For more information, see <a
 * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLexiconResponse * PollyClient::getLexicon(const GetLexiconRequest &request)
{
    return qobject_cast<GetLexiconResponse *>(send(request));
}

/**
 * Returns a list of pronunciation lexicons stored in an AWS Region. For more information, see <a
 * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLexiconsResponse * PollyClient::listLexicons(const ListLexiconsRequest &request)
{
    return qobject_cast<ListLexiconsResponse *>(send(request));
}

/**
 * Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same name already exists in the region, it is
 * overwritten by the new lexicon. Lexicon operations have eventual consistency, therefore, it might take some time before
 * the lexicon is available to the SynthesizeSpeech
 *
 * operation>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutLexiconResponse * PollyClient::putLexicon(const PutLexiconRequest &request)
{
    return qobject_cast<PutLexiconResponse *>(send(request));
}

/**
 * Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input must be valid, well-formed SSML. Some
 * alphabets might not be available with all the voices (for example, Cyrillic might not be read at all by English voices)
 * unless phoneme mapping is used. For more information, see <a
 * href="http://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How it
 *
 * @param  request Request to send to Amazon Polly.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SynthesizeSpeechResponse * PollyClient::synthesizeSpeech(const SynthesizeSpeechRequest &request)
{
    return qobject_cast<SynthesizeSpeechResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  PollyClientPrivate
 *
 * @brief  Private implementation for PollyClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollyClientPrivate object.
 *
 * @param  q  Pointer to this object's public PollyClient instance.
 */
PollyClientPrivate::PollyClientPrivate(PollyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Polly
} // namespace QtAws
