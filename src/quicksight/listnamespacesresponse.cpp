// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnamespacesresponse.h"
#include "listnamespacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListNamespacesResponse
 * \brief The ListNamespacesResponse class provides an interace for QuickSight ListNamespaces responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listNamespaces
 */

/*!
 * Constructs a ListNamespacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNamespacesResponse::ListNamespacesResponse(
        const ListNamespacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListNamespacesResponsePrivate(this), parent)
{
    setRequest(new ListNamespacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNamespacesRequest * ListNamespacesResponse::request() const
{
    Q_D(const ListNamespacesResponse);
    return static_cast<const ListNamespacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListNamespaces \a response.
 */
void ListNamespacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNamespacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListNamespacesResponsePrivate
 * \brief The ListNamespacesResponsePrivate class provides private implementation for ListNamespacesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListNamespacesResponsePrivate object with public implementation \a q.
 */
ListNamespacesResponsePrivate::ListNamespacesResponsePrivate(
    ListNamespacesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListNamespaces response element from \a xml.
 */
void ListNamespacesResponsePrivate::parseListNamespacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNamespacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
