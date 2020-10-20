/*
    Copyright 2013-2020 Paul Colby

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

#include "describepackaginggroupresponse.h"
#include "describepackaginggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingGroupResponse
 * \brief The DescribePackagingGroupResponse class provides an interace for MediaPackageVod DescribePackagingGroup responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describePackagingGroup
 */

/*!
 * Constructs a DescribePackagingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackagingGroupResponse::DescribePackagingGroupResponse(
        const DescribePackagingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DescribePackagingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribePackagingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackagingGroupRequest * DescribePackagingGroupResponse::request() const
{
    Q_D(const DescribePackagingGroupResponse);
    return static_cast<const DescribePackagingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DescribePackagingGroup \a response.
 */
void DescribePackagingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackagingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingGroupResponsePrivate
 * \brief The DescribePackagingGroupResponsePrivate class provides private implementation for DescribePackagingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribePackagingGroupResponsePrivate object with public implementation \a q.
 */
DescribePackagingGroupResponsePrivate::DescribePackagingGroupResponsePrivate(
    DescribePackagingGroupResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DescribePackagingGroup response element from \a xml.
 */
void DescribePackagingGroupResponsePrivate::parseDescribePackagingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackagingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
