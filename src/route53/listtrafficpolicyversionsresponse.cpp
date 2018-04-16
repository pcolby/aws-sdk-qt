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

#include "listtrafficpolicyversionsresponse.h"
#include "listtrafficpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyVersionsResponse
 *
 * \brief The ListTrafficPolicyVersionsResponse class provides an interace for Route53 ListTrafficPolicyVersions responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTrafficPolicyVersions
 */

/*!
 * @brief  Constructs a new ListTrafficPolicyVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPolicyVersionsResponse::ListTrafficPolicyVersionsResponse(
        const ListTrafficPolicyVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyVersionsRequest(request));
    setReply(reply);
}

const ListTrafficPolicyVersionsRequest * ListTrafficPolicyVersionsResponse::request() const
{
    Q_D(const ListTrafficPolicyVersionsResponse);
    return static_cast<const ListTrafficPolicyVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 ListTrafficPolicyVersions response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTrafficPolicyVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListTrafficPolicyVersionsResponsePrivate
 *
 * \brief Private implementation for ListTrafficPolicyVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPolicyVersionsResponse instance.
 */
ListTrafficPolicyVersionsResponsePrivate::ListTrafficPolicyVersionsResponsePrivate(
    ListTrafficPolicyVersionsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 ListTrafficPolicyVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPolicyVersionsResponsePrivate::parseListTrafficPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyVersionsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
