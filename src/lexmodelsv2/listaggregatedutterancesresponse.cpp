// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaggregatedutterancesresponse.h"
#include "listaggregatedutterancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListAggregatedUtterancesResponse
 * \brief The ListAggregatedUtterancesResponse class provides an interace for LexModelsV2 ListAggregatedUtterances responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listAggregatedUtterances
 */

/*!
 * Constructs a ListAggregatedUtterancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAggregatedUtterancesResponse::ListAggregatedUtterancesResponse(
        const ListAggregatedUtterancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListAggregatedUtterancesResponsePrivate(this), parent)
{
    setRequest(new ListAggregatedUtterancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAggregatedUtterancesRequest * ListAggregatedUtterancesResponse::request() const
{
    Q_D(const ListAggregatedUtterancesResponse);
    return static_cast<const ListAggregatedUtterancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListAggregatedUtterances \a response.
 */
void ListAggregatedUtterancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAggregatedUtterancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListAggregatedUtterancesResponsePrivate
 * \brief The ListAggregatedUtterancesResponsePrivate class provides private implementation for ListAggregatedUtterancesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListAggregatedUtterancesResponsePrivate object with public implementation \a q.
 */
ListAggregatedUtterancesResponsePrivate::ListAggregatedUtterancesResponsePrivate(
    ListAggregatedUtterancesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListAggregatedUtterances response element from \a xml.
 */
void ListAggregatedUtterancesResponsePrivate::parseListAggregatedUtterancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAggregatedUtterancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
