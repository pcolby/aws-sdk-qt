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
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
