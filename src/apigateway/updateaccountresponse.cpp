/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateaccountresponse.h"
#include "updateaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateAccountResponse
 * \brief The UpdateAccountResponse class provides an interace for APIGateway UpdateAccount responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateAccount
 */

/*!
 * Constructs a UpdateAccountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountResponse::UpdateAccountResponse(
        const UpdateAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateAccountResponsePrivate(this), parent)
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
 * Parses a successful APIGateway UpdateAccount \a response.
 */
void UpdateAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateAccountResponsePrivate
 * \brief The UpdateAccountResponsePrivate class provides private implementation for UpdateAccountResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateAccountResponsePrivate object with public implementation \a q.
 */
UpdateAccountResponsePrivate::UpdateAccountResponsePrivate(
    UpdateAccountResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateAccount response element from \a xml.
 */
void UpdateAccountResponsePrivate::parseUpdateAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
