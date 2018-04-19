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
    Q_D(DeleteEndpointConfigResponse);
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
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
