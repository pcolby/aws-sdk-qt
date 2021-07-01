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

#include "createpackaginggroupresponse.h"
#include "createpackaginggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingGroupResponse
 * \brief The CreatePackagingGroupResponse class provides an interace for MediaPackageVod CreatePackagingGroup responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createPackagingGroup
 */

/*!
 * Constructs a CreatePackagingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackagingGroupResponse::CreatePackagingGroupResponse(
        const CreatePackagingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new CreatePackagingGroupResponsePrivate(this), parent)
{
    setRequest(new CreatePackagingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackagingGroupRequest * CreatePackagingGroupResponse::request() const
{
    Q_D(const CreatePackagingGroupResponse);
    return static_cast<const CreatePackagingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod CreatePackagingGroup \a response.
 */
void CreatePackagingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackagingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::CreatePackagingGroupResponsePrivate
 * \brief The CreatePackagingGroupResponsePrivate class provides private implementation for CreatePackagingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreatePackagingGroupResponsePrivate object with public implementation \a q.
 */
CreatePackagingGroupResponsePrivate::CreatePackagingGroupResponsePrivate(
    CreatePackagingGroupResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod CreatePackagingGroup response element from \a xml.
 */
void CreatePackagingGroupResponsePrivate::parseCreatePackagingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackagingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
