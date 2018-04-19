/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
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
    Q_D(UpdateFunctionDefinitionResponse);
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
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
