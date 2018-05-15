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
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
