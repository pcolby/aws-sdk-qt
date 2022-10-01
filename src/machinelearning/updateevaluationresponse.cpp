// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateevaluationresponse.h"
#include "updateevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateEvaluationResponse
 * \brief The UpdateEvaluationResponse class provides an interace for MachineLearning UpdateEvaluation responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateEvaluation
 */

/*!
 * Constructs a UpdateEvaluationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEvaluationResponse::UpdateEvaluationResponse(
        const UpdateEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateEvaluationResponsePrivate(this), parent)
{
    setRequest(new UpdateEvaluationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEvaluationRequest * UpdateEvaluationResponse::request() const
{
    Q_D(const UpdateEvaluationResponse);
    return static_cast<const UpdateEvaluationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning UpdateEvaluation \a response.
 */
void UpdateEvaluationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::UpdateEvaluationResponsePrivate
 * \brief The UpdateEvaluationResponsePrivate class provides private implementation for UpdateEvaluationResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateEvaluationResponsePrivate object with public implementation \a q.
 */
UpdateEvaluationResponsePrivate::UpdateEvaluationResponsePrivate(
    UpdateEvaluationResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning UpdateEvaluation response element from \a xml.
 */
void UpdateEvaluationResponsePrivate::parseUpdateEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEvaluationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
