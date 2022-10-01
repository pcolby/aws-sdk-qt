// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpclinkresponse.h"
#include "createvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateVpcLinkResponse
 * \brief The CreateVpcLinkResponse class provides an interace for ApiGatewayV2 CreateVpcLink responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createVpcLink
 */

/*!
 * Constructs a CreateVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcLinkResponse::CreateVpcLinkResponse(
        const CreateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateVpcLinkResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 CreateVpcLink \a response.
 */
void CreateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateVpcLinkResponsePrivate
 * \brief The CreateVpcLinkResponsePrivate class provides private implementation for CreateVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateVpcLinkResponsePrivate object with public implementation \a q.
 */
CreateVpcLinkResponsePrivate::CreateVpcLinkResponsePrivate(
    CreateVpcLinkResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateVpcLink response element from \a xml.
 */
void CreateVpcLinkResponsePrivate::parseCreateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
