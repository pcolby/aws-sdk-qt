// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemesresponse.h"
#include "listthemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemesResponse
 * \brief The ListThemesResponse class provides an interace for QuickSight ListThemes responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemes
 */

/*!
 * Constructs a ListThemesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemesResponse::ListThemesResponse(
        const ListThemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListThemesResponsePrivate(this), parent)
{
    setRequest(new ListThemesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemesRequest * ListThemesResponse::request() const
{
    Q_D(const ListThemesResponse);
    return static_cast<const ListThemesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListThemes \a response.
 */
void ListThemesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListThemesResponsePrivate
 * \brief The ListThemesResponsePrivate class provides private implementation for ListThemesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemesResponsePrivate object with public implementation \a q.
 */
ListThemesResponsePrivate::ListThemesResponsePrivate(
    ListThemesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListThemes response element from \a xml.
 */
void ListThemesResponsePrivate::parseListThemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
