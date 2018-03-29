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

#include "addcommunicationtocaseresponse.h"
#include "addcommunicationtocaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  AddCommunicationToCaseResponse
 *
 * @brief  Handles Support AddCommunicationToCase responses.
 *
 * @see    SupportClient::addCommunicationToCase
 */

/**
 * @brief  Constructs a new AddCommunicationToCaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddCommunicationToCaseResponse::AddCommunicationToCaseResponse(
        const AddCommunicationToCaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new AddCommunicationToCaseResponsePrivate(this), parent)
{
    setRequest(new AddCommunicationToCaseRequest(request));
    setReply(reply);
}

const AddCommunicationToCaseRequest * AddCommunicationToCaseResponse::request() const
{
    Q_D(const AddCommunicationToCaseResponse);
    return static_cast<const AddCommunicationToCaseRequest *>(d->request);
}

/**
 * @brief  Parse a Support AddCommunicationToCase response.
 *
 * @param  response  Response to parse.
 */
void AddCommunicationToCaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddCommunicationToCaseResponsePrivate
 *
 * @brief  Private implementation for AddCommunicationToCaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCommunicationToCaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddCommunicationToCaseResponse instance.
 */
AddCommunicationToCaseResponsePrivate::AddCommunicationToCaseResponsePrivate(
    AddCommunicationToCaseQueueResponse * const q) : AddCommunicationToCasePrivate(q)
{

}

/**
 * @brief  Parse an Support AddCommunicationToCaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddCommunicationToCaseResponsePrivate::AddCommunicationToCaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddCommunicationToCaseResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
