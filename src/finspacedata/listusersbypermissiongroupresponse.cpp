// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersbypermissiongroupresponse.h"
#include "listusersbypermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupResponse
 * \brief The ListUsersByPermissionGroupResponse class provides an interace for FinspaceData ListUsersByPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listUsersByPermissionGroup
 */

/*!
 * Constructs a ListUsersByPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsersByPermissionGroupResponse::ListUsersByPermissionGroupResponse(
        const ListUsersByPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListUsersByPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new ListUsersByPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsersByPermissionGroupRequest * ListUsersByPermissionGroupResponse::request() const
{
    Q_D(const ListUsersByPermissionGroupResponse);
    return static_cast<const ListUsersByPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListUsersByPermissionGroup \a response.
 */
void ListUsersByPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsersByPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupResponsePrivate
 * \brief The ListUsersByPermissionGroupResponsePrivate class provides private implementation for ListUsersByPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListUsersByPermissionGroupResponsePrivate object with public implementation \a q.
 */
ListUsersByPermissionGroupResponsePrivate::ListUsersByPermissionGroupResponsePrivate(
    ListUsersByPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListUsersByPermissionGroup response element from \a xml.
 */
void ListUsersByPermissionGroupResponsePrivate::parseListUsersByPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersByPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
