// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainnameresponse.h"
#include "createdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateDomainNameResponse
 * \brief The CreateDomainNameResponse class provides an interace for ApiGatewayV2 CreateDomainName responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createDomainName
 */

/*!
 * Constructs a CreateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(
        const CreateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateDomainNameResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 CreateDomainName \a response.
 */
void CreateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateDomainNameResponsePrivate
 * \brief The CreateDomainNameResponsePrivate class provides private implementation for CreateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateDomainNameResponsePrivate object with public implementation \a q.
 */
CreateDomainNameResponsePrivate::CreateDomainNameResponsePrivate(
    CreateDomainNameResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateDomainName response element from \a xml.
 */
void CreateDomainNameResponsePrivate::parseCreateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
