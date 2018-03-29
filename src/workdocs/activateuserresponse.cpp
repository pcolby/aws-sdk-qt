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

#include "activateuserresponse.h"
#include "activateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  ActivateUserResponse
 *
 * @brief  Handles WorkDocs ActivateUser responses.
 *
 * @see    WorkDocsClient::activateUser
 */

/**
 * @brief  Constructs a new ActivateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ActivateUserResponse::ActivateUserResponse(
        const ActivateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new ActivateUserResponsePrivate(this), parent)
{
    setRequest(new ActivateUserRequest(request));
    setReply(reply);
}

const ActivateUserRequest * ActivateUserResponse::request() const
{
    Q_D(const ActivateUserResponse);
    return static_cast<const ActivateUserRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs ActivateUser response.
 *
 * @param  response  Response to parse.
 */
void ActivateUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ActivateUserResponsePrivate
 *
 * @brief  Private implementation for ActivateUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivateUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ActivateUserResponse instance.
 */
ActivateUserResponsePrivate::ActivateUserResponsePrivate(
    ActivateUserQueueResponse * const q) : ActivateUserPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs ActivateUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ActivateUserResponsePrivate::ActivateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateUserResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
