/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
