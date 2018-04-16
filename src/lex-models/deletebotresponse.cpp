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

#include "deletebotresponse.h"
#include "deletebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteBotResponse
 *
 * \brief The DeleteBotResponse class provides an interace for LexModelBuildingService DeleteBot responses.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteBot
 */

/*!
 * @brief  Constructs a new DeleteBotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotResponse::DeleteBotResponse(
        const DeleteBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotResponsePrivate(this), parent)
{
    setRequest(new DeleteBotRequest(request));
    setReply(reply);
}

const DeleteBotRequest * DeleteBotResponse::request() const
{
    Q_D(const DeleteBotResponse);
    return static_cast<const DeleteBotRequest *>(d->request);
}

/*!
 * @brief  Parse a LexModelBuildingService DeleteBot response.
 *
 * @param  response  Response to parse.
 */
void DeleteBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteBotResponsePrivate
 *
 * \brief Private implementation for DeleteBotResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBotResponse instance.
 */
DeleteBotResponsePrivate::DeleteBotResponsePrivate(
    DeleteBotResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an LexModelBuildingService DeleteBotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotResponsePrivate::parseDeleteBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
