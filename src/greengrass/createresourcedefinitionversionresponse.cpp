// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcedefinitionversionresponse.h"
#include "createresourcedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionResponse
 * \brief The CreateResourceDefinitionVersionResponse class provides an interace for Greengrass CreateResourceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinitionVersion
 */

/*!
 * Constructs a CreateResourceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceDefinitionVersionResponse::CreateResourceDefinitionVersionResponse(
        const CreateResourceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateResourceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceDefinitionVersionRequest * CreateResourceDefinitionVersionResponse::request() const
{
    Q_D(const CreateResourceDefinitionVersionResponse);
    return static_cast<const CreateResourceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateResourceDefinitionVersion \a response.
 */
void CreateResourceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionResponsePrivate
 * \brief The CreateResourceDefinitionVersionResponsePrivate class provides private implementation for CreateResourceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateResourceDefinitionVersionResponsePrivate::CreateResourceDefinitionVersionResponsePrivate(
    CreateResourceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateResourceDefinitionVersion response element from \a xml.
 */
void CreateResourceDefinitionVersionResponsePrivate::parseCreateResourceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
