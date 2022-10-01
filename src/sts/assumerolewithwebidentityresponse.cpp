// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "assumerolewithwebidentityresponse.h"
#include "assumerolewithwebidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleWithWebIdentityResponse
 * \brief The AssumeRoleWithWebIdentityResponse class provides an interace for Sts AssumeRoleWithWebIdentity responses.
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
 * \sa StsClient::assumeRoleWithWebIdentity
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeRoleWithWebIdentityResponse::AssumeRoleWithWebIdentityResponse(
        const AssumeRoleWithWebIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new AssumeRoleWithWebIdentityResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleWithWebIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeRoleWithWebIdentityRequest * AssumeRoleWithWebIdentityResponse::request() const
{
    Q_D(const AssumeRoleWithWebIdentityResponse);
    return static_cast<const AssumeRoleWithWebIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts AssumeRoleWithWebIdentity \a response.
 */
void AssumeRoleWithWebIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeRoleWithWebIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::AssumeRoleWithWebIdentityResponsePrivate
 * \brief The AssumeRoleWithWebIdentityResponsePrivate class provides private implementation for AssumeRoleWithWebIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityResponsePrivate object with public implementation \a q.
 */
AssumeRoleWithWebIdentityResponsePrivate::AssumeRoleWithWebIdentityResponsePrivate(
    AssumeRoleWithWebIdentityResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts AssumeRoleWithWebIdentity response element from \a xml.
 */
void AssumeRoleWithWebIdentityResponsePrivate::parseAssumeRoleWithWebIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleWithWebIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
