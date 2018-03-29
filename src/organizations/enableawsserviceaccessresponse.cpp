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

#include "enableawsserviceaccessresponse.h"
#include "enableawsserviceaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  EnableAWSServiceAccessResponse
 *
 * @brief  Handles Organizations EnableAWSServiceAccess responses.
 *
 * @see    OrganizationsClient::enableAWSServiceAccess
 */

/**
 * @brief  Constructs a new EnableAWSServiceAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableAWSServiceAccessResponse::EnableAWSServiceAccessResponse(
        const EnableAWSServiceAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EnableAWSServiceAccessResponse(new EnableAWSServiceAccessResponsePrivate(this), parent)
{
    setRequest(new EnableAWSServiceAccessRequest(request));
    setReply(reply);
}

const EnableAWSServiceAccessRequest * EnableAWSServiceAccessResponse::request() const
{
    Q_D(const EnableAWSServiceAccessResponse);
    return static_cast<const EnableAWSServiceAccessRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations EnableAWSServiceAccess response.
 *
 * @param  response  Response to parse.
 */
void EnableAWSServiceAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableAWSServiceAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableAWSServiceAccessResponsePrivate
 *
 * @brief  Private implementation for EnableAWSServiceAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAWSServiceAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableAWSServiceAccessResponse instance.
 */
EnableAWSServiceAccessResponsePrivate::EnableAWSServiceAccessResponsePrivate(
    EnableAWSServiceAccessResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations EnableAWSServiceAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableAWSServiceAccessResponsePrivate::parseEnableAWSServiceAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAWSServiceAccessResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
