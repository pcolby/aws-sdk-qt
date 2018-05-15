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

#include "deleterealtimeendpointresponse.h"
#include "deleterealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointResponse
 * \brief The DeleteRealtimeEndpointResponse class provides an interace for MachineLearning DeleteRealtimeEndpoint responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteRealtimeEndpoint
 */

/*!
 * Constructs a DeleteRealtimeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRealtimeEndpointResponse::DeleteRealtimeEndpointResponse(
        const DeleteRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteRealtimeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRealtimeEndpointRequest * DeleteRealtimeEndpointResponse::request() const
{
    Q_D(const DeleteRealtimeEndpointResponse);
    return static_cast<const DeleteRealtimeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteRealtimeEndpoint \a response.
 */
void DeleteRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRealtimeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointResponsePrivate
 * \brief The DeleteRealtimeEndpointResponsePrivate class provides private implementation for DeleteRealtimeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteRealtimeEndpointResponsePrivate object with public implementation \a q.
 */
DeleteRealtimeEndpointResponsePrivate::DeleteRealtimeEndpointResponsePrivate(
    DeleteRealtimeEndpointResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteRealtimeEndpoint response element from \a xml.
 */
void DeleteRealtimeEndpointResponsePrivate::parseDeleteRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRealtimeEndpointResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
