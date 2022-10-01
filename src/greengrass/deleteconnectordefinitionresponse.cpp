// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectordefinitionresponse.h"
#include "deleteconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionResponse
 * \brief The DeleteConnectorDefinitionResponse class provides an interace for Greengrass DeleteConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteConnectorDefinition
 */

/*!
 * Constructs a DeleteConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectorDefinitionResponse::DeleteConnectorDefinitionResponse(
        const DeleteConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectorDefinitionRequest * DeleteConnectorDefinitionResponse::request() const
{
    Q_D(const DeleteConnectorDefinitionResponse);
    return static_cast<const DeleteConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteConnectorDefinition \a response.
 */
void DeleteConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionResponsePrivate
 * \brief The DeleteConnectorDefinitionResponsePrivate class provides private implementation for DeleteConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteConnectorDefinitionResponsePrivate::DeleteConnectorDefinitionResponsePrivate(
    DeleteConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteConnectorDefinition response element from \a xml.
 */
void DeleteConnectorDefinitionResponsePrivate::parseDeleteConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
