// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroutingcontrolresponse.h"
#include "deleteroutingcontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlResponse
 * \brief The DeleteRoutingControlResponse class provides an interace for Route53RecoveryControlConfig DeleteRoutingControl responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteRoutingControl
 */

/*!
 * Constructs a DeleteRoutingControlResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoutingControlResponse::DeleteRoutingControlResponse(
        const DeleteRoutingControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteRoutingControlResponsePrivate(this), parent)
{
    setRequest(new DeleteRoutingControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoutingControlRequest * DeleteRoutingControlResponse::request() const
{
    Q_D(const DeleteRoutingControlResponse);
    return static_cast<const DeleteRoutingControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteRoutingControl \a response.
 */
void DeleteRoutingControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRoutingControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteRoutingControlResponsePrivate
 * \brief The DeleteRoutingControlResponsePrivate class provides private implementation for DeleteRoutingControlResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteRoutingControlResponsePrivate object with public implementation \a q.
 */
DeleteRoutingControlResponsePrivate::DeleteRoutingControlResponsePrivate(
    DeleteRoutingControlResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteRoutingControl response element from \a xml.
 */
void DeleteRoutingControlResponsePrivate::parseDeleteRoutingControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoutingControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
