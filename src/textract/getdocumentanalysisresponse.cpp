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

#include "getdocumentanalysisresponse.h"
#include "getdocumentanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetDocumentAnalysisResponse
 * \brief The GetDocumentAnalysisResponse class provides an interace for Textract GetDocumentAnalysis responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getDocumentAnalysis
 */

/*!
 * Constructs a GetDocumentAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentAnalysisResponse::GetDocumentAnalysisResponse(
        const GetDocumentAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new GetDocumentAnalysisResponsePrivate(this), parent)
{
    setRequest(new GetDocumentAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentAnalysisRequest * GetDocumentAnalysisResponse::request() const
{
    Q_D(const GetDocumentAnalysisResponse);
    return static_cast<const GetDocumentAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract GetDocumentAnalysis \a response.
 */
void GetDocumentAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::GetDocumentAnalysisResponsePrivate
 * \brief The GetDocumentAnalysisResponsePrivate class provides private implementation for GetDocumentAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetDocumentAnalysisResponsePrivate object with public implementation \a q.
 */
GetDocumentAnalysisResponsePrivate::GetDocumentAnalysisResponsePrivate(
    GetDocumentAnalysisResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract GetDocumentAnalysis response element from \a xml.
 */
void GetDocumentAnalysisResponsePrivate::parseGetDocumentAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
