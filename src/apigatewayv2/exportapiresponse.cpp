// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportapiresponse.h"
#include "exportapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ExportApiResponse
 * \brief The ExportApiResponse class provides an interace for ApiGatewayV2 ExportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::exportApi
 */

/*!
 * Constructs a ExportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ExportApiResponse::ExportApiResponse(
        const ExportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ExportApiResponsePrivate(this), parent)
{
    setRequest(new ExportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportApiRequest * ExportApiResponse::request() const
{
    Q_D(const ExportApiResponse);
    return static_cast<const ExportApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ExportApi \a response.
 */
void ExportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ExportApiResponsePrivate
 * \brief The ExportApiResponsePrivate class provides private implementation for ExportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ExportApiResponsePrivate object with public implementation \a q.
 */
ExportApiResponsePrivate::ExportApiResponsePrivate(
    ExportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ExportApi response element from \a xml.
 */
void ExportApiResponsePrivate::parseExportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
