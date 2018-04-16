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

#include "gettableversionresponse.h"
#include "gettableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionResponse
 *
 * \brief The GetTableVersionResponse class provides an interace for Glue GetTableVersion responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTableVersion
 */

/*!
 * @brief  Constructs a new GetTableVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTableVersionResponse::GetTableVersionResponse(
        const GetTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionRequest(request));
    setReply(reply);
}

const GetTableVersionRequest * GetTableVersionResponse::request() const
{
    Q_D(const GetTableVersionResponse);
    return static_cast<const GetTableVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetTableVersion response.
 *
 * @param  response  Response to parse.
 */
void GetTableVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetTableVersionResponsePrivate
 *
 * \brief Private implementation for GetTableVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTableVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTableVersionResponse instance.
 */
GetTableVersionResponsePrivate::GetTableVersionResponsePrivate(
    GetTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetTableVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTableVersionResponsePrivate::parseGetTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
