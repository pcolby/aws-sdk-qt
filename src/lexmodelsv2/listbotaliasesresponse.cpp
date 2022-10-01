// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotaliasesresponse.h"
#include "listbotaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesResponse
 * \brief The ListBotAliasesResponse class provides an interace for LexModelsV2 ListBotAliases responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotAliases
 */

/*!
 * Constructs a ListBotAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotAliasesResponse::ListBotAliasesResponse(
        const ListBotAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotAliasesResponsePrivate(this), parent)
{
    setRequest(new ListBotAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotAliasesRequest * ListBotAliasesResponse::request() const
{
    Q_D(const ListBotAliasesResponse);
    return static_cast<const ListBotAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotAliases \a response.
 */
void ListBotAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotAliasesResponsePrivate
 * \brief The ListBotAliasesResponsePrivate class provides private implementation for ListBotAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotAliasesResponsePrivate object with public implementation \a q.
 */
ListBotAliasesResponsePrivate::ListBotAliasesResponsePrivate(
    ListBotAliasesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotAliases response element from \a xml.
 */
void ListBotAliasesResponsePrivate::parseListBotAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
