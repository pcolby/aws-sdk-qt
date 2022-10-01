// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcoredefinitionresponse.h"
#include "getcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionResponse
 * \brief The GetCoreDefinitionResponse class provides an interace for Greengrass GetCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinition
 */

/*!
 * Constructs a GetCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreDefinitionResponse::GetCoreDefinitionResponse(
        const GetCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreDefinitionRequest * GetCoreDefinitionResponse::request() const
{
    Q_D(const GetCoreDefinitionResponse);
    return static_cast<const GetCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetCoreDefinition \a response.
 */
void GetCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionResponsePrivate
 * \brief The GetCoreDefinitionResponsePrivate class provides private implementation for GetCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionResponsePrivate object with public implementation \a q.
 */
GetCoreDefinitionResponsePrivate::GetCoreDefinitionResponsePrivate(
    GetCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetCoreDefinition response element from \a xml.
 */
void GetCoreDefinitionResponsePrivate::parseGetCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
