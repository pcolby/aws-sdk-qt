// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "analyzeidresponse.h"
#include "analyzeidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::AnalyzeIDResponse
 * \brief The AnalyzeIDResponse class provides an interace for Textract AnalyzeID responses.
 *
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 *
 * \sa TextractClient::analyzeID
 */

/*!
 * Constructs a AnalyzeIDResponse object for \a reply to \a request, with parent \a parent.
 */
AnalyzeIDResponse::AnalyzeIDResponse(
        const AnalyzeIDRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TextractResponse(new AnalyzeIDResponsePrivate(this), parent)
{
    setRequest(new AnalyzeIDRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AnalyzeIDRequest * AnalyzeIDResponse::request() const
{
    Q_D(const AnalyzeIDResponse);
    return static_cast<const AnalyzeIDRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Textract AnalyzeID \a response.
 */
void AnalyzeIDResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AnalyzeIDResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Textract::AnalyzeIDResponsePrivate
 * \brief The AnalyzeIDResponsePrivate class provides private implementation for AnalyzeIDResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a AnalyzeIDResponsePrivate object with public implementation \a q.
 */
AnalyzeIDResponsePrivate::AnalyzeIDResponsePrivate(
    AnalyzeIDResponse * const q) : TextractResponsePrivate(q)
{

}

/*!
 * Parses a Textract AnalyzeID response element from \a xml.
 */
void AnalyzeIDResponsePrivate::parseAnalyzeIDResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AnalyzeIDResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Textract
} // namespace QtAws
