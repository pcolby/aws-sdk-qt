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

#include "pollyclient.h"
#include "pollyclient_p.h"

#include "core/awssignaturev4.h"
#include "deletelexiconrequest.h"
#include "deletelexiconresponse.h"
#include "describevoicesrequest.h"
#include "describevoicesresponse.h"
#include "getlexiconrequest.h"
#include "getlexiconresponse.h"
#include "getspeechsynthesistaskrequest.h"
#include "getspeechsynthesistaskresponse.h"
#include "listlexiconsrequest.h"
#include "listlexiconsresponse.h"
#include "listspeechsynthesistasksrequest.h"
#include "listspeechsynthesistasksresponse.h"
#include "putlexiconrequest.h"
#include "putlexiconresponse.h"
#include "startspeechsynthesistaskrequest.h"
#include "startspeechsynthesistaskresponse.h"
#include "synthesizespeechrequest.h"
#include "synthesizespeechresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Polly
 * \brief Contains classess for accessing Amazon Polly.
 *
 * \inmodule QtAwsPolly
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PollyClient
 * \brief The PollyClient class provides access to the Amazon Polly service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 */

/*!
 * \brief Constructs a PollyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
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

/*!
 * \overload PollyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * DeleteLexiconResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified pronunciation lexicon stored in an AWS Region. A lexicon which has been deleted is not available
 * for speech synthesis, nor is it possible to retrieve it using either the <code>GetLexicon</code> or
 * <code>ListLexicon</code>
 *
 * APIs>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 */
DeleteLexiconResponse * PollyClient::deleteLexicon(const DeleteLexiconRequest &request)
{
    return qobject_cast<DeleteLexiconResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * DescribeVoicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeVoicesResponse * PollyClient::describeVoices(const DescribeVoicesRequest &request)
{
    return qobject_cast<DescribeVoicesResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * GetLexiconResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the content of the specified pronunciation lexicon stored in an AWS Region. For more information, see <a
 * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 */
GetLexiconResponse * PollyClient::getLexicon(const GetLexiconRequest &request)
{
    return qobject_cast<GetLexiconResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * GetSpeechSynthesisTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a specific SpeechSynthesisTask object based on its TaskID. This object contains information about the given
 * speech synthesis task, including the status of the task, and a link to the S3 bucket containing the output of the
 */
GetSpeechSynthesisTaskResponse * PollyClient::getSpeechSynthesisTask(const GetSpeechSynthesisTaskRequest &request)
{
    return qobject_cast<GetSpeechSynthesisTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * ListLexiconsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of pronunciation lexicons stored in an AWS Region. For more information, see <a
 * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 */
ListLexiconsResponse * PollyClient::listLexicons(const ListLexiconsRequest &request)
{
    return qobject_cast<ListLexiconsResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * ListSpeechSynthesisTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of SpeechSynthesisTask objects ordered by their creation date. This operation can filter the tasks by
 * their status, for example, allowing users to list only tasks that are
 */
ListSpeechSynthesisTasksResponse * PollyClient::listSpeechSynthesisTasks(const ListSpeechSynthesisTasksRequest &request)
{
    return qobject_cast<ListSpeechSynthesisTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * PutLexiconResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same name already exists in the region, it is
 * overwritten by the new lexicon. Lexicon operations have eventual consistency, therefore, it might take some time before
 * the lexicon is available to the SynthesizeSpeech
 *
 * operation>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
 */
PutLexiconResponse * PollyClient::putLexicon(const PutLexiconRequest &request)
{
    return qobject_cast<PutLexiconResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * StartSpeechSynthesisTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the creation of an asynchronous synthesis task, by starting a new <code>SpeechSynthesisTask</code>. This
 * operation requires all the standard information needed for speech synthesis, plus the name of an Amazon S3 bucket for
 * the service to store the output of the synthesis task and two optional parameters (OutputS3KeyPrefix and SnsTopicArn).
 * Once the synthesis task is created, this operation will return a SpeechSynthesisTask object, which will include an
 * identifier of this task as well as the current
 */
StartSpeechSynthesisTaskResponse * PollyClient::startSpeechSynthesisTask(const StartSpeechSynthesisTaskRequest &request)
{
    return qobject_cast<StartSpeechSynthesisTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the PollyClient service, and returns a pointer to an
 * SynthesizeSpeechResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input must be valid, well-formed SSML. Some
 * alphabets might not be available with all the voices (for example, Cyrillic might not be read at all by English voices)
 * unless phoneme mapping is used. For more information, see <a
 * href="https://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How it
 */
SynthesizeSpeechResponse * PollyClient::synthesizeSpeech(const SynthesizeSpeechRequest &request)
{
    return qobject_cast<SynthesizeSpeechResponse *>(send(request));
}

/*!
 * \class QtAws::Polly::PollyClientPrivate
 * \brief The PollyClientPrivate class provides private implementation for PollyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PollyClientPrivate object with public implementation \a q.
 */
PollyClientPrivate::PollyClientPrivate(PollyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Polly
} // namespace QtAws
