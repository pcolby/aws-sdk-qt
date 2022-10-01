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
