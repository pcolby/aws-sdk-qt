// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoredefinitionversionresponse.h"
#include "createcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionResponse
 * \brief The CreateCoreDefinitionVersionResponse class provides an interace for Greengrass CreateCoreDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinitionVersion
 */

/*!
 * Constructs a CreateCoreDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreDefinitionVersionResponse::CreateCoreDefinitionVersionResponse(
        const CreateCoreDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreDefinitionVersionRequest * CreateCoreDefinitionVersionResponse::request() const
{
    Q_D(const CreateCoreDefinitionVersionResponse);
    return static_cast<const CreateCoreDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateCoreDefinitionVersion \a response.
 */
void CreateCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCoreDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionResponsePrivate
 * \brief The CreateCoreDefinitionVersionResponsePrivate class provides private implementation for CreateCoreDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateCoreDefinitionVersionResponsePrivate::CreateCoreDefinitionVersionResponsePrivate(
    CreateCoreDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateCoreDefinitionVersion response element from \a xml.
 */
void CreateCoreDefinitionVersionResponsePrivate::parseCreateCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
