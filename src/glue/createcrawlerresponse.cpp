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

#include "createcrawlerresponse.h"
#include "createcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateCrawlerResponse
 *
 * \brief The CreateCrawlerResponse class provides an interace for Glue CreateCrawler responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createCrawler
 */

/*!
 * @brief  Constructs a new CreateCrawlerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCrawlerResponse::CreateCrawlerResponse(
        const CreateCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateCrawlerResponsePrivate(this), parent)
{
    setRequest(new CreateCrawlerRequest(request));
    setReply(reply);
}

const CreateCrawlerRequest * CreateCrawlerResponse::request() const
{
    Q_D(const CreateCrawlerResponse);
    return static_cast<const CreateCrawlerRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue CreateCrawler response.
 *
 * @param  response  Response to parse.
 */
void CreateCrawlerResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateCrawlerResponsePrivate
 *
 * \brief Private implementation for CreateCrawlerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCrawlerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCrawlerResponse instance.
 */
CreateCrawlerResponsePrivate::CreateCrawlerResponsePrivate(
    CreateCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue CreateCrawlerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCrawlerResponsePrivate::parseCreateCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
