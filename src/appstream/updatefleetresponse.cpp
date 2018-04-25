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

#include "updatefleetresponse.h"
#include "updatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::UpdateFleetResponse
 * \brief The UpdateFleetResponse class provides an interace for AppStream UpdateFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::updateFleet
 */

/*!
 * Constructs a UpdateFleetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFleetResponse::UpdateFleetResponse(
        const UpdateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new UpdateFleetResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFleetRequest * UpdateFleetResponse::request() const
{
    Q_D(const UpdateFleetResponse);
    return static_cast<const UpdateFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream UpdateFleet \a response.
 */
void UpdateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::UpdateFleetResponsePrivate
 * \brief The UpdateFleetResponsePrivate class provides private implementation for UpdateFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a UpdateFleetResponsePrivate object with public implementation \a q.
 */
UpdateFleetResponsePrivate::UpdateFleetResponsePrivate(
    UpdateFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream UpdateFleet response element from \a xml.
 */
void UpdateFleetResponsePrivate::parseUpdateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
