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

#include "updateruleresponse.h"
#include "updateruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRuleResponse
 * \brief The UpdateRuleResponse class provides an interace for WAF UpdateRule responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateRule
 */

/*!
 * Constructs a UpdateRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRuleResponse::UpdateRuleResponse(
        const UpdateRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRuleRequest * UpdateRuleResponse::request() const
{
    Q_D(const UpdateRuleResponse);
    return static_cast<const UpdateRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF UpdateRule \a response.
 */
void UpdateRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::UpdateRuleResponsePrivate
 * \brief The UpdateRuleResponsePrivate class provides private implementation for UpdateRuleResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateRuleResponsePrivate object with public implementation \a q.
 */
UpdateRuleResponsePrivate::UpdateRuleResponsePrivate(
    UpdateRuleResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF UpdateRule response element from \a xml.
 */
void UpdateRuleResponsePrivate::parseUpdateRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
