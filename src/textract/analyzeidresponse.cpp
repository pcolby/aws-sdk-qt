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
