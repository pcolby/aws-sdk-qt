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

#include "putmailboxpermissionsresponse.h"
#include "putmailboxpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  PutMailboxPermissionsResponse
 *
 * @brief  Handles WorkMail PutMailboxPermissions responses.
 *
 * @see    WorkMailClient::putMailboxPermissions
 */

/**
 * @brief  Constructs a new PutMailboxPermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMailboxPermissionsResponse::PutMailboxPermissionsResponse(
        const PutMailboxPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new PutMailboxPermissionsResponsePrivate(this), parent)
{
    setRequest(new PutMailboxPermissionsRequest(request));
    setReply(reply);
}

const PutMailboxPermissionsRequest * PutMailboxPermissionsResponse::request() const
{
    Q_D(const PutMailboxPermissionsResponse);
    return static_cast<const PutMailboxPermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail PutMailboxPermissions response.
 *
 * @param  response  Response to parse.
 */
void PutMailboxPermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutMailboxPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMailboxPermissionsResponsePrivate
 *
 * @brief  Private implementation for PutMailboxPermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMailboxPermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMailboxPermissionsResponse instance.
 */
PutMailboxPermissionsResponsePrivate::PutMailboxPermissionsResponsePrivate(
    PutMailboxPermissionsResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail PutMailboxPermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMailboxPermissionsResponsePrivate::parsePutMailboxPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMailboxPermissionsResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
