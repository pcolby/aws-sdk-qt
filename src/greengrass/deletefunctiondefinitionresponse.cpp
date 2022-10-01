// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctiondefinitionresponse.h"
#include "deletefunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionResponse
 * \brief The DeleteFunctionDefinitionResponse class provides an interace for Greengrass DeleteFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteFunctionDefinition
 */

/*!
 * Constructs a DeleteFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionDefinitionResponse::DeleteFunctionDefinitionResponse(
        const DeleteFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionDefinitionRequest * DeleteFunctionDefinitionResponse::request() const
{
    Q_D(const DeleteFunctionDefinitionResponse);
    return static_cast<const DeleteFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteFunctionDefinition \a response.
 */
void DeleteFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionResponsePrivate
 * \brief The DeleteFunctionDefinitionResponsePrivate class provides private implementation for DeleteFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteFunctionDefinitionResponsePrivate::DeleteFunctionDefinitionResponsePrivate(
    DeleteFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteFunctionDefinition response element from \a xml.
 */
void DeleteFunctionDefinitionResponsePrivate::parseDeleteFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
