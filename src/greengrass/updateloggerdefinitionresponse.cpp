/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
