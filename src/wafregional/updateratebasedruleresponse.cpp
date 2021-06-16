/*
    Copyright 2013-2021 Paul Colby

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

#include "updateratebasedruleresponse.h"
#include "updateratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::UpdateRateBasedRuleResponse
 * \brief The UpdateRateBasedRuleResponse class provides an interace for WAFRegional UpdateRateBasedRule responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WAFRegionalClient::updateRateBasedRule
 */

/*!
 * Constructs a UpdateRateBasedRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRateBasedRuleResponse::UpdateRateBasedRuleResponse(
        const UpdateRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateRateBasedRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRateBasedRuleRequest * UpdateRateBasedRuleResponse::request() const
{
    Q_D(const UpdateRateBasedRuleResponse);
    return static_cast<const UpdateRateBasedRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional UpdateRateBasedRule \a response.
 */
void UpdateRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRateBasedRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::UpdateRateBasedRuleResponsePrivate
 * \brief The UpdateRateBasedRuleResponsePrivate class provides private implementation for UpdateRateBasedRuleResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a UpdateRateBasedRuleResponsePrivate object with public implementation \a q.
 */
UpdateRateBasedRuleResponsePrivate::UpdateRateBasedRuleResponsePrivate(
    UpdateRateBasedRuleResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional UpdateRateBasedRule response element from \a xml.
 */
void UpdateRateBasedRuleResponsePrivate::parseUpdateRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRateBasedRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
