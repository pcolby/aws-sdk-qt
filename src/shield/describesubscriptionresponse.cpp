// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubscriptionresponse.h"
#include "describesubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeSubscriptionResponse
 * \brief The DescribeSubscriptionResponse class provides an interace for Shield DescribeSubscription responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::describeSubscription
 */

/*!
 * Constructs a DescribeSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSubscriptionResponse::DescribeSubscriptionResponse(
        const DescribeSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DescribeSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSubscriptionRequest * DescribeSubscriptionResponse::request() const
{
    Q_D(const DescribeSubscriptionResponse);
    return static_cast<const DescribeSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeSubscription \a response.
 */
void DescribeSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeSubscriptionResponsePrivate
 * \brief The DescribeSubscriptionResponsePrivate class provides private implementation for DescribeSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeSubscriptionResponsePrivate object with public implementation \a q.
 */
DescribeSubscriptionResponsePrivate::DescribeSubscriptionResponsePrivate(
    DescribeSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeSubscription response element from \a xml.
 */
void DescribeSubscriptionResponsePrivate::parseDescribeSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
