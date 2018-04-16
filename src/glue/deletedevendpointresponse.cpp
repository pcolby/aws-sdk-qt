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

#include "deletedevendpointresponse.h"
#include "deletedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDevEndpointResponse
 *
 * \brief The DeleteDevEndpointResponse class encapsulates Glue DeleteDevEndpoint responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteDevEndpoint
 */

/*!
 * @brief  Constructs a new DeleteDevEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDevEndpointResponse::DeleteDevEndpointResponse(
        const DeleteDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDevEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteDevEndpointRequest(request));
    setReply(reply);
}

const DeleteDevEndpointRequest * DeleteDevEndpointResponse::request() const
{
    Q_D(const DeleteDevEndpointResponse);
    return static_cast<const DeleteDevEndpointRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeleteDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDevEndpointResponsePrivate
 *
 * \brief Private implementation for DeleteDevEndpointResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDevEndpointResponse instance.
 */
DeleteDevEndpointResponsePrivate::DeleteDevEndpointResponsePrivate(
    DeleteDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeleteDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDevEndpointResponsePrivate::parseDeleteDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
