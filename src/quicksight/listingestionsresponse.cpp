// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listingestionsresponse.h"
#include "listingestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIngestionsResponse
 * \brief The ListIngestionsResponse class provides an interace for QuickSight ListIngestions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIngestions
 */

/*!
 * Constructs a ListIngestionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIngestionsResponse::ListIngestionsResponse(
        const ListIngestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListIngestionsResponsePrivate(this), parent)
{
    setRequest(new ListIngestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIngestionsRequest * ListIngestionsResponse::request() const
{
    Q_D(const ListIngestionsResponse);
    return static_cast<const ListIngestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListIngestions \a response.
 */
void ListIngestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIngestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListIngestionsResponsePrivate
 * \brief The ListIngestionsResponsePrivate class provides private implementation for ListIngestionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIngestionsResponsePrivate object with public implementation \a q.
 */
ListIngestionsResponsePrivate::ListIngestionsResponsePrivate(
    ListIngestionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListIngestions response element from \a xml.
 */
void ListIngestionsResponsePrivate::parseListIngestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIngestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
