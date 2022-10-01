// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanalysispermissionsresponse.h"
#include "describeanalysispermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsResponse
 * \brief The DescribeAnalysisPermissionsResponse class provides an interace for QuickSight DescribeAnalysisPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAnalysisPermissions
 */

/*!
 * Constructs a DescribeAnalysisPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnalysisPermissionsResponse::DescribeAnalysisPermissionsResponse(
        const DescribeAnalysisPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAnalysisPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAnalysisPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnalysisPermissionsRequest * DescribeAnalysisPermissionsResponse::request() const
{
    Q_D(const DescribeAnalysisPermissionsResponse);
    return static_cast<const DescribeAnalysisPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAnalysisPermissions \a response.
 */
void DescribeAnalysisPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnalysisPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsResponsePrivate
 * \brief The DescribeAnalysisPermissionsResponsePrivate class provides private implementation for DescribeAnalysisPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAnalysisPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeAnalysisPermissionsResponsePrivate::DescribeAnalysisPermissionsResponsePrivate(
    DescribeAnalysisPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAnalysisPermissions response element from \a xml.
 */
void DescribeAnalysisPermissionsResponsePrivate::parseDescribeAnalysisPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
