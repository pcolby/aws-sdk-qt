// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
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
