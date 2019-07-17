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

#include "detectkeyphrasesresponse.h"
#include "detectkeyphrasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectKeyPhrasesResponse
 * \brief The DetectKeyPhrasesResponse class provides an interace for Comprehend DetectKeyPhrases responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectKeyPhrases
 */

/*!
 * Constructs a DetectKeyPhrasesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectKeyPhrasesResponse::DetectKeyPhrasesResponse(
        const DetectKeyPhrasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectKeyPhrasesResponsePrivate(this), parent)
{
    setRequest(new DetectKeyPhrasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectKeyPhrasesRequest * DetectKeyPhrasesResponse::request() const
{
    Q_D(const DetectKeyPhrasesResponse);
    return static_cast<const DetectKeyPhrasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectKeyPhrases \a response.
 */
void DetectKeyPhrasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectKeyPhrasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectKeyPhrasesResponsePrivate
 * \brief The DetectKeyPhrasesResponsePrivate class provides private implementation for DetectKeyPhrasesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectKeyPhrasesResponsePrivate object with public implementation \a q.
 */
DetectKeyPhrasesResponsePrivate::DetectKeyPhrasesResponsePrivate(
    DetectKeyPhrasesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectKeyPhrases response element from \a xml.
 */
void DetectKeyPhrasesResponsePrivate::parseDetectKeyPhrasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectKeyPhrasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
