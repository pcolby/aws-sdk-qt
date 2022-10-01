// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemeversionsresponse.h"
#include "listthemeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemeVersionsResponse
 * \brief The ListThemeVersionsResponse class provides an interace for QuickSight ListThemeVersions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemeVersions
 */

/*!
 * Constructs a ListThemeVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemeVersionsResponse::ListThemeVersionsResponse(
        const ListThemeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListThemeVersionsResponsePrivate(this), parent)
{
    setRequest(new ListThemeVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemeVersionsRequest * ListThemeVersionsResponse::request() const
{
    Q_D(const ListThemeVersionsResponse);
    return static_cast<const ListThemeVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListThemeVersions \a response.
 */
void ListThemeVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListThemeVersionsResponsePrivate
 * \brief The ListThemeVersionsResponsePrivate class provides private implementation for ListThemeVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemeVersionsResponsePrivate object with public implementation \a q.
 */
ListThemeVersionsResponsePrivate::ListThemeVersionsResponsePrivate(
    ListThemeVersionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListThemeVersions response element from \a xml.
 */
void ListThemeVersionsResponsePrivate::parseListThemeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemeVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
