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

#include "startapplicationresponse.h"
#include "startapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::StartApplicationResponse
 *
 * \brief The StartApplicationResponse class provides an interace for KinesisAnalytics StartApplication responses.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::startApplication
 */

/*!
 * @brief  Constructs a new StartApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartApplicationResponse::StartApplicationResponse(
        const StartApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new StartApplicationResponsePrivate(this), parent)
{
    setRequest(new StartApplicationRequest(request));
    setReply(reply);
}

const StartApplicationRequest * StartApplicationResponse::request() const
{
    Q_D(const StartApplicationResponse);
    return static_cast<const StartApplicationRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisAnalytics StartApplication response.
 *
 * @param  response  Response to parse.
 */
void StartApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartApplicationResponsePrivate
 *
 * \brief Private implementation for StartApplicationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartApplicationResponse instance.
 */
StartApplicationResponsePrivate::StartApplicationResponsePrivate(
    StartApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisAnalytics StartApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartApplicationResponsePrivate::parseStartApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
