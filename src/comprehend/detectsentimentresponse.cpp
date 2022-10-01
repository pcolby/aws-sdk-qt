// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
