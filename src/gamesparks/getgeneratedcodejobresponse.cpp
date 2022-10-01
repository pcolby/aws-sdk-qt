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

#include "getgeneratedcodejobresponse.h"
#include "getgeneratedcodejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobResponse
 * \brief The GetGeneratedCodeJobResponse class provides an interace for GameSparks GetGeneratedCodeJob responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGeneratedCodeJob
 */

/*!
 * Constructs a GetGeneratedCodeJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeneratedCodeJobResponse::GetGeneratedCodeJobResponse(
        const GetGeneratedCodeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetGeneratedCodeJobResponsePrivate(this), parent)
{
    setRequest(new GetGeneratedCodeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeneratedCodeJobRequest * GetGeneratedCodeJobResponse::request() const
{
    Q_D(const GetGeneratedCodeJobResponse);
    return static_cast<const GetGeneratedCodeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetGeneratedCodeJob \a response.
 */
void GetGeneratedCodeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeneratedCodeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobResponsePrivate
 * \brief The GetGeneratedCodeJobResponsePrivate class provides private implementation for GetGeneratedCodeJobResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGeneratedCodeJobResponsePrivate object with public implementation \a q.
 */
GetGeneratedCodeJobResponsePrivate::GetGeneratedCodeJobResponsePrivate(
    GetGeneratedCodeJobResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetGeneratedCodeJob response element from \a xml.
 */
void GetGeneratedCodeJobResponsePrivate::parseGetGeneratedCodeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeneratedCodeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
