// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportresponse.h"
#include "getexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetExportResponse
 * \brief The GetExportResponse class provides an interace for ApiGateway GetExport responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getExport
 */

/*!
 * Constructs a GetExportResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportResponse::GetExportResponse(
        const GetExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetExportResponsePrivate(this), parent)
{
    setRequest(new GetExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportRequest * GetExportResponse::request() const
{
    Q_D(const GetExportResponse);
    return static_cast<const GetExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetExport \a response.
 */
void GetExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetExportResponsePrivate
 * \brief The GetExportResponsePrivate class provides private implementation for GetExportResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetExportResponsePrivate object with public implementation \a q.
 */
GetExportResponsePrivate::GetExportResponsePrivate(
    GetExportResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetExport response element from \a xml.
 */
void GetExportResponsePrivate::parseGetExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
