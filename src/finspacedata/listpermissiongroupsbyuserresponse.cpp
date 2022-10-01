// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissiongroupsbyuserresponse.h"
#include "listpermissiongroupsbyuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserResponse
 * \brief The ListPermissionGroupsByUserResponse class provides an interace for FinspaceData ListPermissionGroupsByUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroupsByUser
 */

/*!
 * Constructs a ListPermissionGroupsByUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionGroupsByUserResponse::ListPermissionGroupsByUserResponse(
        const ListPermissionGroupsByUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListPermissionGroupsByUserResponsePrivate(this), parent)
{
    setRequest(new ListPermissionGroupsByUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionGroupsByUserRequest * ListPermissionGroupsByUserResponse::request() const
{
    Q_D(const ListPermissionGroupsByUserResponse);
    return static_cast<const ListPermissionGroupsByUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListPermissionGroupsByUser \a response.
 */
void ListPermissionGroupsByUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionGroupsByUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserResponsePrivate
 * \brief The ListPermissionGroupsByUserResponsePrivate class provides private implementation for ListPermissionGroupsByUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsByUserResponsePrivate object with public implementation \a q.
 */
ListPermissionGroupsByUserResponsePrivate::ListPermissionGroupsByUserResponsePrivate(
    ListPermissionGroupsByUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListPermissionGroupsByUser response element from \a xml.
 */
void ListPermissionGroupsByUserResponsePrivate::parseListPermissionGroupsByUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionGroupsByUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
