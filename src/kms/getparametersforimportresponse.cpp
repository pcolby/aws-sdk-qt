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

#include "getparametersforimportresponse.h"
#include "getparametersforimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GetParametersForImportResponse
 *
 * @brief  Handles KMS GetParametersForImport responses.
 *
 * @see    KMSClient::getParametersForImport
 */

/**
 * @brief  Constructs a new GetParametersForImportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParametersForImportResponse::GetParametersForImportResponse(
        const GetParametersForImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GetParametersForImportResponsePrivate(this), parent)
{
    setRequest(new GetParametersForImportRequest(request));
    setReply(reply);
}

const GetParametersForImportRequest * GetParametersForImportResponse::request() const
{
    Q_D(const GetParametersForImportResponse);
    return static_cast<const GetParametersForImportRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GetParametersForImport response.
 *
 * @param  response  Response to parse.
 */
void GetParametersForImportResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetParametersForImportResponsePrivate
 *
 * @brief  Private implementation for GetParametersForImportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersForImportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetParametersForImportResponse instance.
 */
GetParametersForImportResponsePrivate::GetParametersForImportResponsePrivate(
    GetParametersForImportResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS GetParametersForImportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetParametersForImportResponsePrivate::GetParametersForImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParametersForImportResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
