// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpclinkresponse.h"
#include "createvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateVpcLinkResponse
 * \brief The CreateVpcLinkResponse class provides an interace for ApiGateway CreateVpcLink responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createVpcLink
 */

/*!
 * Constructs a CreateVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcLinkResponse::CreateVpcLinkResponse(
        const CreateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateVpcLinkResponsePrivate(this), parent)
{
    setRequest(new CreateVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcLinkRequest * CreateVpcLinkResponse::request() const
{
    Q_D(const CreateVpcLinkResponse);
    return static_cast<const CreateVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateVpcLink \a response.
 */
void CreateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateVpcLinkResponsePrivate
 * \brief The CreateVpcLinkResponsePrivate class provides private implementation for CreateVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateVpcLinkResponsePrivate object with public implementation \a q.
 */
CreateVpcLinkResponsePrivate::CreateVpcLinkResponsePrivate(
    CreateVpcLinkResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateVpcLink response element from \a xml.
 */
void CreateVpcLinkResponsePrivate::parseCreateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
