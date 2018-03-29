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

#include "deleteprofileresponse.h"
#include "deleteprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  DeleteProfileResponse
 *
 * @brief  Handles AlexaForBusiness DeleteProfile responses.
 *
 * @see    AlexaForBusinessClient::deleteProfile
 */

/**
 * @brief  Constructs a new DeleteProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProfileResponse::DeleteProfileResponse(
        const DeleteProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteProfileRequest(request));
    setReply(reply);
}

const DeleteProfileRequest * DeleteProfileResponse::request() const
{
    Q_D(const DeleteProfileResponse);
    return static_cast<const DeleteProfileRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DeleteProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProfileResponse instance.
 */
DeleteProfileResponsePrivate::DeleteProfileResponsePrivate(
    DeleteProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DeleteProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProfileResponsePrivate::parseDeleteProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProfileResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
