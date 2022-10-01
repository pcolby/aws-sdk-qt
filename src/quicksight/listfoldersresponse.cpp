// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfoldersresponse.h"
#include "listfoldersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListFoldersResponse
 * \brief The ListFoldersResponse class provides an interace for QuickSight ListFolders responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listFolders
 */

/*!
 * Constructs a ListFoldersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFoldersResponse::ListFoldersResponse(
        const ListFoldersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListFoldersResponsePrivate(this), parent)
{
    setRequest(new ListFoldersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFoldersRequest * ListFoldersResponse::request() const
{
    Q_D(const ListFoldersResponse);
    return static_cast<const ListFoldersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListFolders \a response.
 */
void ListFoldersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFoldersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListFoldersResponsePrivate
 * \brief The ListFoldersResponsePrivate class provides private implementation for ListFoldersResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListFoldersResponsePrivate object with public implementation \a q.
 */
ListFoldersResponsePrivate::ListFoldersResponsePrivate(
    ListFoldersResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListFolders response element from \a xml.
 */
void ListFoldersResponsePrivate::parseListFoldersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFoldersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
