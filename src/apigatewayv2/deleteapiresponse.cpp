// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapiresponse.h"
#include "deleteapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiResponse
 * \brief The DeleteApiResponse class provides an interace for ApiGatewayV2 DeleteApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteApi
 */

/*!
 * Constructs a DeleteApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiResponse::DeleteApiResponse(
        const DeleteApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteApiResponsePrivate(this), parent)
{
    setRequest(new DeleteApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiRequest * DeleteApiResponse::request() const
{
    Q_D(const DeleteApiResponse);
    return static_cast<const DeleteApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteApi \a response.
 */
void DeleteApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteApiResponsePrivate
 * \brief The DeleteApiResponsePrivate class provides private implementation for DeleteApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteApiResponsePrivate object with public implementation \a q.
 */
DeleteApiResponsePrivate::DeleteApiResponsePrivate(
    DeleteApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteApi response element from \a xml.
 */
void DeleteApiResponsePrivate::parseDeleteApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
