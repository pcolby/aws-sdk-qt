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

#include "updatepublickeyresponse.h"
#include "updatepublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdatePublicKeyResponse
 *
 * \brief The UpdatePublicKeyResponse class encapsulates CloudFront UpdatePublicKey responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updatePublicKey
 */

/*!
 * @brief  Constructs a new UpdatePublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePublicKeyResponse::UpdatePublicKeyResponse(
        const UpdatePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdatePublicKeyResponsePrivate(this), parent)
{
    setRequest(new UpdatePublicKeyRequest(request));
    setReply(reply);
}

const UpdatePublicKeyRequest * UpdatePublicKeyResponse::request() const
{
    Q_D(const UpdatePublicKeyResponse);
    return static_cast<const UpdatePublicKeyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront UpdatePublicKey response.
 *
 * @param  response  Response to parse.
 */
void UpdatePublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdatePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdatePublicKeyResponsePrivate
 *
 * \brief Private implementation for UpdatePublicKeyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdatePublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePublicKeyResponse instance.
 */
UpdatePublicKeyResponsePrivate::UpdatePublicKeyResponsePrivate(
    UpdatePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront UpdatePublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePublicKeyResponsePrivate::parseUpdatePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePublicKeyResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
