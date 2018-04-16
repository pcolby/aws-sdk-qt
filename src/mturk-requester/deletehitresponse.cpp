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

#include "deletehitresponse.h"
#include "deletehitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteHITResponse
 *
 * \brief The DeleteHITResponse class encapsulates MTurk DeleteHIT responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::deleteHIT
 */

/*!
 * @brief  Constructs a new DeleteHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteHITResponse::DeleteHITResponse(
        const DeleteHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteHITResponsePrivate(this), parent)
{
    setRequest(new DeleteHITRequest(request));
    setReply(reply);
}

const DeleteHITRequest * DeleteHITResponse::request() const
{
    Q_D(const DeleteHITResponse);
    return static_cast<const DeleteHITRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk DeleteHIT response.
 *
 * @param  response  Response to parse.
 */
void DeleteHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteHITResponsePrivate
 *
 * \brief Private implementation for DeleteHITResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteHITResponse instance.
 */
DeleteHITResponsePrivate::DeleteHITResponsePrivate(
    DeleteHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk DeleteHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteHITResponsePrivate::parseDeleteHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
