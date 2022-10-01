// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicedefinitionresponse.h"
#include "getdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionResponse
 * \brief The GetDeviceDefinitionResponse class provides an interace for Greengrass GetDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeviceDefinition
 */

/*!
 * Constructs a GetDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceDefinitionResponse::GetDeviceDefinitionResponse(
        const GetDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceDefinitionRequest * GetDeviceDefinitionResponse::request() const
{
    Q_D(const GetDeviceDefinitionResponse);
    return static_cast<const GetDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetDeviceDefinition \a response.
 */
void GetDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionResponsePrivate
 * \brief The GetDeviceDefinitionResponsePrivate class provides private implementation for GetDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
GetDeviceDefinitionResponsePrivate::GetDeviceDefinitionResponsePrivate(
    GetDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetDeviceDefinition response element from \a xml.
 */
void GetDeviceDefinitionResponsePrivate::parseGetDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
