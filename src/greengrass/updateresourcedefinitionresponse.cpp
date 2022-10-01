// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcedefinitionresponse.h"
#include "updateresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionResponse
 * \brief The UpdateResourceDefinitionResponse class provides an interace for Greengrass UpdateResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateResourceDefinition
 */

/*!
 * Constructs a UpdateResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceDefinitionResponse::UpdateResourceDefinitionResponse(
        const UpdateResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceDefinitionRequest * UpdateResourceDefinitionResponse::request() const
{
    Q_D(const UpdateResourceDefinitionResponse);
    return static_cast<const UpdateResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateResourceDefinition \a response.
 */
void UpdateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionResponsePrivate
 * \brief The UpdateResourceDefinitionResponsePrivate class provides private implementation for UpdateResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateResourceDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateResourceDefinitionResponsePrivate::UpdateResourceDefinitionResponsePrivate(
    UpdateResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateResourceDefinition response element from \a xml.
 */
void UpdateResourceDefinitionResponsePrivate::parseUpdateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
