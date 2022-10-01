// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DescribeInputSecurityGroupResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
