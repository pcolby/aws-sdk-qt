// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeiampolicyassignmentresponse.h"
#include "describeiampolicyassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIAMPolicyAssignmentResponse
 * \brief The DescribeIAMPolicyAssignmentResponse class provides an interace for QuickSight DescribeIAMPolicyAssignment responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIAMPolicyAssignment
 */

/*!
 * Constructs a DescribeIAMPolicyAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIAMPolicyAssignmentResponse::DescribeIAMPolicyAssignmentResponse(
        const DescribeIAMPolicyAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeIAMPolicyAssignmentResponsePrivate(this), parent)
{
    setRequest(new DescribeIAMPolicyAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIAMPolicyAssignmentRequest * DescribeIAMPolicyAssignmentResponse::request() const
{
    Q_D(const DescribeIAMPolicyAssignmentResponse);
    return static_cast<const DescribeIAMPolicyAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeIAMPolicyAssignment \a response.
 */
void DescribeIAMPolicyAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIAMPolicyAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeIAMPolicyAssignmentResponsePrivate
 * \brief The DescribeIAMPolicyAssignmentResponsePrivate class provides private implementation for DescribeIAMPolicyAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIAMPolicyAssignmentResponsePrivate object with public implementation \a q.
 */
DescribeIAMPolicyAssignmentResponsePrivate::DescribeIAMPolicyAssignmentResponsePrivate(
    DescribeIAMPolicyAssignmentResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeIAMPolicyAssignment response element from \a xml.
 */
void DescribeIAMPolicyAssignmentResponsePrivate::parseDescribeIAMPolicyAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIAMPolicyAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
