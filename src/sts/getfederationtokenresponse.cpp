// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfederationtokenresponse.h"
#include "getfederationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetFederationTokenResponse
 * \brief The GetFederationTokenResponse class provides an interace for Sts GetFederationToken responses.
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
 * \sa StsClient::getFederationToken
 */

/*!
 * Constructs a GetFederationTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetFederationTokenResponse::GetFederationTokenResponse(
        const GetFederationTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetFederationTokenResponsePrivate(this), parent)
{
    setRequest(new GetFederationTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFederationTokenRequest * GetFederationTokenResponse::request() const
{
    Q_D(const GetFederationTokenResponse);
    return static_cast<const GetFederationTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts GetFederationToken \a response.
 */
void GetFederationTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFederationTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::GetFederationTokenResponsePrivate
 * \brief The GetFederationTokenResponsePrivate class provides private implementation for GetFederationTokenResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetFederationTokenResponsePrivate object with public implementation \a q.
 */
GetFederationTokenResponsePrivate::GetFederationTokenResponsePrivate(
    GetFederationTokenResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts GetFederationToken response element from \a xml.
 */
void GetFederationTokenResponsePrivate::parseGetFederationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFederationTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
