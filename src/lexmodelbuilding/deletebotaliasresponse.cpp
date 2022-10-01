// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotaliasresponse.h"
#include "deletebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasResponse
 * \brief The DeleteBotAliasResponse class provides an interace for LexModelBuilding DeleteBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotAlias
 */

/*!
 * Constructs a DeleteBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotAliasResponse::DeleteBotAliasResponse(
        const DeleteBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteBotAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotAliasRequest * DeleteBotAliasResponse::request() const
{
    Q_D(const DeleteBotAliasResponse);
    return static_cast<const DeleteBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteBotAlias \a response.
 */
void DeleteBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasResponsePrivate
 * \brief The DeleteBotAliasResponsePrivate class provides private implementation for DeleteBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotAliasResponsePrivate object with public implementation \a q.
 */
DeleteBotAliasResponsePrivate::DeleteBotAliasResponsePrivate(
    DeleteBotAliasResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteBotAlias response element from \a xml.
 */
void DeleteBotAliasResponsePrivate::parseDeleteBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
