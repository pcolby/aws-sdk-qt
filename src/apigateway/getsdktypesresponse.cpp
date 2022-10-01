// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsdktypesresponse.h"
#include "getsdktypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkTypesResponse
 * \brief The GetSdkTypesResponse class provides an interace for ApiGateway GetSdkTypes responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdkTypes
 */

/*!
 * Constructs a GetSdkTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSdkTypesResponse::GetSdkTypesResponse(
        const GetSdkTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetSdkTypesResponsePrivate(this), parent)
{
    setRequest(new GetSdkTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSdkTypesRequest * GetSdkTypesResponse::request() const
{
    Q_D(const GetSdkTypesResponse);
    return static_cast<const GetSdkTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetSdkTypes \a response.
 */
void GetSdkTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSdkTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetSdkTypesResponsePrivate
 * \brief The GetSdkTypesResponsePrivate class provides private implementation for GetSdkTypesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkTypesResponsePrivate object with public implementation \a q.
 */
GetSdkTypesResponsePrivate::GetSdkTypesResponsePrivate(
    GetSdkTypesResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetSdkTypes response element from \a xml.
 */
void GetSdkTypesResponsePrivate::parseGetSdkTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
