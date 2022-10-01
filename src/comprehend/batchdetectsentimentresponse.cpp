// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdetectsentimentresponse.h"
#include "batchdetectsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectSentimentResponse
 * \brief The BatchDetectSentimentResponse class provides an interace for Comprehend BatchDetectSentiment responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectSentiment
 */

/*!
 * Constructs a BatchDetectSentimentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectSentimentResponse::BatchDetectSentimentResponse(
        const BatchDetectSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectSentimentResponsePrivate(this), parent)
{
    setRequest(new BatchDetectSentimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectSentimentRequest * BatchDetectSentimentResponse::request() const
{
    Q_D(const BatchDetectSentimentResponse);
    return static_cast<const BatchDetectSentimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectSentiment \a response.
 */
void BatchDetectSentimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectSentimentResponsePrivate
 * \brief The BatchDetectSentimentResponsePrivate class provides private implementation for BatchDetectSentimentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectSentimentResponsePrivate object with public implementation \a q.
 */
BatchDetectSentimentResponsePrivate::BatchDetectSentimentResponsePrivate(
    BatchDetectSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectSentiment response element from \a xml.
 */
void BatchDetectSentimentResponsePrivate::parseBatchDetectSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectSentimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
