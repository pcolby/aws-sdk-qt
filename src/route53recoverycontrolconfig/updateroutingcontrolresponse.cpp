// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroutingcontrolresponse.h"
#include "updateroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlResponse
 * \brief The UpdateRoutingControlResponse class provides an interace for Route53RecoveryControlConfig UpdateRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateRoutingControl
 */

/*!
 * Constructs a UpdateRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoutingControlResponse::UpdateRoutingControlResponse(
        const UpdateRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new UpdateRoutingControlResponsePrivate(this), parent)
{
    setRequest(new UpdateRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoutingControlRequest * UpdateRoutingControlResponse::request() const
{
    Q_D(const UpdateRoutingControlResponse);
    return static_cast<const UpdateRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig UpdateRoutingControl \a response.
 */
void UpdateRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateRoutingControlResponsePrivate
 * \brief The UpdateRoutingControlResponsePrivate class provides private implementation for UpdateRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateRoutingControlResponsePrivate object with public implementation \a q.
 */
UpdateRoutingControlResponsePrivate::UpdateRoutingControlResponsePrivate(
    UpdateRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig UpdateRoutingControl response element from \a xml.
 */
void UpdateRoutingControlResponsePrivate::parseUpdateRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
