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

#include "listendpointsresponse.h"
#include "listendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointsResponse
 * \brief The ListEndpointsResponse class provides an interace for SageMaker ListEndpoints responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listEndpoints
 */

/*!
 * Constructs a ListEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointsResponse::ListEndpointsResponse(
        const ListEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointsRequest * ListEndpointsResponse::request() const
{
    Q_D(const ListEndpointsResponse);
    return static_cast<const ListEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEndpoints \a response.
 */
void ListEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEndpointsResponsePrivate
 * \brief The ListEndpointsResponsePrivate class provides private implementation for ListEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointsResponsePrivate object with public implementation \a q.
 */
ListEndpointsResponsePrivate::ListEndpointsResponsePrivate(
    ListEndpointsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEndpoints response element from \a xml.
 */
void ListEndpointsResponsePrivate::parseListEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
