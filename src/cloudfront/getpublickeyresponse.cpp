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

#include "getpublickeyresponse.h"
#include "getpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyResponse
 *
 * \brief The GetPublicKeyResponse class provides an interace for CloudFront GetPublicKey responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKey
 */

/*!
 * @brief  Constructs a new GetPublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPublicKeyResponse::GetPublicKeyResponse(
        const GetPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyRequest(request));
    setReply(reply);
}

const GetPublicKeyRequest * GetPublicKeyResponse::request() const
{
    Q_D(const GetPublicKeyResponse);
    return static_cast<const GetPublicKeyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront GetPublicKey response.
 *
 * @param  response  Response to parse.
 */
void GetPublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetPublicKeyResponsePrivate
 *
 * \brief Private implementation for GetPublicKeyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPublicKeyResponse instance.
 */
GetPublicKeyResponsePrivate::GetPublicKeyResponsePrivate(
    GetPublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront GetPublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPublicKeyResponsePrivate::parseGetPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
