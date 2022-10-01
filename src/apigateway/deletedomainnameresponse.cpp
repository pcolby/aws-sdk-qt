// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainnameresponse.h"
#include "deletedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDomainNameResponse
 * \brief The DeleteDomainNameResponse class provides an interace for ApiGateway DeleteDomainName responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDomainName
 */

/*!
 * Constructs a DeleteDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainNameResponse::DeleteDomainNameResponse(
        const DeleteDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteDomainNameResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainNameRequest * DeleteDomainNameResponse::request() const
{
    Q_D(const DeleteDomainNameResponse);
    return static_cast<const DeleteDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteDomainName \a response.
 */
void DeleteDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteDomainNameResponsePrivate
 * \brief The DeleteDomainNameResponsePrivate class provides private implementation for DeleteDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDomainNameResponsePrivate object with public implementation \a q.
 */
DeleteDomainNameResponsePrivate::DeleteDomainNameResponsePrivate(
    DeleteDomainNameResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteDomainName response element from \a xml.
 */
void DeleteDomainNameResponsePrivate::parseDeleteDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
