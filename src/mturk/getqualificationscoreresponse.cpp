/*
    Copyright 2013-2020 Paul Colby

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

#include "getqualificationscoreresponse.h"
#include "getqualificationscoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationScoreResponse
 * \brief The GetQualificationScoreResponse class provides an interace for MTurk GetQualificationScore responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationScore
 */

/*!
 * Constructs a GetQualificationScoreResponse object for \a reply to \a request, with parent \a parent.
 */
GetQualificationScoreResponse::GetQualificationScoreResponse(
        const GetQualificationScoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationScoreResponsePrivate(this), parent)
{
    setRequest(new GetQualificationScoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQualificationScoreRequest * GetQualificationScoreResponse::request() const
{
    Q_D(const GetQualificationScoreResponse);
    return static_cast<const GetQualificationScoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetQualificationScore \a response.
 */
void GetQualificationScoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQualificationScoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetQualificationScoreResponsePrivate
 * \brief The GetQualificationScoreResponsePrivate class provides private implementation for GetQualificationScoreResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetQualificationScoreResponsePrivate object with public implementation \a q.
 */
GetQualificationScoreResponsePrivate::GetQualificationScoreResponsePrivate(
    GetQualificationScoreResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetQualificationScore response element from \a xml.
 */
void GetQualificationScoreResponsePrivate::parseGetQualificationScoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationScoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
