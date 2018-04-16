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

#include "getconnectionresponse.h"
#include "getconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionResponse
 *
 * \brief The GetConnectionResponse class encapsulates Glue GetConnection responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getConnection
 */

/*!
 * @brief  Constructs a new GetConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConnectionResponse::GetConnectionResponse(
        const GetConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetConnectionResponsePrivate(this), parent)
{
    setRequest(new GetConnectionRequest(request));
    setReply(reply);
}

const GetConnectionRequest * GetConnectionResponse::request() const
{
    Q_D(const GetConnectionResponse);
    return static_cast<const GetConnectionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetConnection response.
 *
 * @param  response  Response to parse.
 */
void GetConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetConnectionResponsePrivate
 *
 * \brief Private implementation for GetConnectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConnectionResponse instance.
 */
GetConnectionResponsePrivate::GetConnectionResponsePrivate(
    GetConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConnectionResponsePrivate::parseGetConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
