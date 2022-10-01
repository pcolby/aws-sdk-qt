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

#include "getexpenseanalysisresponse.h"
#include "getexpenseanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::GetExpenseAnalysisResponse
 * \brief The GetExpenseAnalysisResponse class provides an interace for Textract GetExpenseAnalysis responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::getExpenseAnalysis
 */

/*!
 * Constructs a GetExpenseAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
GetExpenseAnalysisResponse::GetExpenseAnalysisResponse(
        const GetExpenseAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new GetExpenseAnalysisResponsePrivate(this), parent)
{
    setRequest(new GetExpenseAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExpenseAnalysisRequest * GetExpenseAnalysisResponse::request() const
{
    Q_D(const GetExpenseAnalysisResponse);
    return static_cast<const GetExpenseAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract GetExpenseAnalysis \a response.
 */
void GetExpenseAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExpenseAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::GetExpenseAnalysisResponsePrivate
 * \brief The GetExpenseAnalysisResponsePrivate class provides private implementation for GetExpenseAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a GetExpenseAnalysisResponsePrivate object with public implementation \a q.
 */
GetExpenseAnalysisResponsePrivate::GetExpenseAnalysisResponsePrivate(
    GetExpenseAnalysisResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract GetExpenseAnalysis response element from \a xml.
 */
void GetExpenseAnalysisResponsePrivate::parseGetExpenseAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExpenseAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
