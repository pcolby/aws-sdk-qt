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

#include "resetservicespecificcredentialresponse.h"
#include "resetservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ResetServiceSpecificCredentialResponse
 *
 * @brief  Handles IAM ResetServiceSpecificCredential responses.
 *
 * @see    IAMClient::resetServiceSpecificCredential
 */

/**
 * @brief  Constructs a new ResetServiceSpecificCredentialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetServiceSpecificCredentialResponse::ResetServiceSpecificCredentialResponse(
        const ResetServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ResetServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new ResetServiceSpecificCredentialRequest(request));
    setReply(reply);
}

const ResetServiceSpecificCredentialRequest * ResetServiceSpecificCredentialResponse::request() const
{
    Q_D(const ResetServiceSpecificCredentialResponse);
    return static_cast<const ResetServiceSpecificCredentialRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ResetServiceSpecificCredential response.
 *
 * @param  response  Response to parse.
 */
void ResetServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetServiceSpecificCredentialResponsePrivate
 *
 * @brief  Private implementation for ResetServiceSpecificCredentialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetServiceSpecificCredentialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetServiceSpecificCredentialResponse instance.
 */
ResetServiceSpecificCredentialResponsePrivate::ResetServiceSpecificCredentialResponsePrivate(
    ResetServiceSpecificCredentialResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ResetServiceSpecificCredentialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetServiceSpecificCredentialResponsePrivate::ResetServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetServiceSpecificCredentialResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
