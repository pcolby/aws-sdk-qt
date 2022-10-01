// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDataSetsResponse
 * \brief The ListDataSetsResponse class provides an interace for QuickSight ListDataSets responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDataSets
 */

/*!
 * Constructs a ListDataSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSetsResponse::ListDataSetsResponse(
        const ListDataSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListDataSetsResponsePrivate(this), parent)
{
    setRequest(new ListDataSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSetsRequest * ListDataSetsResponse::request() const
{
    Q_D(const ListDataSetsResponse);
    return static_cast<const ListDataSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListDataSets \a response.
 */
void ListDataSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListDataSetsResponsePrivate
 * \brief The ListDataSetsResponsePrivate class provides private implementation for ListDataSetsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDataSetsResponsePrivate object with public implementation \a q.
 */
ListDataSetsResponsePrivate::ListDataSetsResponsePrivate(
    ListDataSetsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListDataSets response element from \a xml.
 */
void ListDataSetsResponsePrivate::parseListDataSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
