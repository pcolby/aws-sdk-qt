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

#include "updatecoderepositoryresponse.h"
#include "updatecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryResponse
 * \brief The UpdateCodeRepositoryResponse class provides an interace for SageMaker UpdateCodeRepository responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::updateCodeRepository
 */

/*!
 * Constructs a UpdateCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCodeRepositoryResponse::UpdateCodeRepositoryResponse(
        const UpdateCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new UpdateCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCodeRepositoryRequest * UpdateCodeRepositoryResponse::request() const
{
    Q_D(const UpdateCodeRepositoryResponse);
    return static_cast<const UpdateCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateCodeRepository \a response.
 */
void UpdateCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryResponsePrivate
 * \brief The UpdateCodeRepositoryResponsePrivate class provides private implementation for UpdateCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateCodeRepositoryResponsePrivate object with public implementation \a q.
 */
UpdateCodeRepositoryResponsePrivate::UpdateCodeRepositoryResponsePrivate(
    UpdateCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateCodeRepository response element from \a xml.
 */
void UpdateCodeRepositoryResponsePrivate::parseUpdateCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
