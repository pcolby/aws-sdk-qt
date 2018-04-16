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

#include "gettriggersresponse.h"
#include "gettriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggersResponse
 *
 * \brief The GetTriggersResponse class provides an interace for Glue GetTriggers responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTriggers
 */

/*!
 * @brief  Constructs a new GetTriggersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTriggersResponse::GetTriggersResponse(
        const GetTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTriggersResponsePrivate(this), parent)
{
    setRequest(new GetTriggersRequest(request));
    setReply(reply);
}

const GetTriggersRequest * GetTriggersResponse::request() const
{
    Q_D(const GetTriggersResponse);
    return static_cast<const GetTriggersRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetTriggers response.
 *
 * @param  response  Response to parse.
 */
void GetTriggersResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetTriggersResponsePrivate
 *
 * \brief Private implementation for GetTriggersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTriggersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTriggersResponse instance.
 */
GetTriggersResponsePrivate::GetTriggersResponsePrivate(
    GetTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetTriggersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTriggersResponsePrivate::parseGetTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTriggersResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
