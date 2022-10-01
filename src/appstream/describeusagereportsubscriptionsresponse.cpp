// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeusagereportsubscriptionsresponse.h"
#include "describeusagereportsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeUsageReportSubscriptionsResponse
 * \brief The DescribeUsageReportSubscriptionsResponse class provides an interace for AppStream DescribeUsageReportSubscriptions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::describeUsageReportSubscriptions
 */

/*!
 * Constructs a DescribeUsageReportSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUsageReportSubscriptionsResponse::DescribeUsageReportSubscriptionsResponse(
        const DescribeUsageReportSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeUsageReportSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeUsageReportSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUsageReportSubscriptionsRequest * DescribeUsageReportSubscriptionsResponse::request() const
{
    Q_D(const DescribeUsageReportSubscriptionsResponse);
    return static_cast<const DescribeUsageReportSubscriptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeUsageReportSubscriptions \a response.
 */
void DescribeUsageReportSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUsageReportSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeUsageReportSubscriptionsResponsePrivate
 * \brief The DescribeUsageReportSubscriptionsResponsePrivate class provides private implementation for DescribeUsageReportSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeUsageReportSubscriptionsResponsePrivate object with public implementation \a q.
 */
DescribeUsageReportSubscriptionsResponsePrivate::DescribeUsageReportSubscriptionsResponsePrivate(
    DescribeUsageReportSubscriptionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeUsageReportSubscriptions response element from \a xml.
 */
void DescribeUsageReportSubscriptionsResponsePrivate::parseDescribeUsageReportSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUsageReportSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
