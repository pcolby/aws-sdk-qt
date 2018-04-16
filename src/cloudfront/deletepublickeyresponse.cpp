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

#include "deletepublickeyresponse.h"
#include "deletepublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeletePublicKeyResponse
 *
 * \brief The DeletePublicKeyResponse class encapsulates CloudFront DeletePublicKey responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deletePublicKey
 */

/*!
 * @brief  Constructs a new DeletePublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePublicKeyResponse::DeletePublicKeyResponse(
        const DeletePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeletePublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeletePublicKeyRequest(request));
    setReply(reply);
}

const DeletePublicKeyRequest * DeletePublicKeyResponse::request() const
{
    Q_D(const DeletePublicKeyResponse);
    return static_cast<const DeletePublicKeyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront DeletePublicKey response.
 *
 * @param  response  Response to parse.
 */
void DeletePublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeletePublicKeyResponsePrivate
 *
 * \brief Private implementation for DeletePublicKeyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePublicKeyResponse instance.
 */
DeletePublicKeyResponsePrivate::DeletePublicKeyResponsePrivate(
    DeletePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront DeletePublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePublicKeyResponsePrivate::parseDeletePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicKeyResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
