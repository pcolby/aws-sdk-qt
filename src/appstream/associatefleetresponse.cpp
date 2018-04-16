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

#include "associatefleetresponse.h"
#include "associatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AssociateFleetResponse
 *
 * \brief The AssociateFleetResponse class provides an interace for AppStream AssociateFleet responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::associateFleet
 */

/*!
 * @brief  Constructs a new AssociateFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const AssociateFleetRequest * AssociateFleetResponse::request() const
{
    Q_D(const AssociateFleetResponse);
    return static_cast<const AssociateFleetRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream AssociateFleet response.
 *
 * @param  response  Response to parse.
 */
void AssociateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssociateFleetResponsePrivate
 *
 * \brief Private implementation for AssociateFleetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateFleetResponse instance.
 */
AssociateFleetResponsePrivate::AssociateFleetResponsePrivate(
    AssociateFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream AssociateFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateFleetResponsePrivate::parseAssociateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
