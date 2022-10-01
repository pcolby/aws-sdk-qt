// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggerdefinitionversionresponse.h"
#include "createloggerdefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionResponse
 * \brief The CreateLoggerDefinitionVersionResponse class provides an interace for Greengrass CreateLoggerDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createLoggerDefinitionVersion
 */

/*!
 * Constructs a CreateLoggerDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLoggerDefinitionVersionResponse::CreateLoggerDefinitionVersionResponse(
        const CreateLoggerDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateLoggerDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLoggerDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLoggerDefinitionVersionRequest * CreateLoggerDefinitionVersionResponse::request() const
{
    Q_D(const CreateLoggerDefinitionVersionResponse);
    return static_cast<const CreateLoggerDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateLoggerDefinitionVersion \a response.
 */
void CreateLoggerDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLoggerDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionResponsePrivate
 * \brief The CreateLoggerDefinitionVersionResponsePrivate class provides private implementation for CreateLoggerDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateLoggerDefinitionVersionResponsePrivate::CreateLoggerDefinitionVersionResponsePrivate(
    CreateLoggerDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateLoggerDefinitionVersion response element from \a xml.
 */
void CreateLoggerDefinitionVersionResponsePrivate::parseCreateLoggerDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggerDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
