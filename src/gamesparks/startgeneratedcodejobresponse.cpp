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

#include "startgeneratedcodejobresponse.h"
#include "startgeneratedcodejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobResponse
 * \brief The StartGeneratedCodeJobResponse class provides an interace for GameSparks StartGeneratedCodeJob responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startGeneratedCodeJob
 */

/*!
 * Constructs a StartGeneratedCodeJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartGeneratedCodeJobResponse::StartGeneratedCodeJobResponse(
        const StartGeneratedCodeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new StartGeneratedCodeJobResponsePrivate(this), parent)
{
    setRequest(new StartGeneratedCodeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartGeneratedCodeJobRequest * StartGeneratedCodeJobResponse::request() const
{
    Q_D(const StartGeneratedCodeJobResponse);
    return static_cast<const StartGeneratedCodeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks StartGeneratedCodeJob \a response.
 */
void StartGeneratedCodeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartGeneratedCodeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobResponsePrivate
 * \brief The StartGeneratedCodeJobResponsePrivate class provides private implementation for StartGeneratedCodeJobResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartGeneratedCodeJobResponsePrivate object with public implementation \a q.
 */
StartGeneratedCodeJobResponsePrivate::StartGeneratedCodeJobResponsePrivate(
    StartGeneratedCodeJobResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks StartGeneratedCodeJob response element from \a xml.
 */
void StartGeneratedCodeJobResponsePrivate::parseStartGeneratedCodeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartGeneratedCodeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
