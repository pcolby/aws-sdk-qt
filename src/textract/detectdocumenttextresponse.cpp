/*
    Copyright 2013-2021 Paul Colby

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

#include "detectdocumenttextresponse.h"
#include "detectdocumenttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::DetectDocumentTextResponse
 * \brief The DetectDocumentTextResponse class provides an interace for Textract DetectDocumentText responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::detectDocumentText
 */

/*!
 * Constructs a DetectDocumentTextResponse object for \a reply to \a request, with parent \a parent.
 */
DetectDocumentTextResponse::DetectDocumentTextResponse(
        const DetectDocumentTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new DetectDocumentTextResponsePrivate(this), parent)
{
    setRequest(new DetectDocumentTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectDocumentTextRequest * DetectDocumentTextResponse::request() const
{
    return static_cast<const DetectDocumentTextRequest *>(TextractResponse::request());
}

/*!
 * \reimp
 * Parses a successful Textract DetectDocumentText \a response.
 */
void DetectDocumentTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectDocumentTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::DetectDocumentTextResponsePrivate
 * \brief The DetectDocumentTextResponsePrivate class provides private implementation for DetectDocumentTextResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a DetectDocumentTextResponsePrivate object with public implementation \a q.
 */
DetectDocumentTextResponsePrivate::DetectDocumentTextResponsePrivate(
    DetectDocumentTextResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract DetectDocumentText response element from \a xml.
 */
void DetectDocumentTextResponsePrivate::parseDetectDocumentTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectDocumentTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
