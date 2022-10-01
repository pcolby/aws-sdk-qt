// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsetsendingenabledresponse.h"
#include "updateconfigurationsetsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetSendingEnabledResponse
 * \brief The UpdateConfigurationSetSendingEnabledResponse class provides an interace for Ses UpdateConfigurationSetSendingEnabled responses.
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
 * \sa SesClient::updateConfigurationSetSendingEnabled
 */

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetSendingEnabledResponse::UpdateConfigurationSetSendingEnabledResponse(
        const UpdateConfigurationSetSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateConfigurationSetSendingEnabledResponsePrivate(this), parent)
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
 * Parses a successful Ses UpdateConfigurationSetSendingEnabled \a response.
 */
void UpdateConfigurationSetSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetSendingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetSendingEnabledResponsePrivate
 * \brief The UpdateConfigurationSetSendingEnabledResponsePrivate class provides private implementation for UpdateConfigurationSetSendingEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetSendingEnabledResponsePrivate::UpdateConfigurationSetSendingEnabledResponsePrivate(
    UpdateConfigurationSetSendingEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateConfigurationSetSendingEnabled response element from \a xml.
 */
void UpdateConfigurationSetSendingEnabledResponsePrivate::parseUpdateConfigurationSetSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetSendingEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
