// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createevaluationresponse.h"
#include "createevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateEvaluationResponse
 * \brief The CreateEvaluationResponse class provides an interace for MachineLearning CreateEvaluation responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createEvaluation
 */

/*!
 * Constructs a CreateEvaluationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEvaluationResponse::CreateEvaluationResponse(
        const CreateEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateEvaluationResponsePrivate(this), parent)
{
    setRequest(new CreateEvaluationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEvaluationRequest * CreateEvaluationResponse::request() const
{
    Q_D(const CreateEvaluationResponse);
    return static_cast<const CreateEvaluationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateEvaluation \a response.
 */
void CreateEvaluationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateEvaluationResponsePrivate
 * \brief The CreateEvaluationResponsePrivate class provides private implementation for CreateEvaluationResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateEvaluationResponsePrivate object with public implementation \a q.
 */
CreateEvaluationResponsePrivate::CreateEvaluationResponsePrivate(
    CreateEvaluationResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateEvaluation response element from \a xml.
 */
void CreateEvaluationResponsePrivate::parseCreateEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEvaluationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
