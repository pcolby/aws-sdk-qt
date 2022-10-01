// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createorderresponse.h"
#include "createorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateOrderResponse
 * \brief The CreateOrderResponse class provides an interace for Outposts CreateOrder responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createOrder
 */

/*!
 * Constructs a CreateOrderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOrderResponse::CreateOrderResponse(
        const CreateOrderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new CreateOrderResponsePrivate(this), parent)
{
    setRequest(new CreateOrderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOrderRequest * CreateOrderResponse::request() const
{
    Q_D(const CreateOrderResponse);
    return static_cast<const CreateOrderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts CreateOrder \a response.
 */
void CreateOrderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOrderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::CreateOrderResponsePrivate
 * \brief The CreateOrderResponsePrivate class provides private implementation for CreateOrderResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateOrderResponsePrivate object with public implementation \a q.
 */
CreateOrderResponsePrivate::CreateOrderResponsePrivate(
    CreateOrderResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts CreateOrder response element from \a xml.
 */
void CreateOrderResponsePrivate::parseCreateOrderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
