// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectordefinitionversionresponse.h"
#include "getconnectordefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionResponse
 * \brief The GetConnectorDefinitionVersionResponse class provides an interace for Greengrass GetConnectorDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinitionVersion
 */

/*!
 * Constructs a GetConnectorDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorDefinitionVersionResponse::GetConnectorDefinitionVersionResponse(
        const GetConnectorDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectorDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetConnectorDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorDefinitionVersionRequest * GetConnectorDefinitionVersionResponse::request() const
{
    Q_D(const GetConnectorDefinitionVersionResponse);
    return static_cast<const GetConnectorDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetConnectorDefinitionVersion \a response.
 */
void GetConnectorDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectorDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionResponsePrivate
 * \brief The GetConnectorDefinitionVersionResponsePrivate class provides private implementation for GetConnectorDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetConnectorDefinitionVersionResponsePrivate::GetConnectorDefinitionVersionResponsePrivate(
    GetConnectorDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetConnectorDefinitionVersion response element from \a xml.
 */
void GetConnectorDefinitionVersionResponsePrivate::parseGetConnectorDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
