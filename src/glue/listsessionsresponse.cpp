// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsessionsresponse.h"
#include "listsessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSessionsResponse
 * \brief The ListSessionsResponse class provides an interace for Glue ListSessions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSessions
 */

/*!
 * Constructs a ListSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSessionsResponse::ListSessionsResponse(
        const ListSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListSessionsResponsePrivate(this), parent)
{
    setRequest(new ListSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSessionsRequest * ListSessionsResponse::request() const
{
    Q_D(const ListSessionsResponse);
    return static_cast<const ListSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListSessions \a response.
 */
void ListSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListSessionsResponsePrivate
 * \brief The ListSessionsResponsePrivate class provides private implementation for ListSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSessionsResponsePrivate object with public implementation \a q.
 */
ListSessionsResponsePrivate::ListSessionsResponsePrivate(
    ListSessionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListSessions response element from \a xml.
 */
void ListSessionsResponsePrivate::parseListSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
