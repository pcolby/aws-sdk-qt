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

#include "recognizeutteranceresponse.h"
#include "recognizeutteranceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceResponse
 * \brief The RecognizeUtteranceResponse class provides an interace for LexRuntimeV2 RecognizeUtterance responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeUtterance
 */

/*!
 * Constructs a RecognizeUtteranceResponse object for \a reply to \a request, with parent \a parent.
 */
RecognizeUtteranceResponse::RecognizeUtteranceResponse(
        const RecognizeUtteranceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new RecognizeUtteranceResponsePrivate(this), parent)
{
    setRequest(new RecognizeUtteranceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecognizeUtteranceRequest * RecognizeUtteranceResponse::request() const
{
    Q_D(const RecognizeUtteranceResponse);
    return static_cast<const RecognizeUtteranceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 RecognizeUtterance \a response.
 */
void RecognizeUtteranceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecognizeUtteranceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceResponsePrivate
 * \brief The RecognizeUtteranceResponsePrivate class provides private implementation for RecognizeUtteranceResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeUtteranceResponsePrivate object with public implementation \a q.
 */
RecognizeUtteranceResponsePrivate::RecognizeUtteranceResponsePrivate(
    RecognizeUtteranceResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 RecognizeUtterance response element from \a xml.
 */
void RecognizeUtteranceResponsePrivate::parseRecognizeUtteranceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeUtteranceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
