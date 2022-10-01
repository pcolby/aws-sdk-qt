// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupresponse.h"
#include "describegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeGroupResponse
 * \brief The DescribeGroupResponse class provides an interace for QuickSight DescribeGroup responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeGroup
 */

/*!
 * Constructs a DescribeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGroupResponse::DescribeGroupResponse(
        const DescribeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGroupRequest * DescribeGroupResponse::request() const
{
    Q_D(const DescribeGroupResponse);
    return static_cast<const DescribeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeGroup \a response.
 */
void DescribeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeGroupResponsePrivate
 * \brief The DescribeGroupResponsePrivate class provides private implementation for DescribeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeGroupResponsePrivate object with public implementation \a q.
 */
DescribeGroupResponsePrivate::DescribeGroupResponsePrivate(
    DescribeGroupResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeGroup response element from \a xml.
 */
void DescribeGroupResponsePrivate::parseDescribeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
