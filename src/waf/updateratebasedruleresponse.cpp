/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateratebasedruleresponse.h"
#include "updateratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRateBasedRuleResponse
 * \brief The UpdateRateBasedRuleResponse class provides an interace for WAF UpdateRateBasedRule responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateRateBasedRule
 */

/*!
 * Constructs a UpdateRateBasedRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRateBasedRuleResponse::UpdateRateBasedRuleResponse(
        const UpdateRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateRateBasedRuleResponsePrivate(this), parent)
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
 * Parses a successful WAF UpdateRateBasedRule \a response.
 */
void UpdateRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRateBasedRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::UpdateRateBasedRuleResponsePrivate
 * \brief The UpdateRateBasedRuleResponsePrivate class provides private implementation for UpdateRateBasedRuleResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateRateBasedRuleResponsePrivate object with public implementation \a q.
 */
UpdateRateBasedRuleResponsePrivate::UpdateRateBasedRuleResponsePrivate(
    UpdateRateBasedRuleResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF UpdateRateBasedRule response element from \a xml.
 */
void UpdateRateBasedRuleResponsePrivate::parseUpdateRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRateBasedRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
