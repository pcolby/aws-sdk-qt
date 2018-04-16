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

#include "deleteinputsecuritygroupresponse.h"
#include "deleteinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupResponse
 *
 * \brief The DeleteInputSecurityGroupResponse class provides an interace for MediaLive DeleteInputSecurityGroup responses.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::deleteInputSecurityGroup
 */

/*!
 * @brief  Constructs a new DeleteInputSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInputSecurityGroupResponse::DeleteInputSecurityGroupResponse(
        const DeleteInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteInputSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteInputSecurityGroupRequest * DeleteInputSecurityGroupResponse::request() const
{
    Q_D(const DeleteInputSecurityGroupResponse);
    return static_cast<const DeleteInputSecurityGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaLive DeleteInputSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteInputSecurityGroupResponsePrivate
 *
 * \brief Private implementation for DeleteInputSecurityGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteInputSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInputSecurityGroupResponse instance.
 */
DeleteInputSecurityGroupResponsePrivate::DeleteInputSecurityGroupResponsePrivate(
    DeleteInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaLive DeleteInputSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInputSecurityGroupResponsePrivate::parseDeleteInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputSecurityGroupResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
