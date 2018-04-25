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

#include "associatefleetresponse.h"
#include "associatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AssociateFleetResponse
 * \brief The AssociateFleetResponse class provides an interace for AppStream AssociateFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::associateFleet
 */

/*!
 * Constructs a AssociateFleetResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateFleetResponse::AssociateFleetResponse(
        const AssociateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new AssociateFleetResponsePrivate(this), parent)
{
    setRequest(new AssociateFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateFleetRequest * AssociateFleetResponse::request() const
{
    Q_D(const AssociateFleetResponse);
    return static_cast<const AssociateFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream AssociateFleet \a response.
 */
void AssociateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::AssociateFleetResponsePrivate
 * \brief The AssociateFleetResponsePrivate class provides private implementation for AssociateFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AssociateFleetResponsePrivate object with public implementation \a q.
 */
AssociateFleetResponsePrivate::AssociateFleetResponsePrivate(
    AssociateFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream AssociateFleet response element from \a xml.
 */
void AssociateFleetResponsePrivate::parseAssociateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
