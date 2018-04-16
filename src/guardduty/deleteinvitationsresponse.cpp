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

#include "deleteinvitationsresponse.h"
#include "deleteinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteInvitationsResponse
 *
 * \brief The DeleteInvitationsResponse class encapsulates GuardDuty DeleteInvitations responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::deleteInvitations
 */

/*!
 * @brief  Constructs a new DeleteInvitationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInvitationsResponse::DeleteInvitationsResponse(
        const DeleteInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteInvitationsResponsePrivate(this), parent)
{
    setRequest(new DeleteInvitationsRequest(request));
    setReply(reply);
}

const DeleteInvitationsRequest * DeleteInvitationsResponse::request() const
{
    Q_D(const DeleteInvitationsResponse);
    return static_cast<const DeleteInvitationsRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty DeleteInvitations response.
 *
 * @param  response  Response to parse.
 */
void DeleteInvitationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteInvitationsResponsePrivate
 *
 * \brief Private implementation for DeleteInvitationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteInvitationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInvitationsResponse instance.
 */
DeleteInvitationsResponsePrivate::DeleteInvitationsResponsePrivate(
    DeleteInvitationsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty DeleteInvitationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInvitationsResponsePrivate::parseDeleteInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInvitationsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
