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

#include "generatecredentialreportresponse.h"
#include "generatecredentialreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GenerateCredentialReportResponse
 *
 * @brief  Handles IAM GenerateCredentialReport responses.
 *
 * @see    IAMClient::generateCredentialReport
 */

/**
 * @brief  Constructs a new GenerateCredentialReportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateCredentialReportResponse::GenerateCredentialReportResponse(
        const GenerateCredentialReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GenerateCredentialReportResponsePrivate(this), parent)
{
    setRequest(new GenerateCredentialReportRequest(request));
    setReply(reply);
}

const GenerateCredentialReportRequest * GenerateCredentialReportResponse::request() const
{
    Q_D(const GenerateCredentialReportResponse);
    return static_cast<const GenerateCredentialReportRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GenerateCredentialReport response.
 *
 * @param  response  Response to parse.
 */
void GenerateCredentialReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateCredentialReportResponsePrivate
 *
 * @brief  Private implementation for GenerateCredentialReportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateCredentialReportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateCredentialReportResponse instance.
 */
GenerateCredentialReportResponsePrivate::GenerateCredentialReportResponsePrivate(
    GenerateCredentialReportResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GenerateCredentialReportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateCredentialReportResponsePrivate::GenerateCredentialReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateCredentialReportResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
