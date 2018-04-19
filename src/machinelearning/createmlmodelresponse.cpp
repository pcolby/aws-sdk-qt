/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createmlmodelresponse.h"
#include "createmlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateMLModelResponse
 * \brief The CreateMLModelResponse class provides an interace for MachineLearning CreateMLModel responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createMLModel
 */

/*!
 * Constructs a CreateMLModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMLModelResponse::CreateMLModelResponse(
        const CreateMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateMLModelResponsePrivate(this), parent)
{
    setRequest(new CreateMLModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMLModelRequest * CreateMLModelResponse::request() const
{
    Q_D(const CreateMLModelResponse);
    return static_cast<const CreateMLModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateMLModel \a response.
 */
void CreateMLModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateMLModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateMLModelResponsePrivate
 * \brief The CreateMLModelResponsePrivate class provides private implementation for CreateMLModelResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateMLModelResponsePrivate object with public implementation \a q.
 */
CreateMLModelResponsePrivate::CreateMLModelResponsePrivate(
    CreateMLModelResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateMLModel response element from \a xml.
 */
void CreateMLModelResponsePrivate::parseCreateMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMLModelResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
