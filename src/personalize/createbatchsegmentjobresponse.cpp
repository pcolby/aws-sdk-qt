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

#include "createbatchsegmentjobresponse.h"
#include "createbatchsegmentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobResponse
 * \brief The CreateBatchSegmentJobResponse class provides an interace for Personalize CreateBatchSegmentJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createBatchSegmentJob
 */

/*!
 * Constructs a CreateBatchSegmentJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBatchSegmentJobResponse::CreateBatchSegmentJobResponse(
        const CreateBatchSegmentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateBatchSegmentJobResponsePrivate(this), parent)
{
    setRequest(new CreateBatchSegmentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBatchSegmentJobRequest * CreateBatchSegmentJobResponse::request() const
{
    Q_D(const CreateBatchSegmentJobResponse);
    return static_cast<const CreateBatchSegmentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateBatchSegmentJob \a response.
 */
void CreateBatchSegmentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBatchSegmentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateBatchSegmentJobResponsePrivate
 * \brief The CreateBatchSegmentJobResponsePrivate class provides private implementation for CreateBatchSegmentJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateBatchSegmentJobResponsePrivate object with public implementation \a q.
 */
CreateBatchSegmentJobResponsePrivate::CreateBatchSegmentJobResponsePrivate(
    CreateBatchSegmentJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateBatchSegmentJob response element from \a xml.
 */
void CreateBatchSegmentJobResponsePrivate::parseCreateBatchSegmentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBatchSegmentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
