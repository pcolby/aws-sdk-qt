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

#include "createbatchinferencejobresponse.h"
#include "createbatchinferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateBatchInferenceJobResponse
 * \brief The CreateBatchInferenceJobResponse class provides an interace for Personalize CreateBatchInferenceJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createBatchInferenceJob
 */

/*!
 * Constructs a CreateBatchInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBatchInferenceJobResponse::CreateBatchInferenceJobResponse(
        const CreateBatchInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateBatchInferenceJobResponsePrivate(this), parent)
{
    setRequest(new CreateBatchInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBatchInferenceJobRequest * CreateBatchInferenceJobResponse::request() const
{
    Q_D(const CreateBatchInferenceJobResponse);
    return static_cast<const CreateBatchInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateBatchInferenceJob \a response.
 */
void CreateBatchInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBatchInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateBatchInferenceJobResponsePrivate
 * \brief The CreateBatchInferenceJobResponsePrivate class provides private implementation for CreateBatchInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateBatchInferenceJobResponsePrivate object with public implementation \a q.
 */
CreateBatchInferenceJobResponsePrivate::CreateBatchInferenceJobResponsePrivate(
    CreateBatchInferenceJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateBatchInferenceJob response element from \a xml.
 */
void CreateBatchInferenceJobResponsePrivate::parseCreateBatchInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBatchInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
