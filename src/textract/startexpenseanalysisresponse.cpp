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
