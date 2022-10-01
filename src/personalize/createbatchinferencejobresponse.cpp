// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
