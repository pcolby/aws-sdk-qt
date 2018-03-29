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

#include "getcredentialreportresponse.h"
#include "getcredentialreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetCredentialReportResponse
 *
 * @brief  Handles IAM GetCredentialReport responses.
 *
 * @see    IAMClient::getCredentialReport
 */

/**
 * @brief  Constructs a new GetCredentialReportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCredentialReportResponse::GetCredentialReportResponse(
        const GetCredentialReportRequest &request,
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
    Q_D(GetCredentialReportResponse);
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
    GetCredentialReportResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetCredentialReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCredentialReportResponsePrivate::parseGetCredentialReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCredentialReportResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
