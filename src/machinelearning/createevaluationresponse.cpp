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
