// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
