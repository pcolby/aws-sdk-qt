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

#include "decodeauthorizationmessageresponse.h"
#include "decodeauthorizationmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::DecodeAuthorizationMessageResponse
 * \brief The DecodeAuthorizationMessageResponse class provides an interace for STS DecodeAuthorizationMessage responses.
 *
 * \inmodule QtAwsSTS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  AWS Security Token Service (STS) enables you to request temporary, limited-privilege credentials for AWS Identity and
 *  Access Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of
 *  the STS API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::decodeAuthorizationMessage
 */

/*!
 * Constructs a DecodeAuthorizationMessageResponse object for \a reply to \a request, with parent \a parent.
 */
DecodeAuthorizationMessageResponse::DecodeAuthorizationMessageResponse(
        const DecodeAuthorizationMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new DecodeAuthorizationMessageResponsePrivate(this), parent)
{
    setRequest(new DecodeAuthorizationMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecodeAuthorizationMessageRequest * DecodeAuthorizationMessageResponse::request() const
{
    return static_cast<const DecodeAuthorizationMessageRequest *>(StsResponse::request());
}

/*!
 * \reimp
 * Parses a successful STS DecodeAuthorizationMessage \a response.
 */
void DecodeAuthorizationMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecodeAuthorizationMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::STS::DecodeAuthorizationMessageResponsePrivate
 * \brief The DecodeAuthorizationMessageResponsePrivate class provides private implementation for DecodeAuthorizationMessageResponse.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a DecodeAuthorizationMessageResponsePrivate object with public implementation \a q.
 */
DecodeAuthorizationMessageResponsePrivate::DecodeAuthorizationMessageResponsePrivate(
    DecodeAuthorizationMessageResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a STS DecodeAuthorizationMessage response element from \a xml.
 */
void DecodeAuthorizationMessageResponsePrivate::parseDecodeAuthorizationMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecodeAuthorizationMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace STS
} // namespace QtAws
