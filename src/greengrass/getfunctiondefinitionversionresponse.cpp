// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctiondefinitionversionresponse.h"
#include "getfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionResponse
 * \brief The GetFunctionDefinitionVersionResponse class provides an interace for Greengrass GetFunctionDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinitionVersion
 */

/*!
 * Constructs a GetFunctionDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionDefinitionVersionResponse::GetFunctionDefinitionVersionResponse(
        const GetFunctionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionDefinitionVersionRequest * GetFunctionDefinitionVersionResponse::request() const
{
    Q_D(const GetFunctionDefinitionVersionResponse);
    return static_cast<const GetFunctionDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetFunctionDefinitionVersion \a response.
 */
void GetFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionResponsePrivate
 * \brief The GetFunctionDefinitionVersionResponsePrivate class provides private implementation for GetFunctionDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetFunctionDefinitionVersionResponsePrivate::GetFunctionDefinitionVersionResponsePrivate(
    GetFunctionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetFunctionDefinitionVersion response element from \a xml.
 */
void GetFunctionDefinitionVersionResponsePrivate::parseGetFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
