// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetresponse.h"
#include "describedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSetResponse
 * \brief The DescribeDataSetResponse class provides an interace for QuickSight DescribeDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSet
 */

/*!
 * Constructs a DescribeDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSetResponse::DescribeDataSetResponse(
        const DescribeDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDataSetResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSetRequest * DescribeDataSetResponse::request() const
{
    Q_D(const DescribeDataSetResponse);
    return static_cast<const DescribeDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDataSet \a response.
 */
void DescribeDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDataSetResponsePrivate
 * \brief The DescribeDataSetResponsePrivate class provides private implementation for DescribeDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSetResponsePrivate object with public implementation \a q.
 */
DescribeDataSetResponsePrivate::DescribeDataSetResponsePrivate(
    DescribeDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDataSet response element from \a xml.
 */
void DescribeDataSetResponsePrivate::parseDescribeDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
