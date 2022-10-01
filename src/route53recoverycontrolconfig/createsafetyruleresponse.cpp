// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsafetyruleresponse.h"
#include "createsafetyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateSafetyRuleResponse
 * \brief The CreateSafetyRuleResponse class provides an interace for Route53RecoveryControlConfig CreateSafetyRule responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createSafetyRule
 */

/*!
 * Constructs a CreateSafetyRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSafetyRuleResponse::CreateSafetyRuleResponse(
        const CreateSafetyRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new CreateSafetyRuleResponsePrivate(this), parent)
{
    setRequest(new CreateSafetyRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSafetyRuleRequest * CreateSafetyRuleResponse::request() const
{
    Q_D(const CreateSafetyRuleResponse);
    return static_cast<const CreateSafetyRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig CreateSafetyRule \a response.
 */
void CreateSafetyRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSafetyRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateSafetyRuleResponsePrivate
 * \brief The CreateSafetyRuleResponsePrivate class provides private implementation for CreateSafetyRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateSafetyRuleResponsePrivate object with public implementation \a q.
 */
CreateSafetyRuleResponsePrivate::CreateSafetyRuleResponsePrivate(
    CreateSafetyRuleResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig CreateSafetyRule response element from \a xml.
 */
void CreateSafetyRuleResponsePrivate::parseCreateSafetyRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSafetyRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
