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

#include "listinstanceprofilesresponse.h"
#include "listinstanceprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListInstanceProfilesResponse
 *
 * \brief The ListInstanceProfilesResponse class encapsulates DeviceFarm ListInstanceProfiles responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listInstanceProfiles
 */

/*!
 * @brief  Constructs a new ListInstanceProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstanceProfilesResponse::ListInstanceProfilesResponse(
        const ListInstanceProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListInstanceProfilesResponsePrivate(this), parent)
{
    setRequest(new ListInstanceProfilesRequest(request));
    setReply(reply);
}

const ListInstanceProfilesRequest * ListInstanceProfilesResponse::request() const
{
    Q_D(const ListInstanceProfilesResponse);
    return static_cast<const ListInstanceProfilesRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm ListInstanceProfiles response.
 *
 * @param  response  Response to parse.
 */
void ListInstanceProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListInstanceProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListInstanceProfilesResponsePrivate
 *
 * \brief Private implementation for ListInstanceProfilesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstanceProfilesResponse instance.
 */
ListInstanceProfilesResponsePrivate::ListInstanceProfilesResponsePrivate(
    ListInstanceProfilesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm ListInstanceProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstanceProfilesResponsePrivate::parseListInstanceProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceProfilesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
