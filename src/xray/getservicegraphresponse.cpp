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

#include "getservicegraphresponse.h"
#include "getservicegraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetServiceGraphResponse
 *
 * \brief The GetServiceGraphResponse class provides an interace for XRay GetServiceGraph responses.
 *
 * \ingroup XRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getServiceGraph
 */

/*!
 * @brief  Constructs a new GetServiceGraphResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceGraphResponse::GetServiceGraphResponse(
        const GetServiceGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetServiceGraphResponsePrivate(this), parent)
{
    setRequest(new GetServiceGraphRequest(request));
    setReply(reply);
}

const GetServiceGraphRequest * GetServiceGraphResponse::request() const
{
    Q_D(const GetServiceGraphResponse);
    return static_cast<const GetServiceGraphRequest *>(d->request);
}

/*!
 * @brief  Parse a XRay GetServiceGraph response.
 *
 * @param  response  Response to parse.
 */
void GetServiceGraphResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetServiceGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetServiceGraphResponsePrivate
 *
 * \brief Private implementation for GetServiceGraphResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetServiceGraphResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServiceGraphResponse instance.
 */
GetServiceGraphResponsePrivate::GetServiceGraphResponsePrivate(
    GetServiceGraphResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an XRay GetServiceGraphResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceGraphResponsePrivate::parseGetServiceGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceGraphResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
