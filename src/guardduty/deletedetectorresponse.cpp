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

#include "deletedetectorresponse.h"
#include "deletedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteDetectorResponse
 *
 * \brief The DeleteDetectorResponse class encapsulates GuardDuty DeleteDetector responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::deleteDetector
 */

/*!
 * @brief  Constructs a new DeleteDetectorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDetectorResponse::DeleteDetectorResponse(
        const DeleteDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteDetectorResponsePrivate(this), parent)
{
    setRequest(new DeleteDetectorRequest(request));
    setReply(reply);
}

const DeleteDetectorRequest * DeleteDetectorResponse::request() const
{
    Q_D(const DeleteDetectorResponse);
    return static_cast<const DeleteDetectorRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty DeleteDetector response.
 *
 * @param  response  Response to parse.
 */
void DeleteDetectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDetectorResponsePrivate
 *
 * \brief Private implementation for DeleteDetectorResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDetectorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDetectorResponse instance.
 */
DeleteDetectorResponsePrivate::DeleteDetectorResponsePrivate(
    DeleteDetectorResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty DeleteDetectorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDetectorResponsePrivate::parseDeleteDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDetectorResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
