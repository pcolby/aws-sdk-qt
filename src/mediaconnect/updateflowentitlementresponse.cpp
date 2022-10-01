// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowentitlementresponse.h"
#include "updateflowentitlementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowEntitlementResponse
 * \brief The UpdateFlowEntitlementResponse class provides an interace for MediaConnect UpdateFlowEntitlement responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowEntitlement
 */

/*!
 * Constructs a UpdateFlowEntitlementResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowEntitlementResponse::UpdateFlowEntitlementResponse(
        const UpdateFlowEntitlementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowEntitlementResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowEntitlementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowEntitlementRequest * UpdateFlowEntitlementResponse::request() const
{
    Q_D(const UpdateFlowEntitlementResponse);
    return static_cast<const UpdateFlowEntitlementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowEntitlement \a response.
 */
void UpdateFlowEntitlementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowEntitlementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowEntitlementResponsePrivate
 * \brief The UpdateFlowEntitlementResponsePrivate class provides private implementation for UpdateFlowEntitlementResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowEntitlementResponsePrivate object with public implementation \a q.
 */
UpdateFlowEntitlementResponsePrivate::UpdateFlowEntitlementResponsePrivate(
    UpdateFlowEntitlementResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowEntitlement response element from \a xml.
 */
void UpdateFlowEntitlementResponsePrivate::parseUpdateFlowEntitlementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowEntitlementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
