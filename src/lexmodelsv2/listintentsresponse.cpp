// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listintentsresponse.h"
#include "listintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListIntentsResponse
 * \brief The ListIntentsResponse class provides an interace for LexModelsV2 ListIntents responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listIntents
 */

/*!
 * Constructs a ListIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIntentsResponse::ListIntentsResponse(
        const ListIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListIntentsResponsePrivate(this), parent)
{
    setRequest(new ListIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIntentsRequest * ListIntentsResponse::request() const
{
    Q_D(const ListIntentsResponse);
    return static_cast<const ListIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListIntents \a response.
 */
void ListIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListIntentsResponsePrivate
 * \brief The ListIntentsResponsePrivate class provides private implementation for ListIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListIntentsResponsePrivate object with public implementation \a q.
 */
ListIntentsResponsePrivate::ListIntentsResponsePrivate(
    ListIntentsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListIntents response element from \a xml.
 */
void ListIntentsResponsePrivate::parseListIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
