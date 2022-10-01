// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagsresponse.h"
#include "gettagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetTagsResponse
 * \brief The GetTagsResponse class provides an interace for ApiGateway GetTags responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getTags
 */

/*!
 * Constructs a GetTagsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagsResponse::GetTagsResponse(
        const GetTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetTagsResponsePrivate(this), parent)
{
    setRequest(new GetTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagsRequest * GetTagsResponse::request() const
{
    Q_D(const GetTagsResponse);
    return static_cast<const GetTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetTags \a response.
 */
void GetTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetTagsResponsePrivate
 * \brief The GetTagsResponsePrivate class provides private implementation for GetTagsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetTagsResponsePrivate object with public implementation \a q.
 */
GetTagsResponsePrivate::GetTagsResponsePrivate(
    GetTagsResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetTags response element from \a xml.
 */
void GetTagsResponsePrivate::parseGetTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
