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

#include "startdocumentanalysisresponse.h"
#include "startdocumentanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartDocumentAnalysisResponse
 * \brief The StartDocumentAnalysisResponse class provides an interace for Textract StartDocumentAnalysis responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startDocumentAnalysis
 */

/*!
 * Constructs a StartDocumentAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
StartDocumentAnalysisResponse::StartDocumentAnalysisResponse(
        const StartDocumentAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new StartDocumentAnalysisResponsePrivate(this), parent)
{
    setRequest(new StartDocumentAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDocumentAnalysisRequest * StartDocumentAnalysisResponse::request() const
{
    Q_D(const StartDocumentAnalysisResponse);
    return static_cast<const StartDocumentAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract StartDocumentAnalysis \a response.
 */
void StartDocumentAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDocumentAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::StartDocumentAnalysisResponsePrivate
 * \brief The StartDocumentAnalysisResponsePrivate class provides private implementation for StartDocumentAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartDocumentAnalysisResponsePrivate object with public implementation \a q.
 */
StartDocumentAnalysisResponsePrivate::StartDocumentAnalysisResponsePrivate(
    StartDocumentAnalysisResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract StartDocumentAnalysis response element from \a xml.
 */
void StartDocumentAnalysisResponsePrivate::parseStartDocumentAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDocumentAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
