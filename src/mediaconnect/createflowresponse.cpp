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

#include "createflowresponse.h"
#include "createflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::CreateFlowResponse
 * \brief The CreateFlowResponse class provides an interace for MediaConnect CreateFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::createFlow
 */

/*!
 * Constructs a CreateFlowResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFlowResponse::CreateFlowResponse(
        const CreateFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new CreateFlowResponsePrivate(this), parent)
{
    setRequest(new CreateFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFlowRequest * CreateFlowResponse::request() const
{
    Q_D(const CreateFlowResponse);
    return static_cast<const CreateFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect CreateFlow \a response.
 */
void CreateFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::CreateFlowResponsePrivate
 * \brief The CreateFlowResponsePrivate class provides private implementation for CreateFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a CreateFlowResponsePrivate object with public implementation \a q.
 */
CreateFlowResponsePrivate::CreateFlowResponsePrivate(
    CreateFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect CreateFlow response element from \a xml.
 */
void CreateFlowResponsePrivate::parseCreateFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
