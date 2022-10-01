// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeiprestrictionresponse.h"
#include "describeiprestrictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIpRestrictionResponse
 * \brief The DescribeIpRestrictionResponse class provides an interace for QuickSight DescribeIpRestriction responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIpRestriction
 */

/*!
 * Constructs a DescribeIpRestrictionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIpRestrictionResponse::DescribeIpRestrictionResponse(
        const DescribeIpRestrictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeIpRestrictionResponsePrivate(this), parent)
{
    setRequest(new DescribeIpRestrictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIpRestrictionRequest * DescribeIpRestrictionResponse::request() const
{
    Q_D(const DescribeIpRestrictionResponse);
    return static_cast<const DescribeIpRestrictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeIpRestriction \a response.
 */
void DescribeIpRestrictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIpRestrictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeIpRestrictionResponsePrivate
 * \brief The DescribeIpRestrictionResponsePrivate class provides private implementation for DescribeIpRestrictionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIpRestrictionResponsePrivate object with public implementation \a q.
 */
DescribeIpRestrictionResponsePrivate::DescribeIpRestrictionResponsePrivate(
    DescribeIpRestrictionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeIpRestriction response element from \a xml.
 */
void DescribeIpRestrictionResponsePrivate::parseDescribeIpRestrictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIpRestrictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
