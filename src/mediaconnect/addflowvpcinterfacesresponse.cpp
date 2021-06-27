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

#include "addflowvpcinterfacesresponse.h"
#include "addflowvpcinterfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowVpcInterfacesResponse
 * \brief The AddFlowVpcInterfacesResponse class provides an interace for MediaConnect AddFlowVpcInterfaces responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowVpcInterfaces
 */

/*!
 * Constructs a AddFlowVpcInterfacesResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowVpcInterfacesResponse::AddFlowVpcInterfacesResponse(
        const AddFlowVpcInterfacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowVpcInterfacesResponsePrivate(this), parent)
{
    setRequest(new AddFlowVpcInterfacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowVpcInterfacesRequest * AddFlowVpcInterfacesResponse::request() const
{
    return static_cast<const AddFlowVpcInterfacesRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowVpcInterfaces \a response.
 */
void AddFlowVpcInterfacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowVpcInterfacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowVpcInterfacesResponsePrivate
 * \brief The AddFlowVpcInterfacesResponsePrivate class provides private implementation for AddFlowVpcInterfacesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowVpcInterfacesResponsePrivate object with public implementation \a q.
 */
AddFlowVpcInterfacesResponsePrivate::AddFlowVpcInterfacesResponsePrivate(
    AddFlowVpcInterfacesResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowVpcInterfaces response element from \a xml.
 */
void AddFlowVpcInterfacesResponsePrivate::parseAddFlowVpcInterfacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowVpcInterfacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
