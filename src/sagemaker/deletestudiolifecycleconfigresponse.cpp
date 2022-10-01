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

#include "deletestudiolifecycleconfigresponse.h"
#include "deletestudiolifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigResponse
 * \brief The DeleteStudioLifecycleConfigResponse class provides an interace for SageMaker DeleteStudioLifecycleConfig responses.
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
 * \sa SageMakerClient::deleteStudioLifecycleConfig
 */

/*!
 * Constructs a DeleteStudioLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioLifecycleConfigResponse::DeleteStudioLifecycleConfigResponse(
        const DeleteStudioLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteStudioLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioLifecycleConfigRequest * DeleteStudioLifecycleConfigResponse::request() const
{
    Q_D(const DeleteStudioLifecycleConfigResponse);
    return static_cast<const DeleteStudioLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteStudioLifecycleConfig \a response.
 */
void DeleteStudioLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigResponsePrivate
 * \brief The DeleteStudioLifecycleConfigResponsePrivate class provides private implementation for DeleteStudioLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteStudioLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DeleteStudioLifecycleConfigResponsePrivate::DeleteStudioLifecycleConfigResponsePrivate(
    DeleteStudioLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteStudioLifecycleConfig response element from \a xml.
 */
void DeleteStudioLifecycleConfigResponsePrivate::parseDeleteStudioLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
