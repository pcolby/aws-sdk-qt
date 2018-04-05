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

#include "listcertificateauthoritiesresponse.h"
#include "listcertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/**
 * @class  ListCertificateAuthoritiesResponse
 *
 * @brief  Handles ACMPCA ListCertificateAuthorities responses.
 *
 * @see    ACMPCAClient::listCertificateAuthorities
 */

/**
 * @brief  Constructs a new ListCertificateAuthoritiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCertificateAuthoritiesResponse::ListCertificateAuthoritiesResponse(
        const ListCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMPCAResponse(new ListCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListCertificateAuthoritiesRequest(request));
    setReply(reply);
}

const ListCertificateAuthoritiesRequest * ListCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListCertificateAuthoritiesResponse);
    return static_cast<const ListCertificateAuthoritiesRequest *>(d->request);
}

/**
 * @brief  Parse a ACMPCA ListCertificateAuthorities response.
 *
 * @param  response  Response to parse.
 */
void ListCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCertificateAuthoritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCertificateAuthoritiesResponsePrivate
 *
 * @brief  Private implementation for ListCertificateAuthoritiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCertificateAuthoritiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCertificateAuthoritiesResponse instance.
 */
ListCertificateAuthoritiesResponsePrivate::ListCertificateAuthoritiesResponsePrivate(
    ListCertificateAuthoritiesResponse * const q) : ACMPCAResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACMPCA ListCertificateAuthoritiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCertificateAuthoritiesResponsePrivate::parseListCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificateAuthoritiesResponse"));
    /// @todo
}

} // namespace ACMPCA
} // namespace QtAws
