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

#include "discoverinputschemaresponse.h"
#include "discoverinputschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaResponse
 *
 * \brief The DiscoverInputSchemaResponse class provides an interace for KinesisAnalytics DiscoverInputSchema responses.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::discoverInputSchema
 */

/*!
 * @brief  Constructs a new DiscoverInputSchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DiscoverInputSchemaResponse::DiscoverInputSchemaResponse(
        const DiscoverInputSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DiscoverInputSchemaResponsePrivate(this), parent)
{
    setRequest(new DiscoverInputSchemaRequest(request));
    setReply(reply);
}

const DiscoverInputSchemaRequest * DiscoverInputSchemaResponse::request() const
{
    Q_D(const DiscoverInputSchemaResponse);
    return static_cast<const DiscoverInputSchemaRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisAnalytics DiscoverInputSchema response.
 *
 * @param  response  Response to parse.
 */
void DiscoverInputSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(DiscoverInputSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DiscoverInputSchemaResponsePrivate
 *
 * \brief Private implementation for DiscoverInputSchemaResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DiscoverInputSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DiscoverInputSchemaResponse instance.
 */
DiscoverInputSchemaResponsePrivate::DiscoverInputSchemaResponsePrivate(
    DiscoverInputSchemaResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisAnalytics DiscoverInputSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DiscoverInputSchemaResponsePrivate::parseDiscoverInputSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverInputSchemaResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
