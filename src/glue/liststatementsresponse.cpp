// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststatementsresponse.h"
#include "liststatementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListStatementsResponse
 * \brief The ListStatementsResponse class provides an interace for Glue ListStatements responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listStatements
 */

/*!
 * Constructs a ListStatementsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStatementsResponse::ListStatementsResponse(
        const ListStatementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListStatementsResponsePrivate(this), parent)
{
    setRequest(new ListStatementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStatementsRequest * ListStatementsResponse::request() const
{
    Q_D(const ListStatementsResponse);
    return static_cast<const ListStatementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListStatements \a response.
 */
void ListStatementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStatementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListStatementsResponsePrivate
 * \brief The ListStatementsResponsePrivate class provides private implementation for ListStatementsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListStatementsResponsePrivate object with public implementation \a q.
 */
ListStatementsResponsePrivate::ListStatementsResponsePrivate(
    ListStatementsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListStatements response element from \a xml.
 */
void ListStatementsResponsePrivate::parseListStatementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStatementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
