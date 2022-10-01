// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectordefinitionresponse.h"
#include "updateconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionResponse
 * \brief The UpdateConnectorDefinitionResponse class provides an interace for Greengrass UpdateConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectorDefinition
 */

/*!
 * Constructs a UpdateConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectorDefinitionResponse::UpdateConnectorDefinitionResponse(
        const UpdateConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectorDefinitionRequest * UpdateConnectorDefinitionResponse::request() const
{
    Q_D(const UpdateConnectorDefinitionResponse);
    return static_cast<const UpdateConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateConnectorDefinition \a response.
 */
void UpdateConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionResponsePrivate
 * \brief The UpdateConnectorDefinitionResponsePrivate class provides private implementation for UpdateConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateConnectorDefinitionResponsePrivate::UpdateConnectorDefinitionResponsePrivate(
    UpdateConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateConnectorDefinition response element from \a xml.
 */
void UpdateConnectorDefinitionResponsePrivate::parseUpdateConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
