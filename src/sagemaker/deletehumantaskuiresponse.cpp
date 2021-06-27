/*
    Copyright 2013-2021 Paul Colby

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

#include "deletehumantaskuiresponse.h"
#include "deletehumantaskuiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteHumanTaskUiResponse
 * \brief The DeleteHumanTaskUiResponse class provides an interace for SageMaker DeleteHumanTaskUi responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteHumanTaskUi
 */

/*!
 * Constructs a DeleteHumanTaskUiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHumanTaskUiResponse::DeleteHumanTaskUiResponse(
        const DeleteHumanTaskUiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteHumanTaskUiResponsePrivate(this), parent)
{
    setRequest(new DeleteHumanTaskUiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHumanTaskUiRequest * DeleteHumanTaskUiResponse::request() const
{
    return static_cast<const DeleteHumanTaskUiRequest *>(SageMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteHumanTaskUi \a response.
 */
void DeleteHumanTaskUiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHumanTaskUiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteHumanTaskUiResponsePrivate
 * \brief The DeleteHumanTaskUiResponsePrivate class provides private implementation for DeleteHumanTaskUiResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteHumanTaskUiResponsePrivate object with public implementation \a q.
 */
DeleteHumanTaskUiResponsePrivate::DeleteHumanTaskUiResponsePrivate(
    DeleteHumanTaskUiResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteHumanTaskUi response element from \a xml.
 */
void DeleteHumanTaskUiResponsePrivate::parseDeleteHumanTaskUiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHumanTaskUiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
