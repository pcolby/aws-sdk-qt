// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstudiossoconfigurationrepairresponse.h"
#include "startstudiossoconfigurationrepairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StartStudioSSOConfigurationRepairResponse
 * \brief The StartStudioSSOConfigurationRepairResponse class provides an interace for Nimble StartStudioSSOConfigurationRepair responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::startStudioSSOConfigurationRepair
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairResponse object for \a reply to \a request, with parent \a parent.
 */
StartStudioSSOConfigurationRepairResponse::StartStudioSSOConfigurationRepairResponse(
        const StartStudioSSOConfigurationRepairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new StartStudioSSOConfigurationRepairResponsePrivate(this), parent)
{
    setRequest(new StartStudioSSOConfigurationRepairRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStudioSSOConfigurationRepairRequest * StartStudioSSOConfigurationRepairResponse::request() const
{
    Q_D(const StartStudioSSOConfigurationRepairResponse);
    return static_cast<const StartStudioSSOConfigurationRepairRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble StartStudioSSOConfigurationRepair \a response.
 */
void StartStudioSSOConfigurationRepairResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStudioSSOConfigurationRepairResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::StartStudioSSOConfigurationRepairResponsePrivate
 * \brief The StartStudioSSOConfigurationRepairResponsePrivate class provides private implementation for StartStudioSSOConfigurationRepairResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairResponsePrivate object with public implementation \a q.
 */
StartStudioSSOConfigurationRepairResponsePrivate::StartStudioSSOConfigurationRepairResponsePrivate(
    StartStudioSSOConfigurationRepairResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble StartStudioSSOConfigurationRepair response element from \a xml.
 */
void StartStudioSSOConfigurationRepairResponsePrivate::parseStartStudioSSOConfigurationRepairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStudioSSOConfigurationRepairResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
