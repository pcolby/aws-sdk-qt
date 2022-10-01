// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
