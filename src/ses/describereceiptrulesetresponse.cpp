/*
    Copyright 2013-2019 Paul Colby

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

#include "describereceiptrulesetresponse.h"
#include "describereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeReceiptRuleSetResponse
 * \brief The DescribeReceiptRuleSetResponse class provides an interace for SES DescribeReceiptRuleSet responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::describeReceiptRuleSet
 */

/*!
 * Constructs a DescribeReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReceiptRuleSetResponse::DescribeReceiptRuleSetResponse(
        const DescribeReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DescribeReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DescribeReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReceiptRuleSetRequest * DescribeReceiptRuleSetResponse::request() const
{
    Q_D(const DescribeReceiptRuleSetResponse);
    return static_cast<const DescribeReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES DescribeReceiptRuleSet \a response.
 */
void DescribeReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::DescribeReceiptRuleSetResponsePrivate
 * \brief The DescribeReceiptRuleSetResponsePrivate class provides private implementation for DescribeReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DescribeReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
DescribeReceiptRuleSetResponsePrivate::DescribeReceiptRuleSetResponsePrivate(
    DescribeReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES DescribeReceiptRuleSet response element from \a xml.
 */
void DescribeReceiptRuleSetResponsePrivate::parseDescribeReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
