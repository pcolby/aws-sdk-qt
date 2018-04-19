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

#include "updateconfigurationsettrackingoptionsresponse.h"
#include "updateconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateConfigurationSetTrackingOptionsResponse
 * \brief The UpdateConfigurationSetTrackingOptionsResponse class provides an interace for SES UpdateConfigurationSetTrackingOptions responses.
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
 * \sa SesClient::updateConfigurationSetTrackingOptions
 */

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetTrackingOptionsResponse::UpdateConfigurationSetTrackingOptionsResponse(
        const UpdateConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetTrackingOptionsRequest * UpdateConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const UpdateConfigurationSetTrackingOptionsResponse);
    return static_cast<const UpdateConfigurationSetTrackingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES UpdateConfigurationSetTrackingOptions \a response.
 */
void UpdateConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::UpdateConfigurationSetTrackingOptionsResponsePrivate
 * \brief The UpdateConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for UpdateConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetTrackingOptionsResponsePrivate::UpdateConfigurationSetTrackingOptionsResponsePrivate(
    UpdateConfigurationSetTrackingOptionsResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES UpdateConfigurationSetTrackingOptions response element from \a xml.
 */
void UpdateConfigurationSetTrackingOptionsResponsePrivate::parseUpdateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetTrackingOptionsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
