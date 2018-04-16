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

#include "unmonitorinstancesresponse.h"
#include "unmonitorinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::UnmonitorInstancesResponse
 *
 * \brief The UnmonitorInstancesResponse class provides an interace for EC2 UnmonitorInstances responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::unmonitorInstances
 */

/*!
 * @brief  Constructs a new UnmonitorInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnmonitorInstancesResponse::UnmonitorInstancesResponse(
        const UnmonitorInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new UnmonitorInstancesResponsePrivate(this), parent)
{
    setRequest(new UnmonitorInstancesRequest(request));
    setReply(reply);
}

const UnmonitorInstancesRequest * UnmonitorInstancesResponse::request() const
{
    Q_D(const UnmonitorInstancesResponse);
    return static_cast<const UnmonitorInstancesRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 UnmonitorInstances response.
 *
 * @param  response  Response to parse.
 */
void UnmonitorInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnmonitorInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UnmonitorInstancesResponsePrivate
 *
 * \brief Private implementation for UnmonitorInstancesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UnmonitorInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnmonitorInstancesResponse instance.
 */
UnmonitorInstancesResponsePrivate::UnmonitorInstancesResponsePrivate(
    UnmonitorInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 UnmonitorInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnmonitorInstancesResponsePrivate::parseUnmonitorInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnmonitorInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
