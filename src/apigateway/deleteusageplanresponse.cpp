// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusageplanresponse.h"
#include "deleteusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanResponse
 * \brief The DeleteUsagePlanResponse class provides an interace for ApiGateway DeleteUsagePlan responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteUsagePlan
 */

/*!
 * Constructs a DeleteUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUsagePlanResponse::DeleteUsagePlanResponse(
        const DeleteUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteUsagePlanResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUsagePlanRequest * DeleteUsagePlanResponse::request() const
{
    Q_D(const DeleteUsagePlanResponse);
    return static_cast<const DeleteUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteUsagePlan \a response.
 */
void DeleteUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanResponsePrivate
 * \brief The DeleteUsagePlanResponsePrivate class provides private implementation for DeleteUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteUsagePlanResponsePrivate object with public implementation \a q.
 */
DeleteUsagePlanResponsePrivate::DeleteUsagePlanResponsePrivate(
    DeleteUsagePlanResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteUsagePlan response element from \a xml.
 */
void DeleteUsagePlanResponsePrivate::parseDeleteUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
