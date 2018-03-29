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

#include "addattachmentstosetresponse.h"
#include "addattachmentstosetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  AddAttachmentsToSetResponse
 *
 * @brief  Handles Support AddAttachmentsToSet responses.
 *
 * @see    SupportClient::addAttachmentsToSet
 */

/**
 * @brief  Constructs a new AddAttachmentsToSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddAttachmentsToSetResponse::AddAttachmentsToSetResponse(
        const AddAttachmentsToSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new AddAttachmentsToSetResponsePrivate(this), parent)
{
    setRequest(new AddAttachmentsToSetRequest(request));
    setReply(reply);
}

const AddAttachmentsToSetRequest * AddAttachmentsToSetResponse::request() const
{
    Q_D(const AddAttachmentsToSetResponse);
    return static_cast<const AddAttachmentsToSetRequest *>(d->request);
}

/**
 * @brief  Parse a Support AddAttachmentsToSet response.
 *
 * @param  response  Response to parse.
 */
void AddAttachmentsToSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddAttachmentsToSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddAttachmentsToSetResponsePrivate
 *
 * @brief  Private implementation for AddAttachmentsToSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddAttachmentsToSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddAttachmentsToSetResponse instance.
 */
AddAttachmentsToSetResponsePrivate::AddAttachmentsToSetResponsePrivate(
    AddAttachmentsToSetResponse * const q) : SupportResponsePrivate(q)
{

}

/**
 * @brief  Parse an Support AddAttachmentsToSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddAttachmentsToSetResponsePrivate::AddAttachmentsToSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddAttachmentsToSetResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
