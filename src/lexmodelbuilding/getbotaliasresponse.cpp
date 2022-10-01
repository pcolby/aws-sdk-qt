// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotaliasresponse.h"
#include "getbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasResponse
 * \brief The GetBotAliasResponse class provides an interace for LexModelBuilding GetBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotAlias
 */

/*!
 * Constructs a GetBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotAliasResponse::GetBotAliasResponse(
        const GetBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotAliasResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotAliasRequest * GetBotAliasResponse::request() const
{
    Q_D(const GetBotAliasResponse);
    return static_cast<const GetBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBotAlias \a response.
 */
void GetBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasResponsePrivate
 * \brief The GetBotAliasResponsePrivate class provides private implementation for GetBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotAliasResponsePrivate object with public implementation \a q.
 */
GetBotAliasResponsePrivate::GetBotAliasResponsePrivate(
    GetBotAliasResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBotAlias response element from \a xml.
 */
void GetBotAliasResponsePrivate::parseGetBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
