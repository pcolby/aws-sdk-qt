// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const AddFlowVpcInterfacesResponse);
    return static_cast<const AddFlowVpcInterfacesRequest *>(d->request);
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
