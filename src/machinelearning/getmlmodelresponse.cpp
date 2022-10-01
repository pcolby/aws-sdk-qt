// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmlmodelresponse.h"
#include "getmlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetMLModelResponse
 * \brief The GetMLModelResponse class provides an interace for MachineLearning GetMLModel responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getMLModel
 */

/*!
 * Constructs a GetMLModelResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLModelResponse::GetMLModelResponse(
        const GetMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetMLModelResponsePrivate(this), parent)
{
    setRequest(new GetMLModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLModelRequest * GetMLModelResponse::request() const
{
    Q_D(const GetMLModelResponse);
    return static_cast<const GetMLModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning GetMLModel \a response.
 */
void GetMLModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::GetMLModelResponsePrivate
 * \brief The GetMLModelResponsePrivate class provides private implementation for GetMLModelResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetMLModelResponsePrivate object with public implementation \a q.
 */
GetMLModelResponsePrivate::GetMLModelResponsePrivate(
    GetMLModelResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning GetMLModel response element from \a xml.
 */
void GetMLModelResponsePrivate::parseGetMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
