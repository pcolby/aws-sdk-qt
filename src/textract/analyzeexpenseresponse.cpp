// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
