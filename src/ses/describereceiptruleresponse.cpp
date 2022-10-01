// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereceiptruleresponse.h"
#include "describereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeReceiptRuleResponse
 * \brief The DescribeReceiptRuleResponse class provides an interace for Ses DescribeReceiptRule responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::describeReceiptRule
 */

/*!
 * Constructs a DescribeReceiptRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReceiptRuleResponse::DescribeReceiptRuleResponse(
        const DescribeReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DescribeReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeReceiptRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReceiptRuleRequest * DescribeReceiptRuleResponse::request() const
{
    Q_D(const DescribeReceiptRuleResponse);
    return static_cast<const DescribeReceiptRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DescribeReceiptRule \a response.
 */
void DescribeReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DescribeReceiptRuleResponsePrivate
 * \brief The DescribeReceiptRuleResponsePrivate class provides private implementation for DescribeReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeReceiptRuleResponsePrivate object with public implementation \a q.
 */
DescribeReceiptRuleResponsePrivate::DescribeReceiptRuleResponsePrivate(
    DescribeReceiptRuleResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DescribeReceiptRule response element from \a xml.
 */
void DescribeReceiptRuleResponsePrivate::parseDescribeReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReceiptRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
