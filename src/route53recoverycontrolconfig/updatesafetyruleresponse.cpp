// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesafetyruleresponse.h"
#include "updatesafetyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateSafetyRuleResponse
 * \brief The UpdateSafetyRuleResponse class provides an interace for Route53RecoveryControlConfig UpdateSafetyRule responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateSafetyRule
 */

/*!
 * Constructs a UpdateSafetyRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSafetyRuleResponse::UpdateSafetyRuleResponse(
        const UpdateSafetyRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new UpdateSafetyRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateSafetyRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSafetyRuleRequest * UpdateSafetyRuleResponse::request() const
{
    Q_D(const UpdateSafetyRuleResponse);
    return static_cast<const UpdateSafetyRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig UpdateSafetyRule \a response.
 */
void UpdateSafetyRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSafetyRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateSafetyRuleResponsePrivate
 * \brief The UpdateSafetyRuleResponsePrivate class provides private implementation for UpdateSafetyRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateSafetyRuleResponsePrivate object with public implementation \a q.
 */
UpdateSafetyRuleResponsePrivate::UpdateSafetyRuleResponsePrivate(
    UpdateSafetyRuleResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig UpdateSafetyRule response element from \a xml.
 */
void UpdateSafetyRuleResponsePrivate::parseUpdateSafetyRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSafetyRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
