// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(GetEvaluationResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
