// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectdominantlanguageresponse.h"
#include "detectdominantlanguageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectDominantLanguageResponse
 * \brief The DetectDominantLanguageResponse class provides an interace for Comprehend DetectDominantLanguage responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectDominantLanguage
 */

/*!
 * Constructs a DetectDominantLanguageResponse object for \a reply to \a request, with parent \a parent.
 */
DetectDominantLanguageResponse::DetectDominantLanguageResponse(
        const DetectDominantLanguageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectDominantLanguageResponsePrivate(this), parent)
{
    setRequest(new DetectDominantLanguageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectDominantLanguageRequest * DetectDominantLanguageResponse::request() const
{
    Q_D(const DetectDominantLanguageResponse);
    return static_cast<const DetectDominantLanguageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectDominantLanguage \a response.
 */
void DetectDominantLanguageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectDominantLanguageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectDominantLanguageResponsePrivate
 * \brief The DetectDominantLanguageResponsePrivate class provides private implementation for DetectDominantLanguageResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectDominantLanguageResponsePrivate object with public implementation \a q.
 */
DetectDominantLanguageResponsePrivate::DetectDominantLanguageResponsePrivate(
    DetectDominantLanguageResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectDominantLanguage response element from \a xml.
 */
void DetectDominantLanguageResponsePrivate::parseDetectDominantLanguageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectDominantLanguageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
