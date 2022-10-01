// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethingruntimeconfigurationresponse.h"
#include "updatethingruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationResponse
 * \brief The UpdateThingRuntimeConfigurationResponse class provides an interace for Greengrass UpdateThingRuntimeConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateThingRuntimeConfiguration
 */

/*!
 * Constructs a UpdateThingRuntimeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThingRuntimeConfigurationResponse::UpdateThingRuntimeConfigurationResponse(
        const UpdateThingRuntimeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateThingRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateThingRuntimeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThingRuntimeConfigurationRequest * UpdateThingRuntimeConfigurationResponse::request() const
{
    Q_D(const UpdateThingRuntimeConfigurationResponse);
    return static_cast<const UpdateThingRuntimeConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateThingRuntimeConfiguration \a response.
 */
void UpdateThingRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThingRuntimeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationResponsePrivate
 * \brief The UpdateThingRuntimeConfigurationResponsePrivate class provides private implementation for UpdateThingRuntimeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateThingRuntimeConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateThingRuntimeConfigurationResponsePrivate::UpdateThingRuntimeConfigurationResponsePrivate(
    UpdateThingRuntimeConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateThingRuntimeConfiguration response element from \a xml.
 */
void UpdateThingRuntimeConfigurationResponsePrivate::parseUpdateThingRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingRuntimeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
