// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetectkeyphrasesresponse.h"
#include "batchdetectkeyphrasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectKeyPhrasesResponse
 * \brief The BatchDetectKeyPhrasesResponse class provides an interace for Comprehend BatchDetectKeyPhrases responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectKeyPhrases
 */

/*!
 * Constructs a BatchDetectKeyPhrasesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectKeyPhrasesResponse::BatchDetectKeyPhrasesResponse(
        const BatchDetectKeyPhrasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectKeyPhrasesResponsePrivate(this), parent)
{
    setRequest(new BatchDetectKeyPhrasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectKeyPhrasesRequest * BatchDetectKeyPhrasesResponse::request() const
{
    Q_D(const BatchDetectKeyPhrasesResponse);
    return static_cast<const BatchDetectKeyPhrasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectKeyPhrases \a response.
 */
void BatchDetectKeyPhrasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectKeyPhrasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectKeyPhrasesResponsePrivate
 * \brief The BatchDetectKeyPhrasesResponsePrivate class provides private implementation for BatchDetectKeyPhrasesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectKeyPhrasesResponsePrivate object with public implementation \a q.
 */
BatchDetectKeyPhrasesResponsePrivate::BatchDetectKeyPhrasesResponsePrivate(
    BatchDetectKeyPhrasesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectKeyPhrases response element from \a xml.
 */
void BatchDetectKeyPhrasesResponsePrivate::parseBatchDetectKeyPhrasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectKeyPhrasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
