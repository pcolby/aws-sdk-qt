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

#include "deletenotificationchannelresponse.h"
#include "deletenotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DeleteNotificationChannelResponse
 *
 * \brief The DeleteNotificationChannelResponse class encapsulates FMS DeleteNotificationChannel responses.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::deleteNotificationChannel
 */

/*!
 * @brief  Constructs a new DeleteNotificationChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotificationChannelResponse::DeleteNotificationChannelResponse(
        const DeleteNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new DeleteNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationChannelRequest(request));
    setReply(reply);
}

const DeleteNotificationChannelRequest * DeleteNotificationChannelResponse::request() const
{
    Q_D(const DeleteNotificationChannelResponse);
    return static_cast<const DeleteNotificationChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a FMS DeleteNotificationChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteNotificationChannelResponsePrivate
 *
 * \brief Private implementation for DeleteNotificationChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotificationChannelResponse instance.
 */
DeleteNotificationChannelResponsePrivate::DeleteNotificationChannelResponsePrivate(
    DeleteNotificationChannelResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an FMS DeleteNotificationChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotificationChannelResponsePrivate::parseDeleteNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationChannelResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
