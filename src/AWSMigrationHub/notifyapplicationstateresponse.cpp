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

#include "notifyapplicationstateresponse.h"
#include "notifyapplicationstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyApplicationStateResponse
 *
 * \brief The NotifyApplicationStateResponse class encapsulates MigrationHub NotifyApplicationState responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::notifyApplicationState
 */

/*!
 * @brief  Constructs a new NotifyApplicationStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
NotifyApplicationStateResponse::NotifyApplicationStateResponse(
        const NotifyApplicationStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new NotifyApplicationStateResponsePrivate(this), parent)
{
    setRequest(new NotifyApplicationStateRequest(request));
    setReply(reply);
}

const NotifyApplicationStateRequest * NotifyApplicationStateResponse::request() const
{
    Q_D(const NotifyApplicationStateResponse);
    return static_cast<const NotifyApplicationStateRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub NotifyApplicationState response.
 *
 * @param  response  Response to parse.
 */
void NotifyApplicationStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(NotifyApplicationStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class NotifyApplicationStateResponsePrivate
 *
 * \brief Private implementation for NotifyApplicationStateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new NotifyApplicationStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public NotifyApplicationStateResponse instance.
 */
NotifyApplicationStateResponsePrivate::NotifyApplicationStateResponsePrivate(
    NotifyApplicationStateResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub NotifyApplicationStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void NotifyApplicationStateResponsePrivate::parseNotifyApplicationStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyApplicationStateResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
