// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoredefinitionresponse.h"
#include "createcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionResponse
 * \brief The CreateCoreDefinitionResponse class provides an interace for Greengrass CreateCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinition
 */

/*!
 * Constructs a CreateCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreDefinitionResponse::CreateCoreDefinitionResponse(
        const CreateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreDefinitionRequest * CreateCoreDefinitionResponse::request() const
{
    Q_D(const CreateCoreDefinitionResponse);
    return static_cast<const CreateCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateCoreDefinition \a response.
 */
void CreateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionResponsePrivate
 * \brief The CreateCoreDefinitionResponsePrivate class provides private implementation for CreateCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionResponsePrivate object with public implementation \a q.
 */
CreateCoreDefinitionResponsePrivate::CreateCoreDefinitionResponsePrivate(
    CreateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateCoreDefinition response element from \a xml.
 */
void CreateCoreDefinitionResponsePrivate::parseCreateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
