// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteauthorizerresponse.h"
#include "deleteauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerResponse
 * \brief The DeleteAuthorizerResponse class provides an interace for ApiGatewayV2 DeleteAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAuthorizer
 */

/*!
 * Constructs a DeleteAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAuthorizerResponse::DeleteAuthorizerResponse(
        const DeleteAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DeleteAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAuthorizerRequest * DeleteAuthorizerResponse::request() const
{
    Q_D(const DeleteAuthorizerResponse);
    return static_cast<const DeleteAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteAuthorizer \a response.
 */
void DeleteAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAuthorizerResponsePrivate
 * \brief The DeleteAuthorizerResponsePrivate class provides private implementation for DeleteAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAuthorizerResponsePrivate object with public implementation \a q.
 */
DeleteAuthorizerResponsePrivate::DeleteAuthorizerResponsePrivate(
    DeleteAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteAuthorizer response element from \a xml.
 */
void DeleteAuthorizerResponsePrivate::parseDeleteAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
