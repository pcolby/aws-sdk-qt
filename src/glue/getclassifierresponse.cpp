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

#include "getclassifierresponse.h"
#include "getclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetClassifierResponse
 *
 * @brief  Handles Glue GetClassifier responses.
 *
 * @see    GlueClient::getClassifier
 */

/**
 * @brief  Constructs a new GetClassifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClassifierResponse::GetClassifierResponse(
        const GetClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetClassifierResponsePrivate(this), parent)
{
    setRequest(new GetClassifierRequest(request));
    setReply(reply);
}

const GetClassifierRequest * GetClassifierResponse::request() const
{
    Q_D(const GetClassifierResponse);
    return static_cast<const GetClassifierRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetClassifier response.
 *
 * @param  response  Response to parse.
 */
void GetClassifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetClassifierResponsePrivate
 *
 * @brief  Private implementation for GetClassifierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClassifierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetClassifierResponse instance.
 */
GetClassifierResponsePrivate::GetClassifierResponsePrivate(
    GetClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetClassifierResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetClassifierResponsePrivate::GetClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassifierResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
