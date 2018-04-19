/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeinputsecuritygroupresponse.h"
#include "describeinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputSecurityGroupResponse
 * \brief The DescribeInputSecurityGroupResponse class provides an interace for MediaLive DescribeInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputSecurityGroup
 */

/*!
 * Constructs a DescribeInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInputSecurityGroupResponse::DescribeInputSecurityGroupResponse(
        const DescribeInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInputSecurityGroupRequest * DescribeInputSecurityGroupResponse::request() const
{
    Q_D(const DescribeInputSecurityGroupResponse);
    return static_cast<const DescribeInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeInputSecurityGroup \a response.
 */
void DescribeInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeInputSecurityGroupResponsePrivate
 * \brief The DescribeInputSecurityGroupResponsePrivate class provides private implementation for DescribeInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
DescribeInputSecurityGroupResponsePrivate::DescribeInputSecurityGroupResponsePrivate(
    DescribeInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeInputSecurityGroup response element from \a xml.
 */
void DescribeInputSecurityGroupResponsePrivate::parseDescribeInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputSecurityGroupResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
