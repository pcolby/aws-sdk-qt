/*
    Copyright 2013-2020 Paul Colby

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

#include "createcoderepositoryresponse.h"
#include "createcoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryResponse
 * \brief The CreateCodeRepositoryResponse class provides an interace for SageMaker CreateCodeRepository responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createCodeRepository
 */

/*!
 * Constructs a CreateCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCodeRepositoryResponse::CreateCodeRepositoryResponse(
        const CreateCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new CreateCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCodeRepositoryRequest * CreateCodeRepositoryResponse::request() const
{
    Q_D(const CreateCodeRepositoryResponse);
    return static_cast<const CreateCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateCodeRepository \a response.
 */
void CreateCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryResponsePrivate
 * \brief The CreateCodeRepositoryResponsePrivate class provides private implementation for CreateCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCodeRepositoryResponsePrivate object with public implementation \a q.
 */
CreateCodeRepositoryResponsePrivate::CreateCodeRepositoryResponsePrivate(
    CreateCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateCodeRepository response element from \a xml.
 */
void CreateCodeRepositoryResponsePrivate::parseCreateCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
