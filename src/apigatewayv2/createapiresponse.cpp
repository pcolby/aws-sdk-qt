// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapiresponse.h"
#include "createapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateApiResponse
 * \brief The CreateApiResponse class provides an interace for ApiGatewayV2 CreateApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createApi
 */

/*!
 * Constructs a CreateApiResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiResponse::CreateApiResponse(
        const CreateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateApiResponsePrivate(this), parent)
{
    setRequest(new CreateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiRequest * CreateApiResponse::request() const
{
    Q_D(const CreateApiResponse);
    return static_cast<const CreateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateApi \a response.
 */
void CreateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateApiResponsePrivate
 * \brief The CreateApiResponsePrivate class provides private implementation for CreateApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateApiResponsePrivate object with public implementation \a q.
 */
CreateApiResponsePrivate::CreateApiResponsePrivate(
    CreateApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateApi response element from \a xml.
 */
void CreateApiResponsePrivate::parseCreateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
