// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesafetyruleresponse.h"
#include "deletesafetyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteSafetyRuleResponse
 * \brief The DeleteSafetyRuleResponse class provides an interace for Route53RecoveryControlConfig DeleteSafetyRule responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteSafetyRule
 */

/*!
 * Constructs a DeleteSafetyRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSafetyRuleResponse::DeleteSafetyRuleResponse(
        const DeleteSafetyRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteSafetyRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteSafetyRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSafetyRuleRequest * DeleteSafetyRuleResponse::request() const
{
    Q_D(const DeleteSafetyRuleResponse);
    return static_cast<const DeleteSafetyRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteSafetyRule \a response.
 */
void DeleteSafetyRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSafetyRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteSafetyRuleResponsePrivate
 * \brief The DeleteSafetyRuleResponsePrivate class provides private implementation for DeleteSafetyRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteSafetyRuleResponsePrivate object with public implementation \a q.
 */
DeleteSafetyRuleResponsePrivate::DeleteSafetyRuleResponsePrivate(
    DeleteSafetyRuleResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteSafetyRule response element from \a xml.
 */
void DeleteSafetyRuleResponsePrivate::parseDeleteSafetyRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSafetyRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
