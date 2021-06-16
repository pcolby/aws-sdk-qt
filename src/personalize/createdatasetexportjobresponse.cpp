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

#include "createdatasetexportjobresponse.h"
#include "createdatasetexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetExportJobResponse
 * \brief The CreateDatasetExportJobResponse class provides an interace for Personalize CreateDatasetExportJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetExportJob
 */

/*!
 * Constructs a CreateDatasetExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetExportJobResponse::CreateDatasetExportJobResponse(
        const CreateDatasetExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateDatasetExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetExportJobRequest * CreateDatasetExportJobResponse::request() const
{
    Q_D(const CreateDatasetExportJobResponse);
    return static_cast<const CreateDatasetExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateDatasetExportJob \a response.
 */
void CreateDatasetExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateDatasetExportJobResponsePrivate
 * \brief The CreateDatasetExportJobResponsePrivate class provides private implementation for CreateDatasetExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetExportJobResponsePrivate object with public implementation \a q.
 */
CreateDatasetExportJobResponsePrivate::CreateDatasetExportJobResponsePrivate(
    CreateDatasetExportJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateDatasetExportJob response element from \a xml.
 */
void CreateDatasetExportJobResponsePrivate::parseCreateDatasetExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
