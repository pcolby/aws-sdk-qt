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

#include "deleteintentresponse.h"
#include "deleteintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentResponse
 *
 * \brief The DeleteIntentResponse class provides an interace for LexModelBuildingService DeleteIntent responses.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteIntent
 */

/*!
 * @brief  Constructs a new DeleteIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntentResponse::DeleteIntentResponse(
        const DeleteIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteIntentResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentRequest(request));
    setReply(reply);
}

const DeleteIntentRequest * DeleteIntentResponse::request() const
{
    Q_D(const DeleteIntentResponse);
    return static_cast<const DeleteIntentRequest *>(d->request);
}

/*!
 * @brief  Parse a LexModelBuildingService DeleteIntent response.
 *
 * @param  response  Response to parse.
 */
void DeleteIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteIntentResponsePrivate
 *
 * \brief Private implementation for DeleteIntentResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteIntentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIntentResponse instance.
 */
DeleteIntentResponsePrivate::DeleteIntentResponsePrivate(
    DeleteIntentResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an LexModelBuildingService DeleteIntentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIntentResponsePrivate::parseDeleteIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
