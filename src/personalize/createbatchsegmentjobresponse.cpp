// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
