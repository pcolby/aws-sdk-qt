// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicedefinitionresponse.h"
#include "createdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionResponse
 * \brief The CreateDeviceDefinitionResponse class provides an interace for Greengrass CreateDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeviceDefinition
 */

/*!
 * Constructs a CreateDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceDefinitionResponse::CreateDeviceDefinitionResponse(
        const CreateDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceDefinitionRequest * CreateDeviceDefinitionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionResponse);
    return static_cast<const CreateDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateDeviceDefinition \a response.
 */
void CreateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionResponsePrivate
 * \brief The CreateDeviceDefinitionResponsePrivate class provides private implementation for CreateDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
CreateDeviceDefinitionResponsePrivate::CreateDeviceDefinitionResponsePrivate(
    CreateDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateDeviceDefinition response element from \a xml.
 */
void CreateDeviceDefinitionResponsePrivate::parseCreateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
