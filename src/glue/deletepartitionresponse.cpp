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

#include "deletepartitionresponse.h"
#include "deletepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionResponse
 *
 * \brief The DeletePartitionResponse class encapsulates Glue DeletePartition responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deletePartition
 */

/*!
 * @brief  Constructs a new DeletePartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePartitionResponse::DeletePartitionResponse(
        const DeletePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeletePartitionResponsePrivate(this), parent)
{
    setRequest(new DeletePartitionRequest(request));
    setReply(reply);
}

const DeletePartitionRequest * DeletePartitionResponse::request() const
{
    Q_D(const DeletePartitionResponse);
    return static_cast<const DeletePartitionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeletePartition response.
 *
 * @param  response  Response to parse.
 */
void DeletePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeletePartitionResponsePrivate
 *
 * \brief Private implementation for DeletePartitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePartitionResponse instance.
 */
DeletePartitionResponsePrivate::DeletePartitionResponsePrivate(
    DeletePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeletePartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePartitionResponsePrivate::parseDeletePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
