// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "translateclient.h"
#include "translateclient_p.h"

#include "core/awssignaturev4.h"
#include "createparalleldatarequest.h"
#include "createparalleldataresponse.h"
#include "deleteparalleldatarequest.h"
#include "deleteparalleldataresponse.h"
#include "deleteterminologyrequest.h"
#include "deleteterminologyresponse.h"
#include "describetexttranslationjobrequest.h"
#include "describetexttranslationjobresponse.h"
#include "getparalleldatarequest.h"
#include "getparalleldataresponse.h"
#include "getterminologyrequest.h"
#include "getterminologyresponse.h"
#include "importterminologyrequest.h"
#include "importterminologyresponse.h"
#include "listlanguagesrequest.h"
#include "listlanguagesresponse.h"
#include "listparalleldatarequest.h"
#include "listparalleldataresponse.h"
#include "listterminologiesrequest.h"
#include "listterminologiesresponse.h"
#include "listtexttranslationjobsrequest.h"
#include "listtexttranslationjobsresponse.h"
#include "starttexttranslationjobrequest.h"
#include "starttexttranslationjobresponse.h"
#include "stoptexttranslationjobrequest.h"
#include "stoptexttranslationjobresponse.h"
#include "translatetextrequest.h"
#include "translatetextresponse.h"
#include "updateparalleldatarequest.h"
#include "updateparalleldataresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Translate
 * \brief Contains classess for accessing Amazon Translate.
 *
 * \inmodule QtAwsTranslate
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateClient
 * \brief The TranslateClient class provides access to the Amazon Translate service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 */

/*!
 * \brief Constructs a TranslateClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranslateClient::TranslateClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * \overload TranslateClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranslateClient::TranslateClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * CreateParallelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a parallel data resource in Amazon Translate by importing an input file from Amazon S3. Parallel data files
 * contain examples that show how you want segments of text to be translated. By adding parallel data, you can influence
 * the style, tone, and word choice in your translation
 */
CreateParallelDataResponse * TranslateClient::createParallelData(const CreateParallelDataRequest &request)
{
    return qobject_cast<CreateParallelDataResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * DeleteParallelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a parallel data resource in Amazon
 */
DeleteParallelDataResponse * TranslateClient::deleteParallelData(const DeleteParallelDataRequest &request)
{
    return qobject_cast<DeleteParallelDataResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * DeleteTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A synchronous action that deletes a custom
 */
DeleteTerminologyResponse * TranslateClient::deleteTerminology(const DeleteTerminologyRequest &request)
{
    return qobject_cast<DeleteTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * DescribeTextTranslationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with an asynchronous batch translation job including name, ID, status, source and target
 * languages, input/output S3 buckets, and so
 */
DescribeTextTranslationJobResponse * TranslateClient::describeTextTranslationJob(const DescribeTextTranslationJobRequest &request)
{
    return qobject_cast<DescribeTextTranslationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * GetParallelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a parallel data
 */
GetParallelDataResponse * TranslateClient::getParallelData(const GetParallelDataRequest &request)
{
    return qobject_cast<GetParallelDataResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * GetTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a custom
 */
GetTerminologyResponse * TranslateClient::getTerminology(const GetTerminologyRequest &request)
{
    return qobject_cast<GetTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ImportTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a custom terminology, depending on whether one already exists for the given terminology name.
 * Importing a terminology with the same name as an existing one will merge the terminologies based on the chosen merge
 * strategy. The only supported merge strategy is OVERWRITE, where the imported terminology overwrites the existing
 * terminology of the same
 *
 * name>
 *
 * If you import a terminology that overwrites an existing one, the new terminology takes up to 10 minutes to fully
 * propagate. After that, translations have access to the new
 */
ImportTerminologyResponse * TranslateClient::importTerminology(const ImportTerminologyRequest &request)
{
    return qobject_cast<ImportTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ListLanguagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of languages (RFC-5646 codes and names) that Amazon Translate
 */
ListLanguagesResponse * TranslateClient::listLanguages(const ListLanguagesRequest &request)
{
    return qobject_cast<ListLanguagesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ListParallelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of your parallel data resources in Amazon
 */
ListParallelDataResponse * TranslateClient::listParallelData(const ListParallelDataRequest &request)
{
    return qobject_cast<ListParallelDataResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ListTerminologiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom terminologies associated with your
 */
ListTerminologiesResponse * TranslateClient::listTerminologies(const ListTerminologiesRequest &request)
{
    return qobject_cast<ListTerminologiesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ListTextTranslationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the batch translation jobs that you have
 */
ListTextTranslationJobsResponse * TranslateClient::listTextTranslationJobs(const ListTextTranslationJobsRequest &request)
{
    return qobject_cast<ListTextTranslationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * StartTextTranslationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous batch translation job. Batch translation jobs can be used to translate large volumes of text
 * across multiple documents at once. For more information, see
 *
 * <a>async</a>>
 *
 * Batch translation jobs can be described with the <a>DescribeTextTranslationJob</a> operation, listed with the
 * <a>ListTextTranslationJobs</a> operation, and stopped with the <a>StopTextTranslationJob</a>
 *
 * operation> <note>
 *
 * Amazon Translate does not support batch translation of multiple source languages at
 */
StartTextTranslationJobResponse * TranslateClient::startTextTranslationJob(const StartTextTranslationJobRequest &request)
{
    return qobject_cast<StartTextTranslationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * StopTextTranslationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an asynchronous batch translation job that is in
 *
 * progress>
 *
 * If the job's state is <code>IN_PROGRESS</code>, the job will be marked for termination and put into the
 * <code>STOP_REQUESTED</code> state. If the job completes before it can be stopped, it is put into the
 * <code>COMPLETED</code> state. Otherwise, the job is put into the <code>STOPPED</code>
 *
 * state>
 *
 * Asynchronous batch translation jobs are started with the <a>StartTextTranslationJob</a> operation. You can use the
 * <a>DescribeTextTranslationJob</a> or <a>ListTextTranslationJobs</a> operations to get a batch translation job's
 */
StopTextTranslationJobResponse * TranslateClient::stopTextTranslationJob(const StopTextTranslationJobRequest &request)
{
    return qobject_cast<StopTextTranslationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * TranslateTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Translates input text from the source language to the target language. For a list of available languages and language
 * codes, see
 */
TranslateTextResponse * TranslateClient::translateText(const TranslateTextRequest &request)
{
    return qobject_cast<TranslateTextResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * UpdateParallelDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a previously created parallel data resource by importing a new input file from Amazon
 */
UpdateParallelDataResponse * TranslateClient::updateParallelData(const UpdateParallelDataRequest &request)
{
    return qobject_cast<UpdateParallelDataResponse *>(send(request));
}

/*!
 * \class QtAws::Translate::TranslateClientPrivate
 * \brief The TranslateClientPrivate class provides private implementation for TranslateClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateClientPrivate object with public implementation \a q.
 */
TranslateClientPrivate::TranslateClientPrivate(TranslateClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Translate
} // namespace QtAws
