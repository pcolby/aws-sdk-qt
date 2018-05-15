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

#include "batchdetectdominantlanguageresponse.h"
#include "batchdetectdominantlanguageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageResponse
 * \brief The BatchDetectDominantLanguageResponse class provides an interace for Comprehend BatchDetectDominantLanguage responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectDominantLanguage
 */

/*!
 * Constructs a BatchDetectDominantLanguageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectDominantLanguageResponse::BatchDetectDominantLanguageResponse(
        const BatchDetectDominantLanguageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectDominantLanguageResponsePrivate(this), parent)
{
    setRequest(new BatchDetectDominantLanguageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectDominantLanguageRequest * BatchDetectDominantLanguageResponse::request() const
{
    Q_D(const BatchDetectDominantLanguageResponse);
    return static_cast<const BatchDetectDominantLanguageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectDominantLanguage \a response.
 */
void BatchDetectDominantLanguageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectDominantLanguageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectDominantLanguageResponsePrivate
 * \brief The BatchDetectDominantLanguageResponsePrivate class provides private implementation for BatchDetectDominantLanguageResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectDominantLanguageResponsePrivate object with public implementation \a q.
 */
BatchDetectDominantLanguageResponsePrivate::BatchDetectDominantLanguageResponsePrivate(
    BatchDetectDominantLanguageResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectDominantLanguage response element from \a xml.
 */
void BatchDetectDominantLanguageResponsePrivate::parseBatchDetectDominantLanguageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectDominantLanguageResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
