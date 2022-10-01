// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountsettingsresponse.h"
#include "describeaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsResponse
 * \brief The DescribeAccountSettingsResponse class provides an interace for QuickSight DescribeAccountSettings responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountSettings
 */

/*!
 * Constructs a DescribeAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountSettingsResponse::DescribeAccountSettingsResponse(
        const DescribeAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountSettingsRequest * DescribeAccountSettingsResponse::request() const
{
    Q_D(const DescribeAccountSettingsResponse);
    return static_cast<const DescribeAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAccountSettings \a response.
 */
void DescribeAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsResponsePrivate
 * \brief The DescribeAccountSettingsResponsePrivate class provides private implementation for DescribeAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountSettingsResponsePrivate object with public implementation \a q.
 */
DescribeAccountSettingsResponsePrivate::DescribeAccountSettingsResponsePrivate(
    DescribeAccountSettingsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAccountSettings response element from \a xml.
 */
void DescribeAccountSettingsResponsePrivate::parseDescribeAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
