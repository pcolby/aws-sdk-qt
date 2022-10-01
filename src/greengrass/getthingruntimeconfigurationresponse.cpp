// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthingruntimeconfigurationresponse.h"
#include "getthingruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationResponse
 * \brief The GetThingRuntimeConfigurationResponse class provides an interace for Greengrass GetThingRuntimeConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getThingRuntimeConfiguration
 */

/*!
 * Constructs a GetThingRuntimeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetThingRuntimeConfigurationResponse::GetThingRuntimeConfigurationResponse(
        const GetThingRuntimeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetThingRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetThingRuntimeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThingRuntimeConfigurationRequest * GetThingRuntimeConfigurationResponse::request() const
{
    Q_D(const GetThingRuntimeConfigurationResponse);
    return static_cast<const GetThingRuntimeConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetThingRuntimeConfiguration \a response.
 */
void GetThingRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThingRuntimeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationResponsePrivate
 * \brief The GetThingRuntimeConfigurationResponsePrivate class provides private implementation for GetThingRuntimeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetThingRuntimeConfigurationResponsePrivate object with public implementation \a q.
 */
GetThingRuntimeConfigurationResponsePrivate::GetThingRuntimeConfigurationResponsePrivate(
    GetThingRuntimeConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetThingRuntimeConfiguration response element from \a xml.
 */
void GetThingRuntimeConfigurationResponsePrivate::parseGetThingRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThingRuntimeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
