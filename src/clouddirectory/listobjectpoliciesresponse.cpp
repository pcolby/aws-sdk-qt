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

#include "listobjectpoliciesresponse.h"
#include "listobjectpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListObjectPoliciesResponse
 *
 * @brief  Handles CloudDirectory ListObjectPolicies responses.
 *
 * @see    CloudDirectoryClient::listObjectPolicies
 */

/**
 * @brief  Constructs a new ListObjectPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectPoliciesResponse::ListObjectPoliciesResponse(
        const ListObjectPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListObjectPoliciesRequest(request));
    setReply(reply);
}

const ListObjectPoliciesRequest * ListObjectPoliciesResponse::request() const
{
    Q_D(const ListObjectPoliciesResponse);
    return static_cast<const ListObjectPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListObjectPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListObjectPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListObjectPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListObjectPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectPoliciesResponse instance.
 */
ListObjectPoliciesResponsePrivate::ListObjectPoliciesResponsePrivate(
    ListObjectPoliciesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListObjectPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectPoliciesResponsePrivate::parseListObjectPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectPoliciesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
