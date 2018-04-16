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

#include "startdevicesyncresponse.h"
#include "startdevicesyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::StartDeviceSyncResponse
 *
 * \brief The StartDeviceSyncResponse class provides an interace for AlexaForBusiness StartDeviceSync responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::startDeviceSync
 */

/*!
 * @brief  Constructs a new StartDeviceSyncResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartDeviceSyncResponse::StartDeviceSyncResponse(
        const StartDeviceSyncRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new StartDeviceSyncResponsePrivate(this), parent)
{
    setRequest(new StartDeviceSyncRequest(request));
    setReply(reply);
}

const StartDeviceSyncRequest * StartDeviceSyncResponse::request() const
{
    Q_D(const StartDeviceSyncResponse);
    return static_cast<const StartDeviceSyncRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness StartDeviceSync response.
 *
 * @param  response  Response to parse.
 */
void StartDeviceSyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartDeviceSyncResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartDeviceSyncResponsePrivate
 *
 * \brief Private implementation for StartDeviceSyncResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartDeviceSyncResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartDeviceSyncResponse instance.
 */
StartDeviceSyncResponsePrivate::StartDeviceSyncResponsePrivate(
    StartDeviceSyncResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness StartDeviceSyncResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartDeviceSyncResponsePrivate::parseStartDeviceSyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeviceSyncResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
