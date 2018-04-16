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

#include "getfieldlevelencryptionprofileresponse.h"
#include "getfieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileResponse
 *
 * \brief The GetFieldLevelEncryptionProfileResponse class provides an interace for CloudFront GetFieldLevelEncryptionProfile responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfile
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFieldLevelEncryptionProfileResponse::GetFieldLevelEncryptionProfileResponse(
        const GetFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

const GetFieldLevelEncryptionProfileRequest * GetFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionProfileResponse);
    return static_cast<const GetFieldLevelEncryptionProfileRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront GetFieldLevelEncryptionProfile response.
 *
 * @param  response  Response to parse.
 */
void GetFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetFieldLevelEncryptionProfileResponsePrivate
 *
 * \brief Private implementation for GetFieldLevelEncryptionProfileResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFieldLevelEncryptionProfileResponse instance.
 */
GetFieldLevelEncryptionProfileResponsePrivate::GetFieldLevelEncryptionProfileResponsePrivate(
    GetFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront GetFieldLevelEncryptionProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFieldLevelEncryptionProfileResponsePrivate::parseGetFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionProfileResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
