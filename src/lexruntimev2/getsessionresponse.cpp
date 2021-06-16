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

#include "getsessionresponse.h"
#include "getsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::GetSessionResponse
 * \brief The GetSessionResponse class provides an interace for LexRuntimeV2 GetSession responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::getSession
 */

/*!
 * Constructs a GetSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionResponse::GetSessionResponse(
        const GetSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new GetSessionResponsePrivate(this), parent)
{
    setRequest(new GetSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionRequest * GetSessionResponse::request() const
{
    Q_D(const GetSessionResponse);
    return static_cast<const GetSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 GetSession \a response.
 */
void GetSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::GetSessionResponsePrivate
 * \brief The GetSessionResponsePrivate class provides private implementation for GetSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a GetSessionResponsePrivate object with public implementation \a q.
 */
GetSessionResponsePrivate::GetSessionResponsePrivate(
    GetSessionResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 GetSession response element from \a xml.
 */
void GetSessionResponsePrivate::parseGetSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
