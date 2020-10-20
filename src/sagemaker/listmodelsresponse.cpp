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

#include "listmodelsresponse.h"
#include "listmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelsResponse
 * \brief The ListModelsResponse class provides an interace for SageMaker ListModels responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listModels
 */

/*!
 * Constructs a ListModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelsResponse::ListModelsResponse(
        const ListModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelsResponsePrivate(this), parent)
{
    setRequest(new ListModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelsRequest * ListModelsResponse::request() const
{
    Q_D(const ListModelsResponse);
    return static_cast<const ListModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModels \a response.
 */
void ListModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelsResponsePrivate
 * \brief The ListModelsResponsePrivate class provides private implementation for ListModelsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelsResponsePrivate object with public implementation \a q.
 */
ListModelsResponsePrivate::ListModelsResponsePrivate(
    ListModelsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModels response element from \a xml.
 */
void ListModelsResponsePrivate::parseListModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
