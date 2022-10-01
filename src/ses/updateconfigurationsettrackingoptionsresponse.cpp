// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsettrackingoptionsresponse.h"
#include "updateconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetTrackingOptionsResponse
 * \brief The UpdateConfigurationSetTrackingOptionsResponse class provides an interace for Ses UpdateConfigurationSetTrackingOptions responses.
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
 * \sa SesClient::updateConfigurationSetTrackingOptions
 */

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetTrackingOptionsResponse::UpdateConfigurationSetTrackingOptionsResponse(
        const UpdateConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateConfigurationSetTrackingOptionsResponsePrivate(this), parent)
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
 * Parses a successful Ses UpdateConfigurationSetTrackingOptions \a response.
 */
void UpdateConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetTrackingOptionsResponsePrivate
 * \brief The UpdateConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for UpdateConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetTrackingOptionsResponsePrivate::UpdateConfigurationSetTrackingOptionsResponsePrivate(
    UpdateConfigurationSetTrackingOptionsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateConfigurationSetTrackingOptions response element from \a xml.
 */
void UpdateConfigurationSetTrackingOptionsResponsePrivate::parseUpdateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetTrackingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
