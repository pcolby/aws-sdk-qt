// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const RemoveFlowVpcInterfaceResponse);
    return static_cast<const RemoveFlowVpcInterfaceRequest *>(d->request);
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
