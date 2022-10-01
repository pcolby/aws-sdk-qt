// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctiondefinitionresponse.h"
#include "getfunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionResponse
 * \brief The GetFunctionDefinitionResponse class provides an interace for Greengrass GetFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinition
 */

/*!
 * Constructs a GetFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionDefinitionResponse::GetFunctionDefinitionResponse(
        const GetFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionDefinitionRequest * GetFunctionDefinitionResponse::request() const
{
    Q_D(const GetFunctionDefinitionResponse);
    return static_cast<const GetFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetFunctionDefinition \a response.
 */
void GetFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionResponsePrivate
 * \brief The GetFunctionDefinitionResponsePrivate class provides private implementation for GetFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
GetFunctionDefinitionResponsePrivate::GetFunctionDefinitionResponsePrivate(
    GetFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetFunctionDefinition response element from \a xml.
 */
void GetFunctionDefinitionResponsePrivate::parseGetFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
