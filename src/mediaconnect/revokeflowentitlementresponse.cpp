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

#include "revokeflowentitlementresponse.h"
#include "revokeflowentitlementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RevokeFlowEntitlementResponse
 * \brief The RevokeFlowEntitlementResponse class provides an interace for MediaConnect RevokeFlowEntitlement responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::revokeFlowEntitlement
 */

/*!
 * Constructs a RevokeFlowEntitlementResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeFlowEntitlementResponse::RevokeFlowEntitlementResponse(
        const RevokeFlowEntitlementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RevokeFlowEntitlementResponsePrivate(this), parent)
{
    setRequest(new RevokeFlowEntitlementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeFlowEntitlementRequest * RevokeFlowEntitlementResponse::request() const
{
    Q_D(const RevokeFlowEntitlementResponse);
    return static_cast<const RevokeFlowEntitlementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect RevokeFlowEntitlement \a response.
 */
void RevokeFlowEntitlementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeFlowEntitlementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RevokeFlowEntitlementResponsePrivate
 * \brief The RevokeFlowEntitlementResponsePrivate class provides private implementation for RevokeFlowEntitlementResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RevokeFlowEntitlementResponsePrivate object with public implementation \a q.
 */
RevokeFlowEntitlementResponsePrivate::RevokeFlowEntitlementResponsePrivate(
    RevokeFlowEntitlementResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RevokeFlowEntitlement response element from \a xml.
 */
void RevokeFlowEntitlementResponsePrivate::parseRevokeFlowEntitlementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeFlowEntitlementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
