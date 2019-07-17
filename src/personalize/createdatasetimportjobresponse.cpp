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

#include "createdatasetimportjobresponse.h"
#include "createdatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetImportJobResponse
 * \brief The CreateDatasetImportJobResponse class provides an interace for Personalize CreateDatasetImportJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetImportJob
 */

/*!
 * Constructs a CreateDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetImportJobResponse::CreateDatasetImportJobResponse(
        const CreateDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetImportJobRequest * CreateDatasetImportJobResponse::request() const
{
    Q_D(const CreateDatasetImportJobResponse);
    return static_cast<const CreateDatasetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateDatasetImportJob \a response.
 */
void CreateDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateDatasetImportJobResponsePrivate
 * \brief The CreateDatasetImportJobResponsePrivate class provides private implementation for CreateDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetImportJobResponsePrivate object with public implementation \a q.
 */
CreateDatasetImportJobResponsePrivate::CreateDatasetImportJobResponsePrivate(
    CreateDatasetImportJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateDatasetImportJob response element from \a xml.
 */
void CreateDatasetImportJobResponsePrivate::parseCreateDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
