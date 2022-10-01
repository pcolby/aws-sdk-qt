// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(CreateMLModelResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
