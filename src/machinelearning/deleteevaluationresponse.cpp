// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DeleteEvaluationResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
