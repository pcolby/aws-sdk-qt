// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationseteventdestinationresponse.h"
#include "updateconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetEventDestinationResponse
 * \brief The UpdateConfigurationSetEventDestinationResponse class provides an interace for Ses UpdateConfigurationSetEventDestination responses.
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
 * \sa SesClient::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetEventDestinationResponse::UpdateConfigurationSetEventDestinationResponse(
        const UpdateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateConfigurationSetEventDestinationResponsePrivate(this), parent)
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
 * Parses a successful Ses UpdateConfigurationSetEventDestination \a response.
 */
void UpdateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetEventDestinationResponsePrivate
 * \brief The UpdateConfigurationSetEventDestinationResponsePrivate class provides private implementation for UpdateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationResponsePrivate::UpdateConfigurationSetEventDestinationResponsePrivate(
    UpdateConfigurationSetEventDestinationResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateConfigurationSetEventDestination response element from \a xml.
 */
void UpdateConfigurationSetEventDestinationResponsePrivate::parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
