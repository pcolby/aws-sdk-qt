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

#include "disableawsserviceaccessresponse.h"
#include "disableawsserviceaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  DisableAWSServiceAccessResponse
 *
 * @brief  Handles Organizations DisableAWSServiceAccess responses.
 *
 * @see    OrganizationsClient::disableAWSServiceAccess
 */

/**
 * @brief  Constructs a new DisableAWSServiceAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableAWSServiceAccessResponse::DisableAWSServiceAccessResponse(
        const DisableAWSServiceAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DisableAWSServiceAccessResponsePrivate(this), parent)
{
    setRequest(new DisableAWSServiceAccessRequest(request));
    setReply(reply);
}

const DisableAWSServiceAccessRequest * DisableAWSServiceAccessResponse::request() const
{
    Q_D(const DisableAWSServiceAccessResponse);
    return static_cast<const DisableAWSServiceAccessRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DisableAWSServiceAccess response.
 *
 * @param  response  Response to parse.
 */
void DisableAWSServiceAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableAWSServiceAccessResponsePrivate
 *
 * @brief  Private implementation for DisableAWSServiceAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAWSServiceAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableAWSServiceAccessResponse instance.
 */
DisableAWSServiceAccessResponsePrivate::DisableAWSServiceAccessResponsePrivate(
    DisableAWSServiceAccessResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations DisableAWSServiceAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableAWSServiceAccessResponsePrivate::DisableAWSServiceAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableAWSServiceAccessResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
