// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecoredefinitionresponse.h"
#include "updatecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionResponse
 * \brief The UpdateCoreDefinitionResponse class provides an interace for Greengrass UpdateCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateCoreDefinition
 */

/*!
 * Constructs a UpdateCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCoreDefinitionResponse::UpdateCoreDefinitionResponse(
        const UpdateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCoreDefinitionRequest * UpdateCoreDefinitionResponse::request() const
{
    Q_D(const UpdateCoreDefinitionResponse);
    return static_cast<const UpdateCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateCoreDefinition \a response.
 */
void UpdateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionResponsePrivate
 * \brief The UpdateCoreDefinitionResponsePrivate class provides private implementation for UpdateCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateCoreDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateCoreDefinitionResponsePrivate::UpdateCoreDefinitionResponsePrivate(
    UpdateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateCoreDefinition response element from \a xml.
 */
void UpdateCoreDefinitionResponsePrivate::parseUpdateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
