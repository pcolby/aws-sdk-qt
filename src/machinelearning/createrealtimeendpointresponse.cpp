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

#include "createrealtimeendpointresponse.h"
#include "createrealtimeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointResponse
 * \brief The CreateRealtimeEndpointResponse class provides an interace for MachineLearning CreateRealtimeEndpoint responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createRealtimeEndpoint
 */

/*!
 * Constructs a CreateRealtimeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRealtimeEndpointResponse::CreateRealtimeEndpointResponse(
        const CreateRealtimeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateRealtimeEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateRealtimeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRealtimeEndpointRequest * CreateRealtimeEndpointResponse::request() const
{
    Q_D(const CreateRealtimeEndpointResponse);
    return static_cast<const CreateRealtimeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateRealtimeEndpoint \a response.
 */
void CreateRealtimeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRealtimeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointResponsePrivate
 * \brief The CreateRealtimeEndpointResponsePrivate class provides private implementation for CreateRealtimeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateRealtimeEndpointResponsePrivate object with public implementation \a q.
 */
CreateRealtimeEndpointResponsePrivate::CreateRealtimeEndpointResponsePrivate(
    CreateRealtimeEndpointResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateRealtimeEndpoint response element from \a xml.
 */
void CreateRealtimeEndpointResponsePrivate::parseCreateRealtimeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRealtimeEndpointResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
