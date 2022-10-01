// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
