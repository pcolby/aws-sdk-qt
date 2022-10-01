// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicedefinitionversionresponse.h"
#include "createdevicedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionVersionResponse
 * \brief The CreateDeviceDefinitionVersionResponse class provides an interace for Greengrass CreateDeviceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeviceDefinitionVersion
 */

/*!
 * Constructs a CreateDeviceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceDefinitionVersionResponse::CreateDeviceDefinitionVersionResponse(
        const CreateDeviceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceDefinitionVersionRequest * CreateDeviceDefinitionVersionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionVersionResponse);
    return static_cast<const CreateDeviceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateDeviceDefinitionVersion \a response.
 */
void CreateDeviceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionVersionResponsePrivate
 * \brief The CreateDeviceDefinitionVersionResponsePrivate class provides private implementation for CreateDeviceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateDeviceDefinitionVersionResponsePrivate::CreateDeviceDefinitionVersionResponsePrivate(
    CreateDeviceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateDeviceDefinitionVersion response element from \a xml.
 */
void CreateDeviceDefinitionVersionResponsePrivate::parseCreateDeviceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
