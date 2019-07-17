/*
    Copyright 2013-2019 Paul Colby

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

#include "createexportjobresponse.h"
#include "createexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateExportJobResponse
 * \brief The CreateExportJobResponse class provides an interace for Pinpoint CreateExportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createExportJob
 */

/*!
 * Constructs a CreateExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExportJobResponse::CreateExportJobResponse(
        const CreateExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExportJobRequest * CreateExportJobResponse::request() const
{
    Q_D(const CreateExportJobResponse);
    return static_cast<const CreateExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateExportJob \a response.
 */
void CreateExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateExportJobResponsePrivate
 * \brief The CreateExportJobResponsePrivate class provides private implementation for CreateExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateExportJobResponsePrivate object with public implementation \a q.
 */
CreateExportJobResponsePrivate::CreateExportJobResponsePrivate(
    CreateExportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateExportJob response element from \a xml.
 */
void CreateExportJobResponsePrivate::parseCreateExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
