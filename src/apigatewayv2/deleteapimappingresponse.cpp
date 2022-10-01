// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapimappingresponse.h"
#include "deleteapimappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingResponse
 * \brief The DeleteApiMappingResponse class provides an interace for ApiGatewayV2 DeleteApiMapping responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApiMapping
 */

/*!
 * Constructs a DeleteApiMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiMappingResponse::DeleteApiMappingResponse(
        const DeleteApiMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteApiMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteApiMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiMappingRequest * DeleteApiMappingResponse::request() const
{
    Q_D(const DeleteApiMappingResponse);
    return static_cast<const DeleteApiMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteApiMapping \a response.
 */
void DeleteApiMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiMappingResponsePrivate
 * \brief The DeleteApiMappingResponsePrivate class provides private implementation for DeleteApiMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiMappingResponsePrivate object with public implementation \a q.
 */
DeleteApiMappingResponsePrivate::DeleteApiMappingResponsePrivate(
    DeleteApiMappingResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteApiMapping response element from \a xml.
 */
void DeleteApiMappingResponsePrivate::parseDeleteApiMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
