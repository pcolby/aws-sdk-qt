// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotversionsresponse.h"
#include "listbotversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsResponse
 * \brief The ListBotVersionsResponse class provides an interace for LexModelsV2 ListBotVersions responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotVersions
 */

/*!
 * Constructs a ListBotVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotVersionsResponse::ListBotVersionsResponse(
        const ListBotVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotVersionsResponsePrivate(this), parent)
{
    setRequest(new ListBotVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotVersionsRequest * ListBotVersionsResponse::request() const
{
    Q_D(const ListBotVersionsResponse);
    return static_cast<const ListBotVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotVersions \a response.
 */
void ListBotVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsResponsePrivate
 * \brief The ListBotVersionsResponsePrivate class provides private implementation for ListBotVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotVersionsResponsePrivate object with public implementation \a q.
 */
ListBotVersionsResponsePrivate::ListBotVersionsResponsePrivate(
    ListBotVersionsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotVersions response element from \a xml.
 */
void ListBotVersionsResponsePrivate::parseListBotVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
