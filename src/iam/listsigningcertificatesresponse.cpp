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

#include "listsigningcertificatesresponse.h"
#include "listsigningcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListSigningCertificatesResponse
 *
 * @brief  Handles IAM ListSigningCertificates responses.
 *
 * @see    IAMClient::listSigningCertificates
 */

/**
 * @brief  Constructs a new ListSigningCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSigningCertificatesResponse::ListSigningCertificatesResponse(
        const ListSigningCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListSigningCertificatesResponse(new ListSigningCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListSigningCertificatesRequest(request));
    setReply(reply);
}

const ListSigningCertificatesRequest * ListSigningCertificatesResponse::request() const
{
    Q_D(const ListSigningCertificatesResponse);
    return static_cast<const ListSigningCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListSigningCertificates response.
 *
 * @param  response  Response to parse.
 */
void ListSigningCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSigningCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSigningCertificatesResponsePrivate
 *
 * @brief  Private implementation for ListSigningCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSigningCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSigningCertificatesResponse instance.
 */
ListSigningCertificatesResponsePrivate::ListSigningCertificatesResponsePrivate(
    ListSigningCertificatesResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListSigningCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSigningCertificatesResponsePrivate::parseListSigningCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSigningCertificatesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
