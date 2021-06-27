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

#include "putsessionresponse.h"
#include "putsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::PutSessionResponse
 * \brief The PutSessionResponse class provides an interace for LexRuntimeV2 PutSession responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::putSession
 */

/*!
 * Constructs a PutSessionResponse object for \a reply to \a request, with parent \a parent.
 */
PutSessionResponse::PutSessionResponse(
        const PutSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new PutSessionResponsePrivate(this), parent)
{
    setRequest(new PutSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSessionRequest * PutSessionResponse::request() const
{
    return static_cast<const PutSessionRequest *>(LexRuntimeV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 PutSession \a response.
 */
void PutSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::PutSessionResponsePrivate
 * \brief The PutSessionResponsePrivate class provides private implementation for PutSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a PutSessionResponsePrivate object with public implementation \a q.
 */
PutSessionResponsePrivate::PutSessionResponsePrivate(
    PutSessionResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 PutSession response element from \a xml.
 */
void PutSessionResponsePrivate::parsePutSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
