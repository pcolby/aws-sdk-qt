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

#include "listservercertificatesresponse.h"
#include "listservercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListServerCertificatesResponse
 *
 * @brief  Handles IAM ListServerCertificates responses.
 *
 * @see    IAMClient::listServerCertificates
 */

/**
 * @brief  Constructs a new ListServerCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListServerCertificatesResponse::ListServerCertificatesResponse(
        const ListServerCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListServerCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListServerCertificatesRequest(request));
    setReply(reply);
}

const ListServerCertificatesRequest * ListServerCertificatesResponse::request() const
{
    Q_D(const ListServerCertificatesResponse);
    return static_cast<const ListServerCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListServerCertificates response.
 *
 * @param  response  Response to parse.
 */
void ListServerCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListServerCertificatesResponsePrivate
 *
 * @brief  Private implementation for ListServerCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServerCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListServerCertificatesResponse instance.
 */
ListServerCertificatesResponsePrivate::ListServerCertificatesResponsePrivate(
    ListServerCertificatesQueueResponse * const q) : ListServerCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListServerCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListServerCertificatesResponsePrivate::ListServerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServerCertificatesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
