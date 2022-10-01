// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecoredefinitionresponse.h"
#include "deletecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionResponse
 * \brief The DeleteCoreDefinitionResponse class provides an interace for Greengrass DeleteCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteCoreDefinition
 */

/*!
 * Constructs a DeleteCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCoreDefinitionResponse::DeleteCoreDefinitionResponse(
        const DeleteCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCoreDefinitionRequest * DeleteCoreDefinitionResponse::request() const
{
    Q_D(const DeleteCoreDefinitionResponse);
    return static_cast<const DeleteCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteCoreDefinition \a response.
 */
void DeleteCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionResponsePrivate
 * \brief The DeleteCoreDefinitionResponsePrivate class provides private implementation for DeleteCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteCoreDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteCoreDefinitionResponsePrivate::DeleteCoreDefinitionResponsePrivate(
    DeleteCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteCoreDefinition response element from \a xml.
 */
void DeleteCoreDefinitionResponsePrivate::parseDeleteCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
