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

#include "deletealgorithmresponse.h"
#include "deletealgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmResponse
 * \brief The DeleteAlgorithmResponse class provides an interace for SageMaker DeleteAlgorithm responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteAlgorithm
 */

/*!
 * Constructs a DeleteAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlgorithmResponse::DeleteAlgorithmResponse(
        const DeleteAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteAlgorithmResponsePrivate(this), parent)
{
    setRequest(new DeleteAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlgorithmRequest * DeleteAlgorithmResponse::request() const
{
    Q_D(const DeleteAlgorithmResponse);
    return static_cast<const DeleteAlgorithmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteAlgorithm \a response.
 */
void DeleteAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmResponsePrivate
 * \brief The DeleteAlgorithmResponsePrivate class provides private implementation for DeleteAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAlgorithmResponsePrivate object with public implementation \a q.
 */
DeleteAlgorithmResponsePrivate::DeleteAlgorithmResponsePrivate(
    DeleteAlgorithmResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteAlgorithm response element from \a xml.
 */
void DeleteAlgorithmResponsePrivate::parseDeleteAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
