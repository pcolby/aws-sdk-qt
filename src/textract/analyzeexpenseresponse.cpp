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

#include "analyzeexpenseresponse.h"
#include "analyzeexpenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeExpenseResponse
 * \brief The AnalyzeExpenseResponse class provides an interace for Textract AnalyzeExpense responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeExpense
 */

/*!
 * Constructs a AnalyzeExpenseResponse object for \a reply to \a request, with parent \a parent.
 */
AnalyzeExpenseResponse::AnalyzeExpenseResponse(
        const AnalyzeExpenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new AnalyzeExpenseResponsePrivate(this), parent)
{
    setRequest(new AnalyzeExpenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AnalyzeExpenseRequest * AnalyzeExpenseResponse::request() const
{
    Q_D(const AnalyzeExpenseResponse);
    return static_cast<const AnalyzeExpenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract AnalyzeExpense \a response.
 */
void AnalyzeExpenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AnalyzeExpenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::AnalyzeExpenseResponsePrivate
 * \brief The AnalyzeExpenseResponsePrivate class provides private implementation for AnalyzeExpenseResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeExpenseResponsePrivate object with public implementation \a q.
 */
AnalyzeExpenseResponsePrivate::AnalyzeExpenseResponsePrivate(
    AnalyzeExpenseResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract AnalyzeExpense response element from \a xml.
 */
void AnalyzeExpenseResponsePrivate::parseAnalyzeExpenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AnalyzeExpenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
