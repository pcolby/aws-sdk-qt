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

#include "deleteevaluationresponse.h"
#include "deleteevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteEvaluationResponse
 * \brief The DeleteEvaluationResponse class provides an interace for MachineLearning DeleteEvaluation responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteEvaluation
 */

/*!
 * Constructs a DeleteEvaluationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEvaluationResponse::DeleteEvaluationResponse(
        const DeleteEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteEvaluationResponsePrivate(this), parent)
{
    setRequest(new DeleteEvaluationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEvaluationRequest * DeleteEvaluationResponse::request() const
{
    Q_D(const DeleteEvaluationResponse);
    return static_cast<const DeleteEvaluationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteEvaluation \a response.
 */
void DeleteEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteEvaluationResponsePrivate
 * \brief The DeleteEvaluationResponsePrivate class provides private implementation for DeleteEvaluationResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteEvaluationResponsePrivate object with public implementation \a q.
 */
DeleteEvaluationResponsePrivate::DeleteEvaluationResponsePrivate(
    DeleteEvaluationResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteEvaluation response element from \a xml.
 */
void DeleteEvaluationResponsePrivate::parseDeleteEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
