// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountsubscriptionresponse.h"
#include "describeaccountsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountSubscriptionResponse
 * \brief The DescribeAccountSubscriptionResponse class provides an interace for QuickSight DescribeAccountSubscription responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountSubscription
 */

/*!
 * Constructs a DescribeAccountSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountSubscriptionResponse::DescribeAccountSubscriptionResponse(
        const DescribeAccountSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAccountSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountSubscriptionRequest * DescribeAccountSubscriptionResponse::request() const
{
    Q_D(const DescribeAccountSubscriptionResponse);
    return static_cast<const DescribeAccountSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAccountSubscription \a response.
 */
void DescribeAccountSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAccountSubscriptionResponsePrivate
 * \brief The DescribeAccountSubscriptionResponsePrivate class provides private implementation for DescribeAccountSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountSubscriptionResponsePrivate object with public implementation \a q.
 */
DescribeAccountSubscriptionResponsePrivate::DescribeAccountSubscriptionResponsePrivate(
    DescribeAccountSubscriptionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAccountSubscription response element from \a xml.
 */
void DescribeAccountSubscriptionResponsePrivate::parseDescribeAccountSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
