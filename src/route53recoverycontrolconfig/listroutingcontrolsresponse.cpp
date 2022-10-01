// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listroutingcontrolsresponse.h"
#include "listroutingcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListRoutingControlsResponse
 * \brief The ListRoutingControlsResponse class provides an interace for Route53RecoveryControlConfig ListRoutingControls responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listRoutingControls
 */

/*!
 * Constructs a ListRoutingControlsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRoutingControlsResponse::ListRoutingControlsResponse(
        const ListRoutingControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListRoutingControlsResponsePrivate(this), parent)
{
    setRequest(new ListRoutingControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRoutingControlsRequest * ListRoutingControlsResponse::request() const
{
    Q_D(const ListRoutingControlsResponse);
    return static_cast<const ListRoutingControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListRoutingControls \a response.
 */
void ListRoutingControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRoutingControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListRoutingControlsResponsePrivate
 * \brief The ListRoutingControlsResponsePrivate class provides private implementation for ListRoutingControlsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListRoutingControlsResponsePrivate object with public implementation \a q.
 */
ListRoutingControlsResponsePrivate::ListRoutingControlsResponsePrivate(
    ListRoutingControlsResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListRoutingControls response element from \a xml.
 */
void ListRoutingControlsResponsePrivate::parseListRoutingControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRoutingControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
