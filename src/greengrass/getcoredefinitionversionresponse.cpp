// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcoredefinitionversionresponse.h"
#include "getcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionResponse
 * \brief The GetCoreDefinitionVersionResponse class provides an interace for Greengrass GetCoreDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinitionVersion
 */

/*!
 * Constructs a GetCoreDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreDefinitionVersionResponse::GetCoreDefinitionVersionResponse(
        const GetCoreDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreDefinitionVersionRequest * GetCoreDefinitionVersionResponse::request() const
{
    Q_D(const GetCoreDefinitionVersionResponse);
    return static_cast<const GetCoreDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetCoreDefinitionVersion \a response.
 */
void GetCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionResponsePrivate
 * \brief The GetCoreDefinitionVersionResponsePrivate class provides private implementation for GetCoreDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetCoreDefinitionVersionResponsePrivate::GetCoreDefinitionVersionResponsePrivate(
    GetCoreDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetCoreDefinitionVersion response element from \a xml.
 */
void GetCoreDefinitionVersionResponsePrivate::parseGetCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
