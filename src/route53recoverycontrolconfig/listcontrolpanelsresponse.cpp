// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontrolpanelsresponse.h"
#include "listcontrolpanelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsResponse
 * \brief The ListControlPanelsResponse class provides an interace for Route53RecoveryControlConfig ListControlPanels responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listControlPanels
 */

/*!
 * Constructs a ListControlPanelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListControlPanelsResponse::ListControlPanelsResponse(
        const ListControlPanelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListControlPanelsResponsePrivate(this), parent)
{
    setRequest(new ListControlPanelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListControlPanelsRequest * ListControlPanelsResponse::request() const
{
    Q_D(const ListControlPanelsResponse);
    return static_cast<const ListControlPanelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListControlPanels \a response.
 */
void ListControlPanelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListControlPanelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListControlPanelsResponsePrivate
 * \brief The ListControlPanelsResponsePrivate class provides private implementation for ListControlPanelsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListControlPanelsResponsePrivate object with public implementation \a q.
 */
ListControlPanelsResponsePrivate::ListControlPanelsResponsePrivate(
    ListControlPanelsResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListControlPanels response element from \a xml.
 */
void ListControlPanelsResponsePrivate::parseListControlPanelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListControlPanelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
