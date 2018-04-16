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

#include "stopcrawlerresponse.h"
#include "stopcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerResponse
 *
 * \brief The StopCrawlerResponse class provides an interace for Glue StopCrawler responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::stopCrawler
 */

/*!
 * @brief  Constructs a new StopCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopCrawlerResponse::StopCrawlerResponse(
        const StopCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopCrawlerResponsePrivate(this), parent)
{
    setRequest(new StopCrawlerRequest(request));
    setReply(reply);
}

const StopCrawlerRequest * StopCrawlerResponse::request() const
{
    Q_D(const StopCrawlerResponse);
    return static_cast<const StopCrawlerRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue StopCrawler response.
 *
 * @param  response  Response to parse.
 */
void StopCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopCrawlerResponsePrivate
 *
 * \brief Private implementation for StopCrawlerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopCrawlerResponse instance.
 */
StopCrawlerResponsePrivate::StopCrawlerResponsePrivate(
    StopCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue StopCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopCrawlerResponsePrivate::parseStopCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
