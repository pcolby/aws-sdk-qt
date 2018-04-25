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

#include "getevaluationresponse.h"
#include "getevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetEvaluationResponse
 * \brief The GetEvaluationResponse class provides an interace for MachineLearning GetEvaluation responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getEvaluation
 */

/*!
 * Constructs a GetEvaluationResponse object for \a reply to \a request, with parent \a parent.
 */
GetEvaluationResponse::GetEvaluationResponse(
        const GetEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetEvaluationResponsePrivate(this), parent)
{
    setRequest(new GetEvaluationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEvaluationRequest * GetEvaluationResponse::request() const
{
    Q_D(const GetEvaluationResponse);
    return static_cast<const GetEvaluationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning GetEvaluation \a response.
 */
void GetEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::GetEvaluationResponsePrivate
 * \brief The GetEvaluationResponsePrivate class provides private implementation for GetEvaluationResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetEvaluationResponsePrivate object with public implementation \a q.
 */
GetEvaluationResponsePrivate::GetEvaluationResponsePrivate(
    GetEvaluationResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning GetEvaluation response element from \a xml.
 */
void GetEvaluationResponsePrivate::parseGetEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
