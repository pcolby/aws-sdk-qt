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

#include "startfleetresponse.h"
#include "startfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StartFleetResponse
 * \brief The StartFleetResponse class provides an interace for AppStream StartFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::startFleet
 */

/*!
 * Constructs a StartFleetResponse object for \a reply to \a request, with parent \a parent.
 */
StartFleetResponse::StartFleetResponse(
        const StartFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StartFleetResponsePrivate(this), parent)
{
    setRequest(new StartFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFleetRequest * StartFleetResponse::request() const
{
    Q_D(const StartFleetResponse);
    return static_cast<const StartFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream StartFleet \a response.
 */
void StartFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::StartFleetResponsePrivate
 * \brief The StartFleetResponsePrivate class provides private implementation for StartFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StartFleetResponsePrivate object with public implementation \a q.
 */
StartFleetResponsePrivate::StartFleetResponsePrivate(
    StartFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream StartFleet response element from \a xml.
 */
void StartFleetResponsePrivate::parseStartFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
