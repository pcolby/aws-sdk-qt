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

#include "getclassifiersresponse.h"
#include "getclassifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifiersResponse
 *
 * \brief The GetClassifiersResponse class encapsulates Glue GetClassifiers responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifiers
 */

/*!
 * @brief  Constructs a new GetClassifiersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClassifiersResponse::GetClassifiersResponse(
        const GetClassifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetClassifiersResponsePrivate(this), parent)
{
    setRequest(new GetClassifiersRequest(request));
    setReply(reply);
}

const GetClassifiersRequest * GetClassifiersResponse::request() const
{
    Q_D(const GetClassifiersResponse);
    return static_cast<const GetClassifiersRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetClassifiers response.
 *
 * @param  response  Response to parse.
 */
void GetClassifiersResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetClassifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetClassifiersResponsePrivate
 *
 * \brief Private implementation for GetClassifiersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetClassifiersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetClassifiersResponse instance.
 */
GetClassifiersResponsePrivate::GetClassifiersResponsePrivate(
    GetClassifiersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetClassifiersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetClassifiersResponsePrivate::parseGetClassifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassifiersResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
