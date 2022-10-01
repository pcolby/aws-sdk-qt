// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettruststorecertificateresponse.h"
#include "gettruststorecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreCertificateResponse
 * \brief The GetTrustStoreCertificateResponse class provides an interace for WorkSpacesWeb GetTrustStoreCertificate responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getTrustStoreCertificate
 */

/*!
 * Constructs a GetTrustStoreCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetTrustStoreCertificateResponse::GetTrustStoreCertificateResponse(
        const GetTrustStoreCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new GetTrustStoreCertificateResponsePrivate(this), parent)
{
    setRequest(new GetTrustStoreCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTrustStoreCertificateRequest * GetTrustStoreCertificateResponse::request() const
{
    Q_D(const GetTrustStoreCertificateResponse);
    return static_cast<const GetTrustStoreCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb GetTrustStoreCertificate \a response.
 */
void GetTrustStoreCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTrustStoreCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::GetTrustStoreCertificateResponsePrivate
 * \brief The GetTrustStoreCertificateResponsePrivate class provides private implementation for GetTrustStoreCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetTrustStoreCertificateResponsePrivate object with public implementation \a q.
 */
GetTrustStoreCertificateResponsePrivate::GetTrustStoreCertificateResponsePrivate(
    GetTrustStoreCertificateResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb GetTrustStoreCertificate response element from \a xml.
 */
void GetTrustStoreCertificateResponsePrivate::parseGetTrustStoreCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrustStoreCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
