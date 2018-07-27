/*
    Copyright 2013-2018 Paul Colby

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

#include "stopfleetresponse.h"
#include "stopfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopFleetResponse
 * \brief The StopFleetResponse class provides an interace for AppStream StopFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::stopFleet
 */

/*!
 * Constructs a StopFleetResponse object for \a reply to \a request, with parent \a parent.
 */
StopFleetResponse::StopFleetResponse(
        const StopFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StopFleetResponsePrivate(this), parent)
{
    setRequest(new StopFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFleetRequest * StopFleetResponse::request() const
{
    Q_D(const StopFleetResponse);
    return static_cast<const StopFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream StopFleet \a response.
 */
void StopFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::StopFleetResponsePrivate
 * \brief The StopFleetResponsePrivate class provides private implementation for StopFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StopFleetResponsePrivate object with public implementation \a q.
 */
StopFleetResponsePrivate::StopFleetResponsePrivate(
    StopFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream StopFleet response element from \a xml.
 */
void StopFleetResponsePrivate::parseStopFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
