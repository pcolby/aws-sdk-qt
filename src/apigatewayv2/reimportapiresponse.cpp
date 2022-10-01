// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reimportapiresponse.h"
#include "reimportapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiResponse
 * \brief The ReimportApiResponse class provides an interace for ApiGatewayV2 ReimportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::reimportApi
 */

/*!
 * Constructs a ReimportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ReimportApiResponse::ReimportApiResponse(
        const ReimportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ReimportApiResponsePrivate(this), parent)
{
    setRequest(new ReimportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReimportApiRequest * ReimportApiResponse::request() const
{
    Q_D(const ReimportApiResponse);
    return static_cast<const ReimportApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ReimportApi \a response.
 */
void ReimportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReimportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ReimportApiResponsePrivate
 * \brief The ReimportApiResponsePrivate class provides private implementation for ReimportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ReimportApiResponsePrivate object with public implementation \a q.
 */
ReimportApiResponsePrivate::ReimportApiResponsePrivate(
    ReimportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ReimportApi response element from \a xml.
 */
void ReimportApiResponsePrivate::parseReimportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReimportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
