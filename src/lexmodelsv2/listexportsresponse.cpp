// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexportsresponse.h"
#include "listexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListExportsResponse
 * \brief The ListExportsResponse class provides an interace for LexModelsV2 ListExports responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listExports
 */

/*!
 * Constructs a ListExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExportsResponse::ListExportsResponse(
        const ListExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListExportsResponsePrivate(this), parent)
{
    setRequest(new ListExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExportsRequest * ListExportsResponse::request() const
{
    Q_D(const ListExportsResponse);
    return static_cast<const ListExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListExports \a response.
 */
void ListExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListExportsResponsePrivate
 * \brief The ListExportsResponsePrivate class provides private implementation for ListExportsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListExportsResponsePrivate object with public implementation \a q.
 */
ListExportsResponsePrivate::ListExportsResponsePrivate(
    ListExportsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListExports response element from \a xml.
 */
void ListExportsResponsePrivate::parseListExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
