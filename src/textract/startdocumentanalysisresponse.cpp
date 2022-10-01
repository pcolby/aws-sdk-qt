// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
