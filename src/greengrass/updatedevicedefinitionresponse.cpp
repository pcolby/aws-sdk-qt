// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicedefinitionresponse.h"
#include "updatedevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionResponse
 * \brief The UpdateDeviceDefinitionResponse class provides an interace for Greengrass UpdateDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateDeviceDefinition
 */

/*!
 * Constructs a UpdateDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceDefinitionResponse::UpdateDeviceDefinitionResponse(
        const UpdateDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceDefinitionRequest * UpdateDeviceDefinitionResponse::request() const
{
    Q_D(const UpdateDeviceDefinitionResponse);
    return static_cast<const UpdateDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateDeviceDefinition \a response.
 */
void UpdateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionResponsePrivate
 * \brief The UpdateDeviceDefinitionResponsePrivate class provides private implementation for UpdateDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateDeviceDefinitionResponsePrivate::UpdateDeviceDefinitionResponsePrivate(
    UpdateDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateDeviceDefinition response element from \a xml.
 */
void UpdateDeviceDefinitionResponsePrivate::parseUpdateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
