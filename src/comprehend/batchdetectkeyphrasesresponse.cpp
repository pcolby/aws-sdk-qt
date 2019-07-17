/*
    Copyright 2013-2019 Paul Colby

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
