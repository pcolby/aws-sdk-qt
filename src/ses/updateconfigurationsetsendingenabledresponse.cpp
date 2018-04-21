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

#include "updateconfigurationsetsendingenabledresponse.h"
#include "updateconfigurationsetsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateConfigurationSetSendingEnabledResponse
 * \brief The UpdateConfigurationSetSendingEnabledResponse class provides an interace for SES UpdateConfigurationSetSendingEnabled responses.
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
 * \sa SesClient::updateConfigurationSetSendingEnabled
 */

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetSendingEnabledResponse::UpdateConfigurationSetSendingEnabledResponse(
        const UpdateConfigurationSetSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateConfigurationSetSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetSendingEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetSendingEnabledRequest * UpdateConfigurationSetSendingEnabledResponse::request() const
{
    Q_D(const UpdateConfigurationSetSendingEnabledResponse);
    return static_cast<const UpdateConfigurationSetSendingEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES UpdateConfigurationSetSendingEnabled \a response.
 */
void UpdateConfigurationSetSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConfigurationSetSendingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::UpdateConfigurationSetSendingEnabledResponsePrivate
 * \brief The UpdateConfigurationSetSendingEnabledResponsePrivate class provides private implementation for UpdateConfigurationSetSendingEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetSendingEnabledResponsePrivate::UpdateConfigurationSetSendingEnabledResponsePrivate(
    UpdateConfigurationSetSendingEnabledResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES UpdateConfigurationSetSendingEnabled response element from \a xml.
 */
void UpdateConfigurationSetSendingEnabledResponsePrivate::parseUpdateConfigurationSetSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetSendingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
