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

#include "getdocumenttextdetectionresponse.h"
#include "getdocumenttextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionResponse
 * \brief The GetDocumentTextDetectionResponse class provides an interace for Textract GetDocumentTextDetection responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getDocumentTextDetection
 */

/*!
 * Constructs a GetDocumentTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentTextDetectionResponse::GetDocumentTextDetectionResponse(
        const GetDocumentTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new GetDocumentTextDetectionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentTextDetectionRequest * GetDocumentTextDetectionResponse::request() const
{
    Q_D(const GetDocumentTextDetectionResponse);
    return static_cast<const GetDocumentTextDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract GetDocumentTextDetection \a response.
 */
void GetDocumentTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::GetDocumentTextDetectionResponsePrivate
 * \brief The GetDocumentTextDetectionResponsePrivate class provides private implementation for GetDocumentTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetDocumentTextDetectionResponsePrivate object with public implementation \a q.
 */
GetDocumentTextDetectionResponsePrivate::GetDocumentTextDetectionResponsePrivate(
    GetDocumentTextDetectionResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract GetDocumentTextDetection response element from \a xml.
 */
void GetDocumentTextDetectionResponsePrivate::parseGetDocumentTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
