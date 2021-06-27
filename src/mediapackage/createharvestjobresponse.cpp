/*
    Copyright 2013-2021 Paul Colby

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

#include "createharvestjobresponse.h"
#include "createharvestjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobResponse
 * \brief The CreateHarvestJobResponse class provides an interace for MediaPackage CreateHarvestJob responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createHarvestJob
 */

/*!
 * Constructs a CreateHarvestJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHarvestJobResponse::CreateHarvestJobResponse(
        const CreateHarvestJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateHarvestJobResponsePrivate(this), parent)
{
    setRequest(new CreateHarvestJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHarvestJobRequest * CreateHarvestJobResponse::request() const
{
    return static_cast<const CreateHarvestJobRequest *>(MediaPackageResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackage CreateHarvestJob \a response.
 */
void CreateHarvestJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHarvestJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobResponsePrivate
 * \brief The CreateHarvestJobResponsePrivate class provides private implementation for CreateHarvestJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateHarvestJobResponsePrivate object with public implementation \a q.
 */
CreateHarvestJobResponsePrivate::CreateHarvestJobResponsePrivate(
    CreateHarvestJobResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage CreateHarvestJob response element from \a xml.
 */
void CreateHarvestJobResponsePrivate::parseCreateHarvestJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHarvestJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
