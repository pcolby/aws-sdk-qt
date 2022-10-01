// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsetreputationmetricsenabledresponse.h"
#include "updateconfigurationsetreputationmetricsenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetReputationMetricsEnabledResponse
 * \brief The UpdateConfigurationSetReputationMetricsEnabledResponse class provides an interace for Ses UpdateConfigurationSetReputationMetricsEnabled responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::updateConfigurationSetReputationMetricsEnabled
 */

/*!
 * Constructs a UpdateConfigurationSetReputationMetricsEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetReputationMetricsEnabledResponse::UpdateConfigurationSetReputationMetricsEnabledResponse(
        const UpdateConfigurationSetReputationMetricsEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetReputationMetricsEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetReputationMetricsEnabledRequest * UpdateConfigurationSetReputationMetricsEnabledResponse::request() const
{
    Q_D(const UpdateConfigurationSetReputationMetricsEnabledResponse);
    return static_cast<const UpdateConfigurationSetReputationMetricsEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses UpdateConfigurationSetReputationMetricsEnabled \a response.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetReputationMetricsEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetReputationMetricsEnabledResponsePrivate
 * \brief The UpdateConfigurationSetReputationMetricsEnabledResponsePrivate class provides private implementation for UpdateConfigurationSetReputationMetricsEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetReputationMetricsEnabledResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(
    UpdateConfigurationSetReputationMetricsEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateConfigurationSetReputationMetricsEnabled response element from \a xml.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::parseUpdateConfigurationSetReputationMetricsEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetReputationMetricsEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
