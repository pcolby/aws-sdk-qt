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

#include "listtagsforcertificateresponse.h"
#include "listtagsforcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/**
 * @class  ListTagsForCertificateResponse
 *
 * @brief  Handles ACM ListTagsForCertificate responses.
 *
 * @see    ACMClient::listTagsForCertificate
 */

/**
 * @brief  Constructs a new ListTagsForCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForCertificateResponse::ListTagsForCertificateResponse(
        const ListTagsForCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new ListTagsForCertificateResponsePrivate(this), parent)
{
    setRequest(new ListTagsForCertificateRequest(request));
    setReply(reply);
}

const ListTagsForCertificateRequest * ListTagsForCertificateResponse::request() const
{
    Q_D(const ListTagsForCertificateResponse);
    return static_cast<const ListTagsForCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM ListTagsForCertificate response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForCertificateResponsePrivate
 *
 * @brief  Private implementation for ListTagsForCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForCertificateResponse instance.
 */
ListTagsForCertificateResponsePrivate::ListTagsForCertificateResponsePrivate(
    ListTagsForCertificateResponse * const q) : ACMResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACM ListTagsForCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForCertificateResponsePrivate::ListTagsForCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
