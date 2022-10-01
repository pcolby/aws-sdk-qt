// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefunctiondefinitionresponse.h"
#include "updatefunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionResponse
 * \brief The UpdateFunctionDefinitionResponse class provides an interace for Greengrass UpdateFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateFunctionDefinition
 */

/*!
 * Constructs a UpdateFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFunctionDefinitionResponse::UpdateFunctionDefinitionResponse(
        const UpdateFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFunctionDefinitionRequest * UpdateFunctionDefinitionResponse::request() const
{
    Q_D(const UpdateFunctionDefinitionResponse);
    return static_cast<const UpdateFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateFunctionDefinition \a response.
 */
void UpdateFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionResponsePrivate
 * \brief The UpdateFunctionDefinitionResponsePrivate class provides private implementation for UpdateFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateFunctionDefinitionResponsePrivate::UpdateFunctionDefinitionResponsePrivate(
    UpdateFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateFunctionDefinition response element from \a xml.
 */
void UpdateFunctionDefinitionResponsePrivate::parseUpdateFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
