// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetemplatepermissionsresponse.h"
#include "describetemplatepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsResponse
 * \brief The DescribeTemplatePermissionsResponse class provides an interace for QuickSight DescribeTemplatePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplatePermissions
 */

/*!
 * Constructs a DescribeTemplatePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTemplatePermissionsResponse::DescribeTemplatePermissionsResponse(
        const DescribeTemplatePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeTemplatePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeTemplatePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTemplatePermissionsRequest * DescribeTemplatePermissionsResponse::request() const
{
    Q_D(const DescribeTemplatePermissionsResponse);
    return static_cast<const DescribeTemplatePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTemplatePermissions \a response.
 */
void DescribeTemplatePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTemplatePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsResponsePrivate
 * \brief The DescribeTemplatePermissionsResponsePrivate class provides private implementation for DescribeTemplatePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplatePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeTemplatePermissionsResponsePrivate::DescribeTemplatePermissionsResponsePrivate(
    DescribeTemplatePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTemplatePermissions response element from \a xml.
 */
void DescribeTemplatePermissionsResponsePrivate::parseDescribeTemplatePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTemplatePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
