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

#include "analyzedocumentresponse.h"
#include "analyzedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeDocumentResponse
 * \brief The AnalyzeDocumentResponse class provides an interace for Textract AnalyzeDocument responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeDocument
 */

/*!
 * Constructs a AnalyzeDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
AnalyzeDocumentResponse::AnalyzeDocumentResponse(
        const AnalyzeDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new AnalyzeDocumentResponsePrivate(this), parent)
{
    setRequest(new AnalyzeDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AnalyzeDocumentRequest * AnalyzeDocumentResponse::request() const
{
    Q_D(const AnalyzeDocumentResponse);
    return static_cast<const AnalyzeDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract AnalyzeDocument \a response.
 */
void AnalyzeDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AnalyzeDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::AnalyzeDocumentResponsePrivate
 * \brief The AnalyzeDocumentResponsePrivate class provides private implementation for AnalyzeDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeDocumentResponsePrivate object with public implementation \a q.
 */
AnalyzeDocumentResponsePrivate::AnalyzeDocumentResponsePrivate(
    AnalyzeDocumentResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract AnalyzeDocument response element from \a xml.
 */
void AnalyzeDocumentResponsePrivate::parseAnalyzeDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AnalyzeDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
