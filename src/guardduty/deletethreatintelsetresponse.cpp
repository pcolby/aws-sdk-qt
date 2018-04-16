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

#include "deletethreatintelsetresponse.h"
#include "deletethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetResponse
 *
 * \brief The DeleteThreatIntelSetResponse class encapsulates GuardDuty DeleteThreatIntelSet responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::deleteThreatIntelSet
 */

/*!
 * @brief  Constructs a new DeleteThreatIntelSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThreatIntelSetResponse::DeleteThreatIntelSetResponse(
        const DeleteThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new DeleteThreatIntelSetRequest(request));
    setReply(reply);
}

const DeleteThreatIntelSetRequest * DeleteThreatIntelSetResponse::request() const
{
    Q_D(const DeleteThreatIntelSetResponse);
    return static_cast<const DeleteThreatIntelSetRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty DeleteThreatIntelSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteThreatIntelSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteThreatIntelSetResponsePrivate
 *
 * \brief Private implementation for DeleteThreatIntelSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteThreatIntelSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteThreatIntelSetResponse instance.
 */
DeleteThreatIntelSetResponsePrivate::DeleteThreatIntelSetResponsePrivate(
    DeleteThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty DeleteThreatIntelSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThreatIntelSetResponsePrivate::parseDeleteThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
