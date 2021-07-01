/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletepackaginggroupresponse.h"
#include "deletepackaginggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingGroupResponse
 * \brief The DeletePackagingGroupResponse class provides an interace for MediaPackageVod DeletePackagingGroup responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deletePackagingGroup
 */

/*!
 * Constructs a DeletePackagingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackagingGroupResponse::DeletePackagingGroupResponse(
        const DeletePackagingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DeletePackagingGroupResponsePrivate(this), parent)
{
    setRequest(new DeletePackagingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackagingGroupRequest * DeletePackagingGroupResponse::request() const
{
    Q_D(const DeletePackagingGroupResponse);
    return static_cast<const DeletePackagingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DeletePackagingGroup \a response.
 */
void DeletePackagingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackagingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingGroupResponsePrivate
 * \brief The DeletePackagingGroupResponsePrivate class provides private implementation for DeletePackagingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeletePackagingGroupResponsePrivate object with public implementation \a q.
 */
DeletePackagingGroupResponsePrivate::DeletePackagingGroupResponsePrivate(
    DeletePackagingGroupResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DeletePackagingGroup response element from \a xml.
 */
void DeletePackagingGroupResponsePrivate::parseDeletePackagingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackagingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
