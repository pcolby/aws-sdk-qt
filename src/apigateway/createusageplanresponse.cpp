// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusageplanresponse.h"
#include "createusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanResponse
 * \brief The CreateUsagePlanResponse class provides an interace for ApiGateway CreateUsagePlan responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createUsagePlan
 */

/*!
 * Constructs a CreateUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUsagePlanResponse::CreateUsagePlanResponse(
        const CreateUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateUsagePlanResponsePrivate(this), parent)
{
    setRequest(new CreateUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUsagePlanRequest * CreateUsagePlanResponse::request() const
{
    Q_D(const CreateUsagePlanResponse);
    return static_cast<const CreateUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateUsagePlan \a response.
 */
void CreateUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanResponsePrivate
 * \brief The CreateUsagePlanResponsePrivate class provides private implementation for CreateUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateUsagePlanResponsePrivate object with public implementation \a q.
 */
CreateUsagePlanResponsePrivate::CreateUsagePlanResponsePrivate(
    CreateUsagePlanResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateUsagePlan response element from \a xml.
 */
void CreateUsagePlanResponsePrivate::parseCreateUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
