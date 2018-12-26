/*
    Copyright 2013-2018 Paul Colby

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

#include "createsoftwareupdatejobresponse.h"
#include "createsoftwareupdatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSoftwareUpdateJobResponse
 * \brief The CreateSoftwareUpdateJobResponse class provides an interace for Greengrass CreateSoftwareUpdateJob responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createSoftwareUpdateJob
 */

/*!
 * Constructs a CreateSoftwareUpdateJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSoftwareUpdateJobResponse::CreateSoftwareUpdateJobResponse(
        const CreateSoftwareUpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateSoftwareUpdateJobResponsePrivate(this), parent)
{
    setRequest(new CreateSoftwareUpdateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSoftwareUpdateJobRequest * CreateSoftwareUpdateJobResponse::request() const
{
    Q_D(const CreateSoftwareUpdateJobResponse);
    return static_cast<const CreateSoftwareUpdateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateSoftwareUpdateJob \a response.
 */
void CreateSoftwareUpdateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSoftwareUpdateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateSoftwareUpdateJobResponsePrivate
 * \brief The CreateSoftwareUpdateJobResponsePrivate class provides private implementation for CreateSoftwareUpdateJobResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateSoftwareUpdateJobResponsePrivate object with public implementation \a q.
 */
CreateSoftwareUpdateJobResponsePrivate::CreateSoftwareUpdateJobResponsePrivate(
    CreateSoftwareUpdateJobResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateSoftwareUpdateJob response element from \a xml.
 */
void CreateSoftwareUpdateJobResponsePrivate::parseCreateSoftwareUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSoftwareUpdateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
