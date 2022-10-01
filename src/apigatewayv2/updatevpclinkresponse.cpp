// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpclinkresponse.h"
#include "updatevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateVpcLinkResponse
 * \brief The UpdateVpcLinkResponse class provides an interace for ApiGatewayV2 UpdateVpcLink responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateVpcLink
 */

/*!
 * Constructs a UpdateVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVpcLinkResponse::UpdateVpcLinkResponse(
        const UpdateVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateVpcLinkResponsePrivate(this), parent)
{
    setRequest(new UpdateVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVpcLinkRequest * UpdateVpcLinkResponse::request() const
{
    Q_D(const UpdateVpcLinkResponse);
    return static_cast<const UpdateVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateVpcLink \a response.
 */
void UpdateVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateVpcLinkResponsePrivate
 * \brief The UpdateVpcLinkResponsePrivate class provides private implementation for UpdateVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateVpcLinkResponsePrivate object with public implementation \a q.
 */
UpdateVpcLinkResponsePrivate::UpdateVpcLinkResponsePrivate(
    UpdateVpcLinkResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateVpcLink response element from \a xml.
 */
void UpdateVpcLinkResponsePrivate::parseUpdateVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
