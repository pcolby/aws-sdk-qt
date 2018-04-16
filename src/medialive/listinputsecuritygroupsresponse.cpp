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

#include "listinputsecuritygroupsresponse.h"
#include "listinputsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsResponse
 *
 * \brief The ListInputSecurityGroupsResponse class encapsulates MediaLive ListInputSecurityGroups responses.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::listInputSecurityGroups
 */

/*!
 * @brief  Constructs a new ListInputSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInputSecurityGroupsResponse::ListInputSecurityGroupsResponse(
        const ListInputSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInputSecurityGroupsRequest(request));
    setReply(reply);
}

const ListInputSecurityGroupsRequest * ListInputSecurityGroupsResponse::request() const
{
    Q_D(const ListInputSecurityGroupsResponse);
    return static_cast<const ListInputSecurityGroupsRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaLive ListInputSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void ListInputSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListInputSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListInputSecurityGroupsResponsePrivate
 *
 * \brief Private implementation for ListInputSecurityGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInputSecurityGroupsResponse instance.
 */
ListInputSecurityGroupsResponsePrivate::ListInputSecurityGroupsResponsePrivate(
    ListInputSecurityGroupsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaLive ListInputSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInputSecurityGroupsResponsePrivate::parseListInputSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputSecurityGroupsResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
