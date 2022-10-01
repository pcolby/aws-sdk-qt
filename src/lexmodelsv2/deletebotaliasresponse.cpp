// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotaliasresponse.h"
#include "deletebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasResponse
 * \brief The DeleteBotAliasResponse class provides an interace for LexModelsV2 DeleteBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotAlias
 */

/*!
 * Constructs a DeleteBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotAliasResponse::DeleteBotAliasResponse(
        const DeleteBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotAliasResponsePrivate(this), parent)
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
 * Parses a successful LexModelsV2 DeleteBotAlias \a response.
 */
void DeleteBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasResponsePrivate
 * \brief The DeleteBotAliasResponsePrivate class provides private implementation for DeleteBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotAliasResponsePrivate object with public implementation \a q.
 */
DeleteBotAliasResponsePrivate::DeleteBotAliasResponsePrivate(
    DeleteBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBotAlias response element from \a xml.
 */
void DeleteBotAliasResponsePrivate::parseDeleteBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
