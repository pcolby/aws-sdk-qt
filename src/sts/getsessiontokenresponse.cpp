// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessiontokenresponse.h"
#include "getsessiontokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetSessionTokenResponse
 * \brief The GetSessionTokenResponse class provides an interace for Sts GetSessionToken responses.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::getSessionToken
 */

/*!
 * Constructs a GetSessionTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionTokenResponse::GetSessionTokenResponse(
        const GetSessionTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetSessionTokenResponsePrivate(this), parent)
{
    setRequest(new GetSessionTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionTokenRequest * GetSessionTokenResponse::request() const
{
    Q_D(const GetSessionTokenResponse);
    return static_cast<const GetSessionTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts GetSessionToken \a response.
 */
void GetSessionTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::GetSessionTokenResponsePrivate
 * \brief The GetSessionTokenResponsePrivate class provides private implementation for GetSessionTokenResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetSessionTokenResponsePrivate object with public implementation \a q.
 */
GetSessionTokenResponsePrivate::GetSessionTokenResponsePrivate(
    GetSessionTokenResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts GetSessionToken response element from \a xml.
 */
void GetSessionTokenResponsePrivate::parseGetSessionTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
