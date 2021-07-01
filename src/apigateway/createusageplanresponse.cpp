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

#include "createusageplanresponse.h"
#include "createusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateUsagePlanResponse
 * \brief The CreateUsagePlanResponse class provides an interace for APIGateway CreateUsagePlan responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createUsagePlan
 */

/*!
 * Constructs a CreateUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUsagePlanResponse::CreateUsagePlanResponse(
        const CreateUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateUsagePlanResponsePrivate(this), parent)
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
 * Parses a successful APIGateway CreateUsagePlan \a response.
 */
void CreateUsagePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::CreateUsagePlanResponsePrivate
 * \brief The CreateUsagePlanResponsePrivate class provides private implementation for CreateUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateUsagePlanResponsePrivate object with public implementation \a q.
 */
CreateUsagePlanResponsePrivate::CreateUsagePlanResponsePrivate(
    CreateUsagePlanResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway CreateUsagePlan response element from \a xml.
 */
void CreateUsagePlanResponsePrivate::parseCreateUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
