// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectordefinitionversionresponse.h"
#include "createconnectordefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionResponse
 * \brief The CreateConnectorDefinitionVersionResponse class provides an interace for Greengrass CreateConnectorDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinitionVersion
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectorDefinitionVersionResponse::CreateConnectorDefinitionVersionResponse(
        const CreateConnectorDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateConnectorDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectorDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectorDefinitionVersionRequest * CreateConnectorDefinitionVersionResponse::request() const
{
    Q_D(const CreateConnectorDefinitionVersionResponse);
    return static_cast<const CreateConnectorDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateConnectorDefinitionVersion \a response.
 */
void CreateConnectorDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectorDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionResponsePrivate
 * \brief The CreateConnectorDefinitionVersionResponsePrivate class provides private implementation for CreateConnectorDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateConnectorDefinitionVersionResponsePrivate::CreateConnectorDefinitionVersionResponsePrivate(
    CreateConnectorDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateConnectorDefinitionVersion response element from \a xml.
 */
void CreateConnectorDefinitionVersionResponsePrivate::parseCreateConnectorDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectorDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
