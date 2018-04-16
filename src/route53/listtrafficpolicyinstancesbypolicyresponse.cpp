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

#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "listtrafficpolicyinstancesbypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyResponse
 *
 * \brief The ListTrafficPolicyInstancesByPolicyResponse class encapsulates Route53 ListTrafficPolicyInstancesByPolicy responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPolicyInstancesByPolicyResponse::ListTrafficPolicyInstancesByPolicyResponse(
        const ListTrafficPolicyInstancesByPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesByPolicyResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesByPolicyRequest(request));
    setReply(reply);
}

const ListTrafficPolicyInstancesByPolicyRequest * ListTrafficPolicyInstancesByPolicyResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesByPolicyResponse);
    return static_cast<const ListTrafficPolicyInstancesByPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 ListTrafficPolicyInstancesByPolicy response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPolicyInstancesByPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTrafficPolicyInstancesByPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListTrafficPolicyInstancesByPolicyResponsePrivate
 *
 * \brief Private implementation for ListTrafficPolicyInstancesByPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPolicyInstancesByPolicyResponse instance.
 */
ListTrafficPolicyInstancesByPolicyResponsePrivate::ListTrafficPolicyInstancesByPolicyResponsePrivate(
    ListTrafficPolicyInstancesByPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 ListTrafficPolicyInstancesByPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPolicyInstancesByPolicyResponsePrivate::parseListTrafficPolicyInstancesByPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesByPolicyResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
