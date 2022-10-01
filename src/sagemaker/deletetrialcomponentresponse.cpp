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

#include "deletetrialcomponentresponse.h"
#include "deletetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTrialComponentResponse
 * \brief The DeleteTrialComponentResponse class provides an interace for SageMaker DeleteTrialComponent responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteTrialComponent
 */

/*!
 * Constructs a DeleteTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrialComponentResponse::DeleteTrialComponentResponse(
        const DeleteTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteTrialComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrialComponentRequest * DeleteTrialComponentResponse::request() const
{
    Q_D(const DeleteTrialComponentResponse);
    return static_cast<const DeleteTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteTrialComponent \a response.
 */
void DeleteTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteTrialComponentResponsePrivate
 * \brief The DeleteTrialComponentResponsePrivate class provides private implementation for DeleteTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteTrialComponentResponsePrivate object with public implementation \a q.
 */
DeleteTrialComponentResponsePrivate::DeleteTrialComponentResponsePrivate(
    DeleteTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteTrialComponent response element from \a xml.
 */
void DeleteTrialComponentResponsePrivate::parseDeleteTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
