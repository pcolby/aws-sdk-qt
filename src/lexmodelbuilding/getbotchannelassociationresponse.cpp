// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotchannelassociationresponse.h"
#include "getbotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationResponse
 * \brief The GetBotChannelAssociationResponse class provides an interace for LexModelBuilding GetBotChannelAssociation responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotChannelAssociation
 */

/*!
 * Constructs a GetBotChannelAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotChannelAssociationResponse::GetBotChannelAssociationResponse(
        const GetBotChannelAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotChannelAssociationResponsePrivate(this), parent)
{
    setRequest(new GetBotChannelAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotChannelAssociationRequest * GetBotChannelAssociationResponse::request() const
{
    Q_D(const GetBotChannelAssociationResponse);
    return static_cast<const GetBotChannelAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBotChannelAssociation \a response.
 */
void GetBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotChannelAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationResponsePrivate
 * \brief The GetBotChannelAssociationResponsePrivate class provides private implementation for GetBotChannelAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotChannelAssociationResponsePrivate object with public implementation \a q.
 */
GetBotChannelAssociationResponsePrivate::GetBotChannelAssociationResponsePrivate(
    GetBotChannelAssociationResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBotChannelAssociation response element from \a xml.
 */
void GetBotChannelAssociationResponsePrivate::parseGetBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotChannelAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
