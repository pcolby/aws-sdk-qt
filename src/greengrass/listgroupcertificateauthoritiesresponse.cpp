/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listgroupcertificateauthoritiesresponse.h"
#include "listgroupcertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListGroupCertificateAuthoritiesResponse
 *
 * @brief  Handles Greengrass ListGroupCertificateAuthorities responses.
 *
 * @see    GreengrassClient::listGroupCertificateAuthorities
 */

/**
 * @brief  Constructs a new ListGroupCertificateAuthoritiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupCertificateAuthoritiesResponse::ListGroupCertificateAuthoritiesResponse(
        const ListGroupCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListGroupCertificateAuthoritiesRequest(request));
    setReply(reply);
}

const ListGroupCertificateAuthoritiesRequest * ListGroupCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListGroupCertificateAuthoritiesResponse);
    return static_cast<const ListGroupCertificateAuthoritiesRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListGroupCertificateAuthorities response.
 *
 * @param  response  Response to parse.
 */
void ListGroupCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupCertificateAuthoritiesResponsePrivate
 *
 * @brief  Private implementation for ListGroupCertificateAuthoritiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupCertificateAuthoritiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupCertificateAuthoritiesResponse instance.
 */
ListGroupCertificateAuthoritiesResponsePrivate::ListGroupCertificateAuthoritiesResponsePrivate(
    ListGroupCertificateAuthoritiesQueueResponse * const q) : ListGroupCertificateAuthoritiesPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListGroupCertificateAuthoritiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupCertificateAuthoritiesResponsePrivate::ListGroupCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupCertificateAuthoritiesResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
