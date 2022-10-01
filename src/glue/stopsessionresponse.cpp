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

#include "stopsessionresponse.h"
#include "stopsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopSessionResponse
 * \brief The StopSessionResponse class provides an interace for Glue StopSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopSession
 */

/*!
 * Constructs a StopSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StopSessionResponse::StopSessionResponse(
        const StopSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopSessionResponsePrivate(this), parent)
{
    setRequest(new StopSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSessionRequest * StopSessionResponse::request() const
{
    Q_D(const StopSessionResponse);
    return static_cast<const StopSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopSession \a response.
 */
void StopSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopSessionResponsePrivate
 * \brief The StopSessionResponsePrivate class provides private implementation for StopSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopSessionResponsePrivate object with public implementation \a q.
 */
StopSessionResponsePrivate::StopSessionResponsePrivate(
    StopSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopSession response element from \a xml.
 */
void StopSessionResponsePrivate::parseStopSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
