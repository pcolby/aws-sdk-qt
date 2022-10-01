// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotlocalesresponse.h"
#include "listbotlocalesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesResponse
 * \brief The ListBotLocalesResponse class provides an interace for LexModelsV2 ListBotLocales responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotLocales
 */

/*!
 * Constructs a ListBotLocalesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotLocalesResponse::ListBotLocalesResponse(
        const ListBotLocalesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotLocalesResponsePrivate(this), parent)
{
    setRequest(new ListBotLocalesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotLocalesRequest * ListBotLocalesResponse::request() const
{
    Q_D(const ListBotLocalesResponse);
    return static_cast<const ListBotLocalesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotLocales \a response.
 */
void ListBotLocalesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotLocalesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesResponsePrivate
 * \brief The ListBotLocalesResponsePrivate class provides private implementation for ListBotLocalesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotLocalesResponsePrivate object with public implementation \a q.
 */
ListBotLocalesResponsePrivate::ListBotLocalesResponsePrivate(
    ListBotLocalesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotLocales response element from \a xml.
 */
void ListBotLocalesResponsePrivate::parseListBotLocalesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotLocalesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
