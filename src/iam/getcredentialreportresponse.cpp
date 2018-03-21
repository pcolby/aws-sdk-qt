/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcredentialreportresponse.h"
#include "getcredentialreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetCredentialReportResponse
 *
 * @brief  Handles IAM GetCredentialReport responses.
 *
 * @see    IAMClient::getCredentialReport
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCredentialReportResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetCredentialReportResponsePrivate(this), parent)
{
    setRequest(new GetCredentialReportRequest(request));
    setReply(reply);
}

const GetCredentialReportRequest * GetCredentialReportResponse::request() const
{
    Q_D(const GetCredentialReportResponse);
    return static_cast<const GetCredentialReportRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetCredentialReport response.
 *
 * @param  response  Response to parse.
 */
void GetCredentialReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCredentialReportResponsePrivate
 *
 * @brief  Private implementation for GetCredentialReportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCredentialReportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCredentialReportResponse instance.
 */
GetCredentialReportResponsePrivate::GetCredentialReportResponsePrivate(
    GetCredentialReportQueueResponse * const q) : GetCredentialReportPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetCredentialReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCredentialReportResponsePrivate::GetCredentialReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCredentialReportResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
