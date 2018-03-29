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

#include "deactivateuserresponse.h"
#include "deactivateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeactivateUserResponse
 *
 * @brief  Handles WorkDocs DeactivateUser responses.
 *
 * @see    WorkDocsClient::deactivateUser
 */

/**
 * @brief  Constructs a new DeactivateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeactivateUserResponse::DeactivateUserResponse(
        const DeactivateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeactivateUserResponse(new DeactivateUserResponsePrivate(this), parent)
{
    setRequest(new DeactivateUserRequest(request));
    setReply(reply);
}

const DeactivateUserRequest * DeactivateUserResponse::request() const
{
    Q_D(const DeactivateUserResponse);
    return static_cast<const DeactivateUserRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeactivateUser response.
 *
 * @param  response  Response to parse.
 */
void DeactivateUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeactivateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeactivateUserResponsePrivate
 *
 * @brief  Private implementation for DeactivateUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeactivateUserResponse instance.
 */
DeactivateUserResponsePrivate::DeactivateUserResponsePrivate(
    DeactivateUserResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeactivateUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeactivateUserResponsePrivate::parseDeactivateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateUserResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
