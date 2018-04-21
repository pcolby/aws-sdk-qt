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

#include "deletebotchannelassociationresponse.h"
#include "deletebotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteBotChannelAssociationResponse
 * \brief The DeleteBotChannelAssociationResponse class provides an interace for LexModelBuildingService DeleteBotChannelAssociation responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteBotChannelAssociation
 */

/*!
 * Constructs a DeleteBotChannelAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotChannelAssociationResponse::DeleteBotChannelAssociationResponse(
        const DeleteBotChannelAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotChannelAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteBotChannelAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotChannelAssociationRequest * DeleteBotChannelAssociationResponse::request() const
{
    Q_D(const DeleteBotChannelAssociationResponse);
    return static_cast<const DeleteBotChannelAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService DeleteBotChannelAssociation \a response.
 */
void DeleteBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBotChannelAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteBotChannelAssociationResponsePrivate
 * \brief The DeleteBotChannelAssociationResponsePrivate class provides private implementation for DeleteBotChannelAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteBotChannelAssociationResponsePrivate object with public implementation \a q.
 */
DeleteBotChannelAssociationResponsePrivate::DeleteBotChannelAssociationResponsePrivate(
    DeleteBotChannelAssociationResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService DeleteBotChannelAssociation response element from \a xml.
 */
void DeleteBotChannelAssociationResponsePrivate::parseDeleteBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotChannelAssociationResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
