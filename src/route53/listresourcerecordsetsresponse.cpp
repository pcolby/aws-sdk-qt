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

#include "listresourcerecordsetsresponse.h"
#include "listresourcerecordsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListResourceRecordSetsResponse
 *
 * \brief The ListResourceRecordSetsResponse class encapsulates Route53 ListResourceRecordSets responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listResourceRecordSets
 */

/*!
 * @brief  Constructs a new ListResourceRecordSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceRecordSetsResponse::ListResourceRecordSetsResponse(
        const ListResourceRecordSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListResourceRecordSetsResponsePrivate(this), parent)
{
    setRequest(new ListResourceRecordSetsRequest(request));
    setReply(reply);
}

const ListResourceRecordSetsRequest * ListResourceRecordSetsResponse::request() const
{
    Q_D(const ListResourceRecordSetsResponse);
    return static_cast<const ListResourceRecordSetsRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 ListResourceRecordSets response.
 *
 * @param  response  Response to parse.
 */
void ListResourceRecordSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourceRecordSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListResourceRecordSetsResponsePrivate
 *
 * \brief Private implementation for ListResourceRecordSetsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListResourceRecordSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceRecordSetsResponse instance.
 */
ListResourceRecordSetsResponsePrivate::ListResourceRecordSetsResponsePrivate(
    ListResourceRecordSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 ListResourceRecordSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceRecordSetsResponsePrivate::parseListResourceRecordSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceRecordSetsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
