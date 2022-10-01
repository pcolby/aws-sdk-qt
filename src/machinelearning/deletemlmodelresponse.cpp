// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemlmodelresponse.h"
#include "deletemlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteMLModelResponse
 * \brief The DeleteMLModelResponse class provides an interace for MachineLearning DeleteMLModel responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteMLModel
 */

/*!
 * Constructs a DeleteMLModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMLModelResponse::DeleteMLModelResponse(
        const DeleteMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteMLModelResponsePrivate(this), parent)
{
    setRequest(new DeleteMLModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMLModelRequest * DeleteMLModelResponse::request() const
{
    Q_D(const DeleteMLModelResponse);
    return static_cast<const DeleteMLModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteMLModel \a response.
 */
void DeleteMLModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMLModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteMLModelResponsePrivate
 * \brief The DeleteMLModelResponsePrivate class provides private implementation for DeleteMLModelResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteMLModelResponsePrivate object with public implementation \a q.
 */
DeleteMLModelResponsePrivate::DeleteMLModelResponsePrivate(
    DeleteMLModelResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteMLModel response element from \a xml.
 */
void DeleteMLModelResponsePrivate::parseDeleteMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMLModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
