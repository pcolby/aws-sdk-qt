// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontrolpanelresponse.h"
#include "deletecontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelResponse
 * \brief The DeleteControlPanelResponse class provides an interace for Route53RecoveryControlConfig DeleteControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteControlPanel
 */

/*!
 * Constructs a DeleteControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteControlPanelResponse::DeleteControlPanelResponse(
        const DeleteControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new DeleteControlPanelResponsePrivate(this), parent)
{
    setRequest(new DeleteControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteControlPanelRequest * DeleteControlPanelResponse::request() const
{
    Q_D(const DeleteControlPanelResponse);
    return static_cast<const DeleteControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig DeleteControlPanel \a response.
 */
void DeleteControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteControlPanelResponsePrivate
 * \brief The DeleteControlPanelResponsePrivate class provides private implementation for DeleteControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteControlPanelResponsePrivate object with public implementation \a q.
 */
DeleteControlPanelResponsePrivate::DeleteControlPanelResponsePrivate(
    DeleteControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig DeleteControlPanel response element from \a xml.
 */
void DeleteControlPanelResponsePrivate::parseDeleteControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
