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

#include "updateconfigurationsetreputationmetricsenabledresponse.h"
#include "updateconfigurationsetreputationmetricsenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateConfigurationSetReputationMetricsEnabledResponse
 * \brief The UpdateConfigurationSetReputationMetricsEnabledResponse class provides an interace for SES UpdateConfigurationSetReputationMetricsEnabled responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
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
    : SESResponse(new UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(this), parent)
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
 * Parses a successful SES UpdateConfigurationSetReputationMetricsEnabled \a response.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConfigurationSetReputationMetricsEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::UpdateConfigurationSetReputationMetricsEnabledResponsePrivate
 * \brief The UpdateConfigurationSetReputationMetricsEnabledResponsePrivate class provides private implementation for UpdateConfigurationSetReputationMetricsEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateConfigurationSetReputationMetricsEnabledResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(
    UpdateConfigurationSetReputationMetricsEnabledResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES UpdateConfigurationSetReputationMetricsEnabled response element from \a xml.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::parseUpdateConfigurationSetReputationMetricsEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetReputationMetricsEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
