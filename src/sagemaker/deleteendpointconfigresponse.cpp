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

#include "deleteendpointconfigresponse.h"
#include "deleteendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigResponse
 * \brief The DeleteEndpointConfigResponse class provides an interace for SageMaker DeleteEndpointConfig responses.
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
 * \sa SageMakerClient::deleteEndpointConfig
 */

/*!
 * Constructs a DeleteEndpointConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointConfigResponse::DeleteEndpointConfigResponse(
        const DeleteEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointConfigRequest * DeleteEndpointConfigResponse::request() const
{
    Q_D(const DeleteEndpointConfigResponse);
    return static_cast<const DeleteEndpointConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEndpointConfig \a response.
 */
void DeleteEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigResponsePrivate
 * \brief The DeleteEndpointConfigResponsePrivate class provides private implementation for DeleteEndpointConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointConfigResponsePrivate object with public implementation \a q.
 */
DeleteEndpointConfigResponsePrivate::DeleteEndpointConfigResponsePrivate(
    DeleteEndpointConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEndpointConfig response element from \a xml.
 */
void DeleteEndpointConfigResponsePrivate::parseDeleteEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
