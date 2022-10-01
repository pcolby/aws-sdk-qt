// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupmembershipresponse.h"
#include "describegroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipResponse
 * \brief The DescribeGroupMembershipResponse class provides an interace for QuickSight DescribeGroupMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeGroupMembership
 */

/*!
 * Constructs a DescribeGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupMembershipResponse::DescribeGroupMembershipResponse(
        const DescribeGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupMembershipRequest * DescribeGroupMembershipResponse::request() const
{
    Q_D(const DescribeGroupMembershipResponse);
    return static_cast<const DescribeGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeGroupMembership \a response.
 */
void DescribeGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipResponsePrivate
 * \brief The DescribeGroupMembershipResponsePrivate class provides private implementation for DescribeGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeGroupMembershipResponsePrivate object with public implementation \a q.
 */
DescribeGroupMembershipResponsePrivate::DescribeGroupMembershipResponsePrivate(
    DescribeGroupMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeGroupMembership response element from \a xml.
 */
void DescribeGroupMembershipResponsePrivate::parseDescribeGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
