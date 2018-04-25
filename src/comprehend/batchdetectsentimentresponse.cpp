/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(BatchDetectSentimentResponse);
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
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
