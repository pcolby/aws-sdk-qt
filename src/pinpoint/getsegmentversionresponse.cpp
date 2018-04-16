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

#include "getsegmentversionresponse.h"
#include "getsegmentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionResponse
 *
 * \brief The GetSegmentVersionResponse class encapsulates Pinpoint GetSegmentVersion responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getSegmentVersion
 */

/*!
 * @brief  Constructs a new GetSegmentVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentVersionResponse::GetSegmentVersionResponse(
        const GetSegmentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionRequest(request));
    setReply(reply);
}

const GetSegmentVersionRequest * GetSegmentVersionResponse::request() const
{
    Q_D(const GetSegmentVersionResponse);
    return static_cast<const GetSegmentVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetSegmentVersion response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSegmentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetSegmentVersionResponsePrivate
 *
 * \brief Private implementation for GetSegmentVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentVersionResponse instance.
 */
GetSegmentVersionResponsePrivate::GetSegmentVersionResponsePrivate(
    GetSegmentVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetSegmentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentVersionResponsePrivate::parseGetSegmentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
