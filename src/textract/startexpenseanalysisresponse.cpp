// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startexpenseanalysisresponse.h"
#include "startexpenseanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::StartExpenseAnalysisResponse
 * \brief The StartExpenseAnalysisResponse class provides an interace for Textract StartExpenseAnalysis responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::startExpenseAnalysis
 */

/*!
 * Constructs a StartExpenseAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
StartExpenseAnalysisResponse::StartExpenseAnalysisResponse(
        const StartExpenseAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new StartExpenseAnalysisResponsePrivate(this), parent)
{
    setRequest(new StartExpenseAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartExpenseAnalysisRequest * StartExpenseAnalysisResponse::request() const
{
    Q_D(const StartExpenseAnalysisResponse);
    return static_cast<const StartExpenseAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract StartExpenseAnalysis \a response.
 */
void StartExpenseAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartExpenseAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::StartExpenseAnalysisResponsePrivate
 * \brief The StartExpenseAnalysisResponsePrivate class provides private implementation for StartExpenseAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a StartExpenseAnalysisResponsePrivate object with public implementation \a q.
 */
StartExpenseAnalysisResponsePrivate::StartExpenseAnalysisResponsePrivate(
    StartExpenseAnalysisResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract StartExpenseAnalysis response element from \a xml.
 */
void StartExpenseAnalysisResponsePrivate::parseStartExpenseAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExpenseAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
