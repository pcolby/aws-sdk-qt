// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctiondefinitionresponse.h"
#include "createfunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionResponse
 * \brief The CreateFunctionDefinitionResponse class provides an interace for Greengrass CreateFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createFunctionDefinition
 */

/*!
 * Constructs a CreateFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFunctionDefinitionResponse::CreateFunctionDefinitionResponse(
        const CreateFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFunctionDefinitionRequest * CreateFunctionDefinitionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionResponse);
    return static_cast<const CreateFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateFunctionDefinition \a response.
 */
void CreateFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionResponsePrivate
 * \brief The CreateFunctionDefinitionResponsePrivate class provides private implementation for CreateFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
CreateFunctionDefinitionResponsePrivate::CreateFunctionDefinitionResponsePrivate(
    CreateFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateFunctionDefinition response element from \a xml.
 */
void CreateFunctionDefinitionResponsePrivate::parseCreateFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
