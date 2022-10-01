// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtruststorecertificatesresponse.h"
#include "listtruststorecertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoreCertificatesResponse
 * \brief The ListTrustStoreCertificatesResponse class provides an interace for WorkSpacesWeb ListTrustStoreCertificates responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listTrustStoreCertificates
 */

/*!
 * Constructs a ListTrustStoreCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrustStoreCertificatesResponse::ListTrustStoreCertificatesResponse(
        const ListTrustStoreCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListTrustStoreCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListTrustStoreCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrustStoreCertificatesRequest * ListTrustStoreCertificatesResponse::request() const
{
    Q_D(const ListTrustStoreCertificatesResponse);
    return static_cast<const ListTrustStoreCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListTrustStoreCertificates \a response.
 */
void ListTrustStoreCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrustStoreCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoreCertificatesResponsePrivate
 * \brief The ListTrustStoreCertificatesResponsePrivate class provides private implementation for ListTrustStoreCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListTrustStoreCertificatesResponsePrivate object with public implementation \a q.
 */
ListTrustStoreCertificatesResponsePrivate::ListTrustStoreCertificatesResponsePrivate(
    ListTrustStoreCertificatesResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListTrustStoreCertificates response element from \a xml.
 */
void ListTrustStoreCertificatesResponsePrivate::parseListTrustStoreCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrustStoreCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
