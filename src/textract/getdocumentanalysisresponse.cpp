// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
