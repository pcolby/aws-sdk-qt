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

#include "createimportjobresponse.h"
#include "createimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateImportJobResponse
 * \brief The CreateImportJobResponse class provides an interace for Pinpoint CreateImportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::createImportJob
 */

/*!
 * Constructs a CreateImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImportJobResponse::CreateImportJobResponse(
        const CreateImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImportJobRequest * CreateImportJobResponse::request() const
{
    Q_D(const CreateImportJobResponse);
    return static_cast<const CreateImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateImportJob \a response.
 */
void CreateImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateImportJobResponsePrivate
 * \brief The CreateImportJobResponsePrivate class provides private implementation for CreateImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateImportJobResponsePrivate object with public implementation \a q.
 */
CreateImportJobResponsePrivate::CreateImportJobResponsePrivate(
    CreateImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateImportJob response element from \a xml.
 */
void CreateImportJobResponsePrivate::parseCreateImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
