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

#include "deletecoderepositoryresponse.h"
#include "deletecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryResponse
 * \brief The DeleteCodeRepositoryResponse class provides an interace for SageMaker DeleteCodeRepository responses.
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
 * \sa SageMakerClient::deleteCodeRepository
 */

/*!
 * Constructs a DeleteCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCodeRepositoryResponse::DeleteCodeRepositoryResponse(
        const DeleteCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new DeleteCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCodeRepositoryRequest * DeleteCodeRepositoryResponse::request() const
{
    Q_D(const DeleteCodeRepositoryResponse);
    return static_cast<const DeleteCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteCodeRepository \a response.
 */
void DeleteCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryResponsePrivate
 * \brief The DeleteCodeRepositoryResponsePrivate class provides private implementation for DeleteCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteCodeRepositoryResponsePrivate object with public implementation \a q.
 */
DeleteCodeRepositoryResponsePrivate::DeleteCodeRepositoryResponsePrivate(
    DeleteCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteCodeRepository response element from \a xml.
 */
void DeleteCodeRepositoryResponsePrivate::parseDeleteCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
