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

#include "recognizetextresponse.h"
#include "recognizetextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextResponse
 * \brief The RecognizeTextResponse class provides an interace for LexRuntimeV2 RecognizeText responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeText
 */

/*!
 * Constructs a RecognizeTextResponse object for \a reply to \a request, with parent \a parent.
 */
RecognizeTextResponse::RecognizeTextResponse(
        const RecognizeTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new RecognizeTextResponsePrivate(this), parent)
{
    setRequest(new RecognizeTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecognizeTextRequest * RecognizeTextResponse::request() const
{
    return static_cast<const RecognizeTextRequest *>(LexRuntimeV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 RecognizeText \a response.
 */
void RecognizeTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecognizeTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextResponsePrivate
 * \brief The RecognizeTextResponsePrivate class provides private implementation for RecognizeTextResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeTextResponsePrivate object with public implementation \a q.
 */
RecognizeTextResponsePrivate::RecognizeTextResponsePrivate(
    RecognizeTextResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 RecognizeText response element from \a xml.
 */
void RecognizeTextResponsePrivate::parseRecognizeTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
