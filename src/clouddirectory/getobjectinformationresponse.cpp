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

#include "getobjectinformationresponse.h"
#include "getobjectinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetObjectInformationResponse
 *
 * @brief  Handles CloudDirectory GetObjectInformation responses.
 *
 * @see    CloudDirectoryClient::getObjectInformation
 */

/**
 * @brief  Constructs a new GetObjectInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectInformationResponse::GetObjectInformationResponse(
        const GetObjectInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetObjectInformationResponsePrivate(this), parent)
{
    setRequest(new GetObjectInformationRequest(request));
    setReply(reply);
}

const GetObjectInformationRequest * GetObjectInformationResponse::request() const
{
    Q_D(const GetObjectInformationResponse);
    return static_cast<const GetObjectInformationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetObjectInformation response.
 *
 * @param  response  Response to parse.
 */
void GetObjectInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetObjectInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectInformationResponsePrivate
 *
 * @brief  Private implementation for GetObjectInformationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectInformationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectInformationResponse instance.
 */
GetObjectInformationResponsePrivate::GetObjectInformationResponsePrivate(
    GetObjectInformationResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetObjectInformationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectInformationResponsePrivate::GetObjectInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectInformationResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
