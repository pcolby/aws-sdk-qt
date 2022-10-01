// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontrolpanelresponse.h"
#include "updatecontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateControlPanelResponse
 * \brief The UpdateControlPanelResponse class provides an interace for Route53RecoveryControlConfig UpdateControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateControlPanel
 */

/*!
 * Constructs a UpdateControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateControlPanelResponse::UpdateControlPanelResponse(
        const UpdateControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new UpdateControlPanelResponsePrivate(this), parent)
{
    setRequest(new UpdateControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateControlPanelRequest * UpdateControlPanelResponse::request() const
{
    Q_D(const UpdateControlPanelResponse);
    return static_cast<const UpdateControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig UpdateControlPanel \a response.
 */
void UpdateControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateControlPanelResponsePrivate
 * \brief The UpdateControlPanelResponsePrivate class provides private implementation for UpdateControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateControlPanelResponsePrivate object with public implementation \a q.
 */
UpdateControlPanelResponsePrivate::UpdateControlPanelResponsePrivate(
    UpdateControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig UpdateControlPanel response element from \a xml.
 */
void UpdateControlPanelResponsePrivate::parseUpdateControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
