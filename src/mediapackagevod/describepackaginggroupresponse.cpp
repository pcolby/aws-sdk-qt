// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
