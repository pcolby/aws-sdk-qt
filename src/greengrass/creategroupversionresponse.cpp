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

#include "creategroupversionresponse.h"
#include "creategroupversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupVersionResponse
 * \brief The CreateGroupVersionResponse class provides an interace for Greengrass CreateGroupVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createGroupVersion
 */

/*!
 * Constructs a CreateGroupVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupVersionResponse::CreateGroupVersionResponse(
        const CreateGroupVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateGroupVersionResponsePrivate(this), parent)
{
    setRequest(new CreateGroupVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupVersionRequest * CreateGroupVersionResponse::request() const
{
    Q_D(const CreateGroupVersionResponse);
    return static_cast<const CreateGroupVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateGroupVersion \a response.
 */
void CreateGroupVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGroupVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateGroupVersionResponsePrivate
 * \brief The CreateGroupVersionResponsePrivate class provides private implementation for CreateGroupVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateGroupVersionResponsePrivate object with public implementation \a q.
 */
CreateGroupVersionResponsePrivate::CreateGroupVersionResponsePrivate(
    CreateGroupVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateGroupVersion response element from \a xml.
 */
void CreateGroupVersionResponsePrivate::parseCreateGroupVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
