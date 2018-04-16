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

#include "deleteuserdefinedfunctionresponse.h"
#include "deleteuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteUserDefinedFunctionResponse
 *
 * \brief The DeleteUserDefinedFunctionResponse class encapsulates Glue DeleteUserDefinedFunction responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteUserDefinedFunction
 */

/*!
 * @brief  Constructs a new DeleteUserDefinedFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserDefinedFunctionResponse::DeleteUserDefinedFunctionResponse(
        const DeleteUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteUserDefinedFunctionRequest(request));
    setReply(reply);
}

const DeleteUserDefinedFunctionRequest * DeleteUserDefinedFunctionResponse::request() const
{
    Q_D(const DeleteUserDefinedFunctionResponse);
    return static_cast<const DeleteUserDefinedFunctionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeleteUserDefinedFunction response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteUserDefinedFunctionResponsePrivate
 *
 * \brief Private implementation for DeleteUserDefinedFunctionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteUserDefinedFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserDefinedFunctionResponse instance.
 */
DeleteUserDefinedFunctionResponsePrivate::DeleteUserDefinedFunctionResponsePrivate(
    DeleteUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeleteUserDefinedFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserDefinedFunctionResponsePrivate::parseDeleteUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserDefinedFunctionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
