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

#include "getobjectaclresponse.h"
#include "getobjectaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAclResponse
 *
 * \brief The GetObjectAclResponse class encapsulates S3 GetObjectAcl responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getObjectAcl
 */

/*!
 * @brief  Constructs a new GetObjectAclResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectAclResponse::GetObjectAclResponse(
        const GetObjectAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectAclResponsePrivate(this), parent)
{
    setRequest(new GetObjectAclRequest(request));
    setReply(reply);
}

const GetObjectAclRequest * GetObjectAclResponse::request() const
{
    Q_D(const GetObjectAclResponse);
    return static_cast<const GetObjectAclRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 GetObjectAcl response.
 *
 * @param  response  Response to parse.
 */
void GetObjectAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetObjectAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetObjectAclResponsePrivate
 *
 * \brief Private implementation for GetObjectAclResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetObjectAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectAclResponse instance.
 */
GetObjectAclResponsePrivate::GetObjectAclResponsePrivate(
    GetObjectAclResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 GetObjectAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectAclResponsePrivate::parseGetObjectAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectAclResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
