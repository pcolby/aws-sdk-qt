// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontrolpanelresponse.h"
#include "createcontrolpanelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelResponse
 * \brief The CreateControlPanelResponse class provides an interace for Route53RecoveryControlConfig CreateControlPanel responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createControlPanel
 */

/*!
 * Constructs a CreateControlPanelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateControlPanelResponse::CreateControlPanelResponse(
        const CreateControlPanelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new CreateControlPanelResponsePrivate(this), parent)
{
    setRequest(new CreateControlPanelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateControlPanelRequest * CreateControlPanelResponse::request() const
{
    Q_D(const CreateControlPanelResponse);
    return static_cast<const CreateControlPanelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig CreateControlPanel \a response.
 */
void CreateControlPanelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateControlPanelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateControlPanelResponsePrivate
 * \brief The CreateControlPanelResponsePrivate class provides private implementation for CreateControlPanelResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateControlPanelResponsePrivate object with public implementation \a q.
 */
CreateControlPanelResponsePrivate::CreateControlPanelResponsePrivate(
    CreateControlPanelResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig CreateControlPanel response element from \a xml.
 */
void CreateControlPanelResponsePrivate::parseCreateControlPanelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateControlPanelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
