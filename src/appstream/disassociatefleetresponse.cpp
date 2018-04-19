/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatefleetresponse.h"
#include "disassociatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DisassociateFleetResponse
 * \brief The DisassociateFleetResponse class provides an interace for AppStream DisassociateFleet responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::disassociateFleet
 */

/*!
 * Constructs a DisassociateFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFleetResponse::DisassociateFleetResponse(
        const DisassociateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DisassociateFleetResponsePrivate(this), parent)
{
    setRequest(new DisassociateFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateFleetRequest * DisassociateFleetResponse::request() const
{
    Q_D(const DisassociateFleetResponse);
    return static_cast<const DisassociateFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DisassociateFleet \a response.
 */
void DisassociateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DisassociateFleetResponsePrivate
 * \brief The DisassociateFleetResponsePrivate class provides private implementation for DisassociateFleetResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DisassociateFleetResponsePrivate object with public implementation \a q.
 */
DisassociateFleetResponsePrivate::DisassociateFleetResponsePrivate(
    DisassociateFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DisassociateFleet response element from \a xml.
 */
void DisassociateFleetResponsePrivate::parseDisassociateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
