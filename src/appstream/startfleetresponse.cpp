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

#include "startfleetresponse.h"
#include "startfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StartFleetResponse
 *
 * \brief The StartFleetResponse class provides an interace for AppStream StartFleet responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::startFleet
 */

/*!
 * @brief  Constructs a new StartFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StartFleetRequest * StartFleetResponse::request() const
{
    Q_D(const StartFleetResponse);
    return static_cast<const StartFleetRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream StartFleet response.
 *
 * @param  response  Response to parse.
 */
void StartFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartFleetResponsePrivate
 *
 * \brief Private implementation for StartFleetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartFleetResponse instance.
 */
StartFleetResponsePrivate::StartFleetResponsePrivate(
    StartFleetResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream StartFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartFleetResponsePrivate::parseStartFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
