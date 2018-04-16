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

#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "getfieldlevelencryptionprofileconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigResponse
 *
 * \brief The GetFieldLevelEncryptionProfileConfigResponse class encapsulates CloudFront GetFieldLevelEncryptionProfileConfig responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfileConfig
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFieldLevelEncryptionProfileConfigResponse::GetFieldLevelEncryptionProfileConfigResponse(
        const GetFieldLevelEncryptionProfileConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionProfileConfigResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionProfileConfigRequest(request));
    setReply(reply);
}

const GetFieldLevelEncryptionProfileConfigRequest * GetFieldLevelEncryptionProfileConfigResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionProfileConfigResponse);
    return static_cast<const GetFieldLevelEncryptionProfileConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront GetFieldLevelEncryptionProfileConfig response.
 *
 * @param  response  Response to parse.
 */
void GetFieldLevelEncryptionProfileConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionProfileConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetFieldLevelEncryptionProfileConfigResponsePrivate
 *
 * \brief Private implementation for GetFieldLevelEncryptionProfileConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFieldLevelEncryptionProfileConfigResponse instance.
 */
GetFieldLevelEncryptionProfileConfigResponsePrivate::GetFieldLevelEncryptionProfileConfigResponsePrivate(
    GetFieldLevelEncryptionProfileConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront GetFieldLevelEncryptionProfileConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFieldLevelEncryptionProfileConfigResponsePrivate::parseGetFieldLevelEncryptionProfileConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionProfileConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
