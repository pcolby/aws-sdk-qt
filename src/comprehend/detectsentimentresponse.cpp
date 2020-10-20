/*
    Copyright 2013-2020 Paul Colby

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

#include "detectsentimentresponse.h"
#include "detectsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectSentimentResponse
 * \brief The DetectSentimentResponse class provides an interace for Comprehend DetectSentiment responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectSentiment
 */

/*!
 * Constructs a DetectSentimentResponse object for \a reply to \a request, with parent \a parent.
 */
DetectSentimentResponse::DetectSentimentResponse(
        const DetectSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectSentimentResponsePrivate(this), parent)
{
    setRequest(new DetectSentimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectSentimentRequest * DetectSentimentResponse::request() const
{
    Q_D(const DetectSentimentResponse);
    return static_cast<const DetectSentimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectSentiment \a response.
 */
void DetectSentimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectSentimentResponsePrivate
 * \brief The DetectSentimentResponsePrivate class provides private implementation for DetectSentimentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectSentimentResponsePrivate object with public implementation \a q.
 */
DetectSentimentResponsePrivate::DetectSentimentResponsePrivate(
    DetectSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectSentiment response element from \a xml.
 */
void DetectSentimentResponsePrivate::parseDetectSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectSentimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
