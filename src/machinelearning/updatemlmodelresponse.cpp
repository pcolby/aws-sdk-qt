/*
    Copyright 2013-2020 Paul Colby

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
