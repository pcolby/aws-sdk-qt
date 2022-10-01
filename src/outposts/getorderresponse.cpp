// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorderresponse.h"
#include "getorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOrderResponse
 * \brief The GetOrderResponse class provides an interace for Outposts GetOrder responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getOrder
 */

/*!
 * Constructs a GetOrderResponse object for \a reply to \a request, with parent \a parent.
 */
GetOrderResponse::GetOrderResponse(
        const GetOrderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetOrderResponsePrivate(this), parent)
{
    setRequest(new GetOrderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOrderRequest * GetOrderResponse::request() const
{
    Q_D(const GetOrderResponse);
    return static_cast<const GetOrderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts GetOrder \a response.
 */
void GetOrderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOrderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetOrderResponsePrivate
 * \brief The GetOrderResponsePrivate class provides private implementation for GetOrderResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOrderResponsePrivate object with public implementation \a q.
 */
GetOrderResponsePrivate::GetOrderResponsePrivate(
    GetOrderResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetOrder response element from \a xml.
 */
void GetOrderResponsePrivate::parseGetOrderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOrderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
