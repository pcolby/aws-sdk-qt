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

#include "startdocumenttextdetectionresponse.h"
#include "startdocumenttextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionResponse
 * \brief The StartDocumentTextDetectionResponse class provides an interace for Textract StartDocumentTextDetection responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startDocumentTextDetection
 */

/*!
 * Constructs a StartDocumentTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartDocumentTextDetectionResponse::StartDocumentTextDetectionResponse(
        const StartDocumentTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new StartDocumentTextDetectionResponsePrivate(this), parent)
{
    setRequest(new StartDocumentTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDocumentTextDetectionRequest * StartDocumentTextDetectionResponse::request() const
{
    return static_cast<const StartDocumentTextDetectionRequest *>(TextractResponse::request());
}

/*!
 * \reimp
 * Parses a successful Textract StartDocumentTextDetection \a response.
 */
void StartDocumentTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDocumentTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::StartDocumentTextDetectionResponsePrivate
 * \brief The StartDocumentTextDetectionResponsePrivate class provides private implementation for StartDocumentTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartDocumentTextDetectionResponsePrivate object with public implementation \a q.
 */
StartDocumentTextDetectionResponsePrivate::StartDocumentTextDetectionResponsePrivate(
    StartDocumentTextDetectionResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract StartDocumentTextDetection response element from \a xml.
 */
void StartDocumentTextDetectionResponsePrivate::parseStartDocumentTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDocumentTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
