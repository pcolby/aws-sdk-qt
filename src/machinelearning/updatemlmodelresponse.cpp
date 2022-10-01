// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemlmodelresponse.h"
#include "updatemlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateMLModelResponse
 * \brief The UpdateMLModelResponse class provides an interace for MachineLearning UpdateMLModel responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateMLModel
 */

/*!
 * Constructs a UpdateMLModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMLModelResponse::UpdateMLModelResponse(
        const UpdateMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateMLModelResponsePrivate(this), parent)
{
    setRequest(new UpdateMLModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMLModelRequest * UpdateMLModelResponse::request() const
{
    Q_D(const UpdateMLModelResponse);
    return static_cast<const UpdateMLModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning UpdateMLModel \a response.
 */
void UpdateMLModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMLModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::UpdateMLModelResponsePrivate
 * \brief The UpdateMLModelResponsePrivate class provides private implementation for UpdateMLModelResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateMLModelResponsePrivate object with public implementation \a q.
 */
UpdateMLModelResponsePrivate::UpdateMLModelResponsePrivate(
    UpdateMLModelResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning UpdateMLModel response element from \a xml.
 */
void UpdateMLModelResponsePrivate::parseUpdateMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMLModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
