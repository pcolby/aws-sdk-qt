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

#include "createfieldlevelencryptionprofileresponse.h"
#include "createfieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionProfileResponse
 *
 * \brief The CreateFieldLevelEncryptionProfileResponse class encapsulates CloudFront CreateFieldLevelEncryptionProfile responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionProfile
 */

/*!
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFieldLevelEncryptionProfileResponse::CreateFieldLevelEncryptionProfileResponse(
        const CreateFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new CreateFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

const CreateFieldLevelEncryptionProfileRequest * CreateFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const CreateFieldLevelEncryptionProfileResponse);
    return static_cast<const CreateFieldLevelEncryptionProfileRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront CreateFieldLevelEncryptionProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateFieldLevelEncryptionProfileResponsePrivate
 *
 * \brief Private implementation for CreateFieldLevelEncryptionProfileResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFieldLevelEncryptionProfileResponse instance.
 */
CreateFieldLevelEncryptionProfileResponsePrivate::CreateFieldLevelEncryptionProfileResponsePrivate(
    CreateFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront CreateFieldLevelEncryptionProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFieldLevelEncryptionProfileResponsePrivate::parseCreateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFieldLevelEncryptionProfileResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
