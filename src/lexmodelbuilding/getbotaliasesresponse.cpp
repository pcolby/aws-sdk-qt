// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotaliasesresponse.h"
#include "getbotaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesResponse
 * \brief The GetBotAliasesResponse class provides an interace for LexModelBuilding GetBotAliases responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotAliases
 */

/*!
 * Constructs a GetBotAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotAliasesResponse::GetBotAliasesResponse(
        const GetBotAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotAliasesResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotAliasesRequest * GetBotAliasesResponse::request() const
{
    Q_D(const GetBotAliasesResponse);
    return static_cast<const GetBotAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBotAliases \a response.
 */
void GetBotAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesResponsePrivate
 * \brief The GetBotAliasesResponsePrivate class provides private implementation for GetBotAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotAliasesResponsePrivate object with public implementation \a q.
 */
GetBotAliasesResponsePrivate::GetBotAliasesResponsePrivate(
    GetBotAliasesResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBotAliases response element from \a xml.
 */
void GetBotAliasesResponsePrivate::parseGetBotAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
