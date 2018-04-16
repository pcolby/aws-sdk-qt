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

#include "deletetableversionresponse.h"
#include "deletetableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableVersionResponse
 *
 * \brief The DeleteTableVersionResponse class provides an interace for Glue DeleteTableVersion responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteTableVersion
 */

/*!
 * @brief  Constructs a new DeleteTableVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTableVersionResponse::DeleteTableVersionResponse(
        const DeleteTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTableVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteTableVersionRequest(request));
    setReply(reply);
}

const DeleteTableVersionRequest * DeleteTableVersionResponse::request() const
{
    Q_D(const DeleteTableVersionResponse);
    return static_cast<const DeleteTableVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeleteTableVersion response.
 *
 * @param  response  Response to parse.
 */
void DeleteTableVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteTableVersionResponsePrivate
 *
 * \brief Private implementation for DeleteTableVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTableVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTableVersionResponse instance.
 */
DeleteTableVersionResponsePrivate::DeleteTableVersionResponsePrivate(
    DeleteTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeleteTableVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTableVersionResponsePrivate::parseDeleteTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTableVersionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
