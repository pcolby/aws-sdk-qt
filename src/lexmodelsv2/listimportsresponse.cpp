// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimportsresponse.h"
#include "listimportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListImportsResponse
 * \brief The ListImportsResponse class provides an interace for LexModelsV2 ListImports responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listImports
 */

/*!
 * Constructs a ListImportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListImportsResponse::ListImportsResponse(
        const ListImportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListImportsResponsePrivate(this), parent)
{
    setRequest(new ListImportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImportsRequest * ListImportsResponse::request() const
{
    Q_D(const ListImportsResponse);
    return static_cast<const ListImportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListImports \a response.
 */
void ListImportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListImportsResponsePrivate
 * \brief The ListImportsResponsePrivate class provides private implementation for ListImportsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListImportsResponsePrivate object with public implementation \a q.
 */
ListImportsResponsePrivate::ListImportsResponsePrivate(
    ListImportsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListImports response element from \a xml.
 */
void ListImportsResponsePrivate::parseListImportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
