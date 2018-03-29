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

#include "addtagstovaultresponse.h"
#include "addtagstovaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  AddTagsToVaultResponse
 *
 * @brief  Handles Glacier AddTagsToVault responses.
 *
 * @see    GlacierClient::addTagsToVault
 */

/**
 * @brief  Constructs a new AddTagsToVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToVaultResponse::AddTagsToVaultResponse(
        const AddTagsToVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new AddTagsToVaultResponsePrivate(this), parent)
{
    setRequest(new AddTagsToVaultRequest(request));
    setReply(reply);
}

const AddTagsToVaultRequest * AddTagsToVaultResponse::request() const
{
    Q_D(const AddTagsToVaultResponse);
    return static_cast<const AddTagsToVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier AddTagsToVault response.
 *
 * @param  response  Response to parse.
 */
void AddTagsToVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddTagsToVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsToVaultResponsePrivate
 *
 * @brief  Private implementation for AddTagsToVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsToVaultResponse instance.
 */
AddTagsToVaultResponsePrivate::AddTagsToVaultResponsePrivate(
    AddTagsToVaultResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier AddTagsToVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsToVaultResponsePrivate::AddTagsToVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToVaultResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
