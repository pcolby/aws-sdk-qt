// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detecttargetedsentimentresponse.h"
#include "detecttargetedsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentResponse
 * \brief The DetectTargetedSentimentResponse class provides an interace for Comprehend DetectTargetedSentiment responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectTargetedSentiment
 */

/*!
 * Constructs a DetectTargetedSentimentResponse object for \a reply to \a request, with parent \a parent.
 */
DetectTargetedSentimentResponse::DetectTargetedSentimentResponse(
        const DetectTargetedSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectTargetedSentimentResponsePrivate(this), parent)
{
    setRequest(new DetectTargetedSentimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectTargetedSentimentRequest * DetectTargetedSentimentResponse::request() const
{
    Q_D(const DetectTargetedSentimentResponse);
    return static_cast<const DetectTargetedSentimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectTargetedSentiment \a response.
 */
void DetectTargetedSentimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectTargetedSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentResponsePrivate
 * \brief The DetectTargetedSentimentResponsePrivate class provides private implementation for DetectTargetedSentimentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectTargetedSentimentResponsePrivate object with public implementation \a q.
 */
DetectTargetedSentimentResponsePrivate::DetectTargetedSentimentResponsePrivate(
    DetectTargetedSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectTargetedSentiment response element from \a xml.
 */
void DetectTargetedSentimentResponsePrivate::parseDetectTargetedSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectTargetedSentimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
