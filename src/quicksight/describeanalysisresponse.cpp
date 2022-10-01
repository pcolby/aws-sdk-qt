// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanalysisresponse.h"
#include "describeanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAnalysisResponse
 * \brief The DescribeAnalysisResponse class provides an interace for QuickSight DescribeAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAnalysis
 */

/*!
 * Constructs a DescribeAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnalysisResponse::DescribeAnalysisResponse(
        const DescribeAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAnalysisResponsePrivate(this), parent)
{
    setRequest(new DescribeAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnalysisRequest * DescribeAnalysisResponse::request() const
{
    Q_D(const DescribeAnalysisResponse);
    return static_cast<const DescribeAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAnalysis \a response.
 */
void DescribeAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAnalysisResponsePrivate
 * \brief The DescribeAnalysisResponsePrivate class provides private implementation for DescribeAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAnalysisResponsePrivate object with public implementation \a q.
 */
DescribeAnalysisResponsePrivate::DescribeAnalysisResponsePrivate(
    DescribeAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAnalysis response element from \a xml.
 */
void DescribeAnalysisResponsePrivate::parseDescribeAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
