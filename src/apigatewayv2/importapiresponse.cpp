// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importapiresponse.h"
#include "importapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ImportApiResponse
 * \brief The ImportApiResponse class provides an interace for ApiGatewayV2 ImportApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::importApi
 */

/*!
 * Constructs a ImportApiResponse object for \a reply to \a request, with parent \a parent.
 */
ImportApiResponse::ImportApiResponse(
        const ImportApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ImportApiResponsePrivate(this), parent)
{
    setRequest(new ImportApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportApiRequest * ImportApiResponse::request() const
{
    Q_D(const ImportApiResponse);
    return static_cast<const ImportApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ImportApi \a response.
 */
void ImportApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ImportApiResponsePrivate
 * \brief The ImportApiResponsePrivate class provides private implementation for ImportApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ImportApiResponsePrivate object with public implementation \a q.
 */
ImportApiResponsePrivate::ImportApiResponsePrivate(
    ImportApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ImportApi response element from \a xml.
 */
void ImportApiResponsePrivate::parseImportApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
