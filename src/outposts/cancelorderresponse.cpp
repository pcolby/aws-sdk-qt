// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelorderresponse.h"
#include "cancelorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CancelOrderResponse
 * \brief The CancelOrderResponse class provides an interace for Outposts CancelOrder responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::cancelOrder
 */

/*!
 * Constructs a CancelOrderResponse object for \a reply to \a request, with parent \a parent.
 */
CancelOrderResponse::CancelOrderResponse(
        const CancelOrderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new CancelOrderResponsePrivate(this), parent)
{
    setRequest(new CancelOrderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelOrderRequest * CancelOrderResponse::request() const
{
    Q_D(const CancelOrderResponse);
    return static_cast<const CancelOrderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts CancelOrder \a response.
 */
void CancelOrderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelOrderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::CancelOrderResponsePrivate
 * \brief The CancelOrderResponsePrivate class provides private implementation for CancelOrderResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CancelOrderResponsePrivate object with public implementation \a q.
 */
CancelOrderResponsePrivate::CancelOrderResponsePrivate(
    CancelOrderResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts CancelOrder response element from \a xml.
 */
void CancelOrderResponsePrivate::parseCancelOrderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelOrderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
