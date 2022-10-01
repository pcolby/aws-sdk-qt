// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackaginggroupsresponse.h"
#include "listpackaginggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsResponse
 * \brief The ListPackagingGroupsResponse class provides an interace for MediaPackageVod ListPackagingGroups responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listPackagingGroups
 */

/*!
 * Constructs a ListPackagingGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagingGroupsResponse::ListPackagingGroupsResponse(
        const ListPackagingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new ListPackagingGroupsResponsePrivate(this), parent)
{
    setRequest(new ListPackagingGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagingGroupsRequest * ListPackagingGroupsResponse::request() const
{
    Q_D(const ListPackagingGroupsResponse);
    return static_cast<const ListPackagingGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod ListPackagingGroups \a response.
 */
void ListPackagingGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsResponsePrivate
 * \brief The ListPackagingGroupsResponsePrivate class provides private implementation for ListPackagingGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListPackagingGroupsResponsePrivate object with public implementation \a q.
 */
ListPackagingGroupsResponsePrivate::ListPackagingGroupsResponsePrivate(
    ListPackagingGroupsResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod ListPackagingGroups response element from \a xml.
 */
void ListPackagingGroupsResponsePrivate::parseListPackagingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagingGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
