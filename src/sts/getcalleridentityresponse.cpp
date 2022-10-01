// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcalleridentityresponse.h"
#include "getcalleridentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetCallerIdentityResponse
 * \brief The GetCallerIdentityResponse class provides an interace for Sts GetCallerIdentity responses.
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
 * \sa StsClient::getCallerIdentity
 */

/*!
 * Constructs a GetCallerIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
GetCallerIdentityResponse::GetCallerIdentityResponse(
        const GetCallerIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetCallerIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCallerIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCallerIdentityRequest * GetCallerIdentityResponse::request() const
{
    Q_D(const GetCallerIdentityResponse);
    return static_cast<const GetCallerIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts GetCallerIdentity \a response.
 */
void GetCallerIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCallerIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::GetCallerIdentityResponsePrivate
 * \brief The GetCallerIdentityResponsePrivate class provides private implementation for GetCallerIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetCallerIdentityResponsePrivate object with public implementation \a q.
 */
GetCallerIdentityResponsePrivate::GetCallerIdentityResponsePrivate(
    GetCallerIdentityResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts GetCallerIdentity response element from \a xml.
 */
void GetCallerIdentityResponsePrivate::parseGetCallerIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCallerIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
