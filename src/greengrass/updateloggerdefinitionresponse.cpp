// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloggerdefinitionresponse.h"
#include "updateloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateLoggerDefinitionResponse
 * \brief The UpdateLoggerDefinitionResponse class provides an interace for Greengrass UpdateLoggerDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateLoggerDefinition
 */

/*!
 * Constructs a UpdateLoggerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLoggerDefinitionResponse::UpdateLoggerDefinitionResponse(
        const UpdateLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateLoggerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLoggerDefinitionRequest * UpdateLoggerDefinitionResponse::request() const
{
    Q_D(const UpdateLoggerDefinitionResponse);
    return static_cast<const UpdateLoggerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateLoggerDefinition \a response.
 */
void UpdateLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateLoggerDefinitionResponsePrivate
 * \brief The UpdateLoggerDefinitionResponsePrivate class provides private implementation for UpdateLoggerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateLoggerDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateLoggerDefinitionResponsePrivate::UpdateLoggerDefinitionResponsePrivate(
    UpdateLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateLoggerDefinition response element from \a xml.
 */
void UpdateLoggerDefinitionResponsePrivate::parseUpdateLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLoggerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
