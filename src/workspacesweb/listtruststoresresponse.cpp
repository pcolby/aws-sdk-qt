// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtruststoresresponse.h"
#include "listtruststoresresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoresResponse
 * \brief The ListTrustStoresResponse class provides an interace for WorkSpacesWeb ListTrustStores responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listTrustStores
 */

/*!
 * Constructs a ListTrustStoresResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrustStoresResponse::ListTrustStoresResponse(
        const ListTrustStoresRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListTrustStoresResponsePrivate(this), parent)
{
    setRequest(new ListTrustStoresRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrustStoresRequest * ListTrustStoresResponse::request() const
{
    Q_D(const ListTrustStoresResponse);
    return static_cast<const ListTrustStoresRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListTrustStores \a response.
 */
void ListTrustStoresResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrustStoresResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListTrustStoresResponsePrivate
 * \brief The ListTrustStoresResponsePrivate class provides private implementation for ListTrustStoresResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListTrustStoresResponsePrivate object with public implementation \a q.
 */
ListTrustStoresResponsePrivate::ListTrustStoresResponsePrivate(
    ListTrustStoresResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListTrustStores response element from \a xml.
 */
void ListTrustStoresResponsePrivate::parseListTrustStoresResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrustStoresResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
