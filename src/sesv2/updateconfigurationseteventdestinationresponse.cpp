// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationseteventdestinationresponse.h"
#include "updateconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateConfigurationSetEventDestinationResponse
 * \brief The UpdateConfigurationSetEventDestinationResponse class provides an interace for SESv2 UpdateConfigurationSetEventDestination responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetEventDestinationResponse::UpdateConfigurationSetEventDestinationResponse(
        const UpdateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new UpdateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetEventDestinationRequest * UpdateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const UpdateConfigurationSetEventDestinationResponse);
    return static_cast<const UpdateConfigurationSetEventDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 UpdateConfigurationSetEventDestination \a response.
 */
void UpdateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::UpdateConfigurationSetEventDestinationResponsePrivate
 * \brief The UpdateConfigurationSetEventDestinationResponsePrivate class provides private implementation for UpdateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationResponsePrivate::UpdateConfigurationSetEventDestinationResponsePrivate(
    UpdateConfigurationSetEventDestinationResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 UpdateConfigurationSetEventDestination response element from \a xml.
 */
void UpdateConfigurationSetEventDestinationResponsePrivate::parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
