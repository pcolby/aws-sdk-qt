// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainnameresponse.h"
#include "createdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDomainNameResponse
 * \brief The CreateDomainNameResponse class provides an interace for ApiGateway CreateDomainName responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDomainName
 */

/*!
 * Constructs a CreateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(
        const CreateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateDomainNameResponsePrivate(this), parent)
{
    setRequest(new CreateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainNameRequest * CreateDomainNameResponse::request() const
{
    Q_D(const CreateDomainNameResponse);
    return static_cast<const CreateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateDomainName \a response.
 */
void CreateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateDomainNameResponsePrivate
 * \brief The CreateDomainNameResponsePrivate class provides private implementation for CreateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDomainNameResponsePrivate object with public implementation \a q.
 */
CreateDomainNameResponsePrivate::CreateDomainNameResponsePrivate(
    CreateDomainNameResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateDomainName response element from \a xml.
 */
void CreateDomainNameResponsePrivate::parseCreateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
