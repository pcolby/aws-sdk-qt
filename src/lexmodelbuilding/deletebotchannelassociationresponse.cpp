// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotchannelassociationresponse.h"
#include "deletebotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationResponse
 * \brief The DeleteBotChannelAssociationResponse class provides an interace for LexModelBuilding DeleteBotChannelAssociation responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotChannelAssociation
 */

/*!
 * Constructs a DeleteBotChannelAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotChannelAssociationResponse::DeleteBotChannelAssociationResponse(
        const DeleteBotChannelAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteBotChannelAssociationResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuilding DeleteBotChannelAssociation \a response.
 */
void DeleteBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotChannelAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotChannelAssociationResponsePrivate
 * \brief The DeleteBotChannelAssociationResponsePrivate class provides private implementation for DeleteBotChannelAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotChannelAssociationResponsePrivate object with public implementation \a q.
 */
DeleteBotChannelAssociationResponsePrivate::DeleteBotChannelAssociationResponsePrivate(
    DeleteBotChannelAssociationResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteBotChannelAssociation response element from \a xml.
 */
void DeleteBotChannelAssociationResponsePrivate::parseDeleteBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotChannelAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
