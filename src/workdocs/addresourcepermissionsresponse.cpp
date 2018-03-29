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

#include "addresourcepermissionsresponse.h"
#include "addresourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  AddResourcePermissionsResponse
 *
 * @brief  Handles WorkDocs AddResourcePermissions responses.
 *
 * @see    WorkDocsClient::addResourcePermissions
 */

/**
 * @brief  Constructs a new AddResourcePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddResourcePermissionsResponse::AddResourcePermissionsResponse(
        const AddResourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new AddResourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new AddResourcePermissionsRequest(request));
    setReply(reply);
}

const AddResourcePermissionsRequest * AddResourcePermissionsResponse::request() const
{
    Q_D(const AddResourcePermissionsResponse);
    return static_cast<const AddResourcePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs AddResourcePermissions response.
 *
 * @param  response  Response to parse.
 */
void AddResourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddResourcePermissionsResponsePrivate
 *
 * @brief  Private implementation for AddResourcePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddResourcePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddResourcePermissionsResponse instance.
 */
AddResourcePermissionsResponsePrivate::AddResourcePermissionsResponsePrivate(
    AddResourcePermissionsResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs AddResourcePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddResourcePermissionsResponsePrivate::AddResourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddResourcePermissionsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
