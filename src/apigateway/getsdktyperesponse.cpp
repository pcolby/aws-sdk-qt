// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsdktyperesponse.h"
#include "getsdktyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkTypeResponse
 * \brief The GetSdkTypeResponse class provides an interace for ApiGateway GetSdkType responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdkType
 */

/*!
 * Constructs a GetSdkTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetSdkTypeResponse::GetSdkTypeResponse(
        const GetSdkTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetSdkTypeResponsePrivate(this), parent)
{
    setRequest(new GetSdkTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSdkTypeRequest * GetSdkTypeResponse::request() const
{
    Q_D(const GetSdkTypeResponse);
    return static_cast<const GetSdkTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetSdkType \a response.
 */
void GetSdkTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSdkTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetSdkTypeResponsePrivate
 * \brief The GetSdkTypeResponsePrivate class provides private implementation for GetSdkTypeResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkTypeResponsePrivate object with public implementation \a q.
 */
GetSdkTypeResponsePrivate::GetSdkTypeResponsePrivate(
    GetSdkTypeResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetSdkType response element from \a xml.
 */
void GetSdkTypeResponsePrivate::parseGetSdkTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
