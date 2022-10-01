// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloggerdefinitionversionresponse.h"
#include "getloggerdefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionResponse
 * \brief The GetLoggerDefinitionVersionResponse class provides an interace for Greengrass GetLoggerDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getLoggerDefinitionVersion
 */

/*!
 * Constructs a GetLoggerDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoggerDefinitionVersionResponse::GetLoggerDefinitionVersionResponse(
        const GetLoggerDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoggerDefinitionVersionRequest * GetLoggerDefinitionVersionResponse::request() const
{
    Q_D(const GetLoggerDefinitionVersionResponse);
    return static_cast<const GetLoggerDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetLoggerDefinitionVersion \a response.
 */
void GetLoggerDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLoggerDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionResponsePrivate
 * \brief The GetLoggerDefinitionVersionResponsePrivate class provides private implementation for GetLoggerDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetLoggerDefinitionVersionResponsePrivate::GetLoggerDefinitionVersionResponsePrivate(
    GetLoggerDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetLoggerDefinitionVersion response element from \a xml.
 */
void GetLoggerDefinitionVersionResponsePrivate::parseGetLoggerDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
