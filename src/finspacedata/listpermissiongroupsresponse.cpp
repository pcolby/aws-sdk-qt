// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissiongroupsresponse.h"
#include "listpermissiongroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsResponse
 * \brief The ListPermissionGroupsResponse class provides an interace for FinspaceData ListPermissionGroups responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroups
 */

/*!
 * Constructs a ListPermissionGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionGroupsResponse::ListPermissionGroupsResponse(
        const ListPermissionGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListPermissionGroupsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionGroupsRequest * ListPermissionGroupsResponse::request() const
{
    Q_D(const ListPermissionGroupsResponse);
    return static_cast<const ListPermissionGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListPermissionGroups \a response.
 */
void ListPermissionGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsResponsePrivate
 * \brief The ListPermissionGroupsResponsePrivate class provides private implementation for ListPermissionGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsResponsePrivate object with public implementation \a q.
 */
ListPermissionGroupsResponsePrivate::ListPermissionGroupsResponsePrivate(
    ListPermissionGroupsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListPermissionGroups response element from \a xml.
 */
void ListPermissionGroupsResponsePrivate::parseListPermissionGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
