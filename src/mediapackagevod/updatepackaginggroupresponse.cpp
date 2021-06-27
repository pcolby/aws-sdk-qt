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

#include "updatepackaginggroupresponse.h"
#include "updatepackaginggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupResponse
 * \brief The UpdatePackagingGroupResponse class provides an interace for MediaPackageVod UpdatePackagingGroup responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::updatePackagingGroup
 */

/*!
 * Constructs a UpdatePackagingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePackagingGroupResponse::UpdatePackagingGroupResponse(
        const UpdatePackagingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new UpdatePackagingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdatePackagingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePackagingGroupRequest * UpdatePackagingGroupResponse::request() const
{
    return static_cast<const UpdatePackagingGroupRequest *>(MediaPackageVodResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod UpdatePackagingGroup \a response.
 */
void UpdatePackagingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePackagingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::UpdatePackagingGroupResponsePrivate
 * \brief The UpdatePackagingGroupResponsePrivate class provides private implementation for UpdatePackagingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a UpdatePackagingGroupResponsePrivate object with public implementation \a q.
 */
UpdatePackagingGroupResponsePrivate::UpdatePackagingGroupResponsePrivate(
    UpdatePackagingGroupResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod UpdatePackagingGroup response element from \a xml.
 */
void UpdatePackagingGroupResponsePrivate::parseUpdatePackagingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePackagingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
