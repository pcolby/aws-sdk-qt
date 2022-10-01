// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcedefinitionresponse.h"
#include "getresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionResponse
 * \brief The GetResourceDefinitionResponse class provides an interace for Greengrass GetResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getResourceDefinition
 */

/*!
 * Constructs a GetResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceDefinitionResponse::GetResourceDefinitionResponse(
        const GetResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceDefinitionRequest * GetResourceDefinitionResponse::request() const
{
    Q_D(const GetResourceDefinitionResponse);
    return static_cast<const GetResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetResourceDefinition \a response.
 */
void GetResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionResponsePrivate
 * \brief The GetResourceDefinitionResponsePrivate class provides private implementation for GetResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionResponsePrivate object with public implementation \a q.
 */
GetResourceDefinitionResponsePrivate::GetResourceDefinitionResponsePrivate(
    GetResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetResourceDefinition response element from \a xml.
 */
void GetResourceDefinitionResponsePrivate::parseGetResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
