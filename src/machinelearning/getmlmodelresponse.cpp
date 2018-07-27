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
