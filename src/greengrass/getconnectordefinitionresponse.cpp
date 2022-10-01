// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectordefinitionresponse.h"
#include "getconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionResponse
 * \brief The GetConnectorDefinitionResponse class provides an interace for Greengrass GetConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinition
 */

/*!
 * Constructs a GetConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorDefinitionResponse::GetConnectorDefinitionResponse(
        const GetConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorDefinitionRequest * GetConnectorDefinitionResponse::request() const
{
    Q_D(const GetConnectorDefinitionResponse);
    return static_cast<const GetConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetConnectorDefinition \a response.
 */
void GetConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionResponsePrivate
 * \brief The GetConnectorDefinitionResponsePrivate class provides private implementation for GetConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
GetConnectorDefinitionResponsePrivate::GetConnectorDefinitionResponsePrivate(
    GetConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetConnectorDefinition response element from \a xml.
 */
void GetConnectorDefinitionResponsePrivate::parseGetConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
