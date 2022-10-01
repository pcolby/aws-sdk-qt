// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotchannelassociationsresponse.h"
#include "getbotchannelassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationsResponse
 * \brief The GetBotChannelAssociationsResponse class provides an interace for LexModelBuilding GetBotChannelAssociations responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotChannelAssociations
 */

/*!
 * Constructs a GetBotChannelAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotChannelAssociationsResponse::GetBotChannelAssociationsResponse(
        const GetBotChannelAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotChannelAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetBotChannelAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotChannelAssociationsRequest * GetBotChannelAssociationsResponse::request() const
{
    Q_D(const GetBotChannelAssociationsResponse);
    return static_cast<const GetBotChannelAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBotChannelAssociations \a response.
 */
void GetBotChannelAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotChannelAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotChannelAssociationsResponsePrivate
 * \brief The GetBotChannelAssociationsResponsePrivate class provides private implementation for GetBotChannelAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotChannelAssociationsResponsePrivate object with public implementation \a q.
 */
GetBotChannelAssociationsResponsePrivate::GetBotChannelAssociationsResponsePrivate(
    GetBotChannelAssociationsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBotChannelAssociations response element from \a xml.
 */
void GetBotChannelAssociationsResponsePrivate::parseGetBotChannelAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotChannelAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
