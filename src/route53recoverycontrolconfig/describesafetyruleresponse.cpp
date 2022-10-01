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

#include "describesafetyruleresponse.h"
#include "describesafetyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeSafetyRuleResponse
 * \brief The DescribeSafetyRuleResponse class provides an interace for Route53RecoveryControlConfig DescribeSafetyRule responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeSafetyRule
 */

/*!
 * Constructs a DescribeSafetyRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSafetyRuleResponse::DescribeSafetyRuleResponse(
        const DescribeSafetyRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DescribeSafetyRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeSafetyRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSafetyRuleRequest * DescribeSafetyRuleResponse::request() const
{
    Q_D(const DescribeSafetyRuleResponse);
    return static_cast<const DescribeSafetyRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DescribeSafetyRule \a response.
 */
void DescribeSafetyRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSafetyRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeSafetyRuleResponsePrivate
 * \brief The DescribeSafetyRuleResponsePrivate class provides private implementation for DescribeSafetyRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeSafetyRuleResponsePrivate object with public implementation \a q.
 */
DescribeSafetyRuleResponsePrivate::DescribeSafetyRuleResponsePrivate(
    DescribeSafetyRuleResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DescribeSafetyRule response element from \a xml.
 */
void DescribeSafetyRuleResponsePrivate::parseDescribeSafetyRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSafetyRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
