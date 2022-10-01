// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemethodresponse.h"
#include "deletemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponse
 * \brief The DeleteMethodResponse class provides an interace for ApiGateway DeleteMethod responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteMethod
 */

/*!
 * Constructs a DeleteMethodResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMethodResponse::DeleteMethodResponse(
        const DeleteMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteMethodResponsePrivate(this), parent)
{
    setRequest(new DeleteMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMethodRequest * DeleteMethodResponse::request() const
{
    Q_D(const DeleteMethodResponse);
    return static_cast<const DeleteMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteMethod \a response.
 */
void DeleteMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponsePrivate
 * \brief The DeleteMethodResponsePrivate class provides private implementation for DeleteMethodResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteMethodResponsePrivate object with public implementation \a q.
 */
DeleteMethodResponsePrivate::DeleteMethodResponsePrivate(
    DeleteMethodResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteMethod response element from \a xml.
 */
void DeleteMethodResponsePrivate::parseDeleteMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
