// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesskeyinforesponse.h"
#include "getaccesskeyinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetAccessKeyInfoResponse
 * \brief The GetAccessKeyInfoResponse class provides an interace for Sts GetAccessKeyInfo responses.
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
 * \sa StsClient::getAccessKeyInfo
 */

/*!
 * Constructs a GetAccessKeyInfoResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessKeyInfoResponse::GetAccessKeyInfoResponse(
        const GetAccessKeyInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new GetAccessKeyInfoResponsePrivate(this), parent)
{
    setRequest(new GetAccessKeyInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessKeyInfoRequest * GetAccessKeyInfoResponse::request() const
{
    Q_D(const GetAccessKeyInfoResponse);
    return static_cast<const GetAccessKeyInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts GetAccessKeyInfo \a response.
 */
void GetAccessKeyInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessKeyInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::GetAccessKeyInfoResponsePrivate
 * \brief The GetAccessKeyInfoResponsePrivate class provides private implementation for GetAccessKeyInfoResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetAccessKeyInfoResponsePrivate object with public implementation \a q.
 */
GetAccessKeyInfoResponsePrivate::GetAccessKeyInfoResponsePrivate(
    GetAccessKeyInfoResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts GetAccessKeyInfo response element from \a xml.
 */
void GetAccessKeyInfoResponsePrivate::parseGetAccessKeyInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessKeyInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
