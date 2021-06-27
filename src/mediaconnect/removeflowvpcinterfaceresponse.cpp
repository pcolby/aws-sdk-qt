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

#include "removeflowvpcinterfaceresponse.h"
#include "removeflowvpcinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowVpcInterfaceResponse
 * \brief The RemoveFlowVpcInterfaceResponse class provides an interace for MediaConnect RemoveFlowVpcInterface responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowVpcInterface
 */

/*!
 * Constructs a RemoveFlowVpcInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowVpcInterfaceResponse::RemoveFlowVpcInterfaceResponse(
        const RemoveFlowVpcInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowVpcInterfaceResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowVpcInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowVpcInterfaceRequest * RemoveFlowVpcInterfaceResponse::request() const
{
    return static_cast<const RemoveFlowVpcInterfaceRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowVpcInterface \a response.
 */
void RemoveFlowVpcInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowVpcInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowVpcInterfaceResponsePrivate
 * \brief The RemoveFlowVpcInterfaceResponsePrivate class provides private implementation for RemoveFlowVpcInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowVpcInterfaceResponsePrivate object with public implementation \a q.
 */
RemoveFlowVpcInterfaceResponsePrivate::RemoveFlowVpcInterfaceResponsePrivate(
    RemoveFlowVpcInterfaceResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowVpcInterface response element from \a xml.
 */
void RemoveFlowVpcInterfaceResponsePrivate::parseRemoveFlowVpcInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowVpcInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
