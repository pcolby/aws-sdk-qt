/*
    Copyright 2013-2019 Paul Colby

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

#include "grantflowentitlementsresponse.h"
#include "grantflowentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::GrantFlowEntitlementsResponse
 * \brief The GrantFlowEntitlementsResponse class provides an interace for MediaConnect GrantFlowEntitlements responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::grantFlowEntitlements
 */

/*!
 * Constructs a GrantFlowEntitlementsResponse object for \a reply to \a request, with parent \a parent.
 */
GrantFlowEntitlementsResponse::GrantFlowEntitlementsResponse(
        const GrantFlowEntitlementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new GrantFlowEntitlementsResponsePrivate(this), parent)
{
    setRequest(new GrantFlowEntitlementsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GrantFlowEntitlementsRequest * GrantFlowEntitlementsResponse::request() const
{
    Q_D(const GrantFlowEntitlementsResponse);
    return static_cast<const GrantFlowEntitlementsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect GrantFlowEntitlements \a response.
 */
void GrantFlowEntitlementsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GrantFlowEntitlementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::GrantFlowEntitlementsResponsePrivate
 * \brief The GrantFlowEntitlementsResponsePrivate class provides private implementation for GrantFlowEntitlementsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a GrantFlowEntitlementsResponsePrivate object with public implementation \a q.
 */
GrantFlowEntitlementsResponsePrivate::GrantFlowEntitlementsResponsePrivate(
    GrantFlowEntitlementsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect GrantFlowEntitlements response element from \a xml.
 */
void GrantFlowEntitlementsResponsePrivate::parseGrantFlowEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GrantFlowEntitlementsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
