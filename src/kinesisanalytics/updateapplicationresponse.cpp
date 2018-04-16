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

#include "updateapplicationresponse.h"
#include "updateapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::UpdateApplicationResponse
 *
 * \brief The UpdateApplicationResponse class encapsulates KinesisAnalytics UpdateApplication responses.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::updateApplication
 */

/*!
 * @brief  Constructs a new UpdateApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApplicationResponse::UpdateApplicationResponse(
        const UpdateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new UpdateApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationRequest(request));
    setReply(reply);
}

const UpdateApplicationRequest * UpdateApplicationResponse::request() const
{
    Q_D(const UpdateApplicationResponse);
    return static_cast<const UpdateApplicationRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisAnalytics UpdateApplication response.
 *
 * @param  response  Response to parse.
 */
void UpdateApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateApplicationResponsePrivate
 *
 * \brief Private implementation for UpdateApplicationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApplicationResponse instance.
 */
UpdateApplicationResponsePrivate::UpdateApplicationResponsePrivate(
    UpdateApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisAnalytics UpdateApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApplicationResponsePrivate::parseUpdateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
