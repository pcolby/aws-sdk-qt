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

#include "describeprotectiongroupresponse.h"
#include "describeprotectiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionGroupResponse
 * \brief The DescribeProtectionGroupResponse class provides an interace for Shield DescribeProtectionGroup responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::describeProtectionGroup
 */

/*!
 * Constructs a DescribeProtectionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProtectionGroupResponse::DescribeProtectionGroupResponse(
        const DescribeProtectionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeProtectionGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeProtectionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProtectionGroupRequest * DescribeProtectionGroupResponse::request() const
{
    Q_D(const DescribeProtectionGroupResponse);
    return static_cast<const DescribeProtectionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeProtectionGroup \a response.
 */
void DescribeProtectionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProtectionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeProtectionGroupResponsePrivate
 * \brief The DescribeProtectionGroupResponsePrivate class provides private implementation for DescribeProtectionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeProtectionGroupResponsePrivate object with public implementation \a q.
 */
DescribeProtectionGroupResponsePrivate::DescribeProtectionGroupResponsePrivate(
    DescribeProtectionGroupResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeProtectionGroup response element from \a xml.
 */
void DescribeProtectionGroupResponsePrivate::parseDescribeProtectionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProtectionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
