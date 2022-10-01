// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggerdefinitionresponse.h"
#include "createloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionResponse
 * \brief The CreateLoggerDefinitionResponse class provides an interace for Greengrass CreateLoggerDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createLoggerDefinition
 */

/*!
 * Constructs a CreateLoggerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLoggerDefinitionResponse::CreateLoggerDefinitionResponse(
        const CreateLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateLoggerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLoggerDefinitionRequest * CreateLoggerDefinitionResponse::request() const
{
    Q_D(const CreateLoggerDefinitionResponse);
    return static_cast<const CreateLoggerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateLoggerDefinition \a response.
 */
void CreateLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionResponsePrivate
 * \brief The CreateLoggerDefinitionResponsePrivate class provides private implementation for CreateLoggerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionResponsePrivate object with public implementation \a q.
 */
CreateLoggerDefinitionResponsePrivate::CreateLoggerDefinitionResponsePrivate(
    CreateLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateLoggerDefinition response element from \a xml.
 */
void CreateLoggerDefinitionResponsePrivate::parseCreateLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
