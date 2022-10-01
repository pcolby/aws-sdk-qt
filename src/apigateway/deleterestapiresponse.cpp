// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterestapiresponse.h"
#include "deleterestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteRestApiResponse
 * \brief The DeleteRestApiResponse class provides an interace for ApiGateway DeleteRestApi responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteRestApi
 */

/*!
 * Constructs a DeleteRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRestApiResponse::DeleteRestApiResponse(
        const DeleteRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteRestApiResponsePrivate(this), parent)
{
    setRequest(new DeleteRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRestApiRequest * DeleteRestApiResponse::request() const
{
    Q_D(const DeleteRestApiResponse);
    return static_cast<const DeleteRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteRestApi \a response.
 */
void DeleteRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteRestApiResponsePrivate
 * \brief The DeleteRestApiResponsePrivate class provides private implementation for DeleteRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteRestApiResponsePrivate object with public implementation \a q.
 */
DeleteRestApiResponsePrivate::DeleteRestApiResponsePrivate(
    DeleteRestApiResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteRestApi response element from \a xml.
 */
void DeleteRestApiResponsePrivate::parseDeleteRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
