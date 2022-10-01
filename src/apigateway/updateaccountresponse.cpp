// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountresponse.h"
#include "updateaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateAccountResponse
 * \brief The UpdateAccountResponse class provides an interace for ApiGateway UpdateAccount responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateAccount
 */

/*!
 * Constructs a UpdateAccountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountResponse::UpdateAccountResponse(
        const UpdateAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateAccountResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccountRequest * UpdateAccountResponse::request() const
{
    Q_D(const UpdateAccountResponse);
    return static_cast<const UpdateAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateAccount \a response.
 */
void UpdateAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateAccountResponsePrivate
 * \brief The UpdateAccountResponsePrivate class provides private implementation for UpdateAccountResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateAccountResponsePrivate object with public implementation \a q.
 */
UpdateAccountResponsePrivate::UpdateAccountResponsePrivate(
    UpdateAccountResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateAccount response element from \a xml.
 */
void UpdateAccountResponsePrivate::parseUpdateAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
