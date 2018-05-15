/*
    Copyright 2013-2018 Paul Colby

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

#include "listendpointconfigsresponse.h"
#include "listendpointconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsResponse
 * \brief The ListEndpointConfigsResponse class provides an interace for SageMaker ListEndpointConfigs responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listEndpointConfigs
 */

/*!
 * Constructs a ListEndpointConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointConfigsResponse::ListEndpointConfigsResponse(
        const ListEndpointConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEndpointConfigsResponsePrivate(this), parent)
{
    setRequest(new ListEndpointConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointConfigsRequest * ListEndpointConfigsResponse::request() const
{
    Q_D(const ListEndpointConfigsResponse);
    return static_cast<const ListEndpointConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEndpointConfigs \a response.
 */
void ListEndpointConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsResponsePrivate
 * \brief The ListEndpointConfigsResponsePrivate class provides private implementation for ListEndpointConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointConfigsResponsePrivate object with public implementation \a q.
 */
ListEndpointConfigsResponsePrivate::ListEndpointConfigsResponsePrivate(
    ListEndpointConfigsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEndpointConfigs response element from \a xml.
 */
void ListEndpointConfigsResponsePrivate::parseListEndpointConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointConfigsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
