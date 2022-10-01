// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetruststoreresponse.h"
#include "associatetruststoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateTrustStoreResponse
 * \brief The AssociateTrustStoreResponse class provides an interace for WorkSpacesWeb AssociateTrustStore responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateTrustStore
 */

/*!
 * Constructs a AssociateTrustStoreResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTrustStoreResponse::AssociateTrustStoreResponse(
        const AssociateTrustStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new AssociateTrustStoreResponsePrivate(this), parent)
{
    setRequest(new AssociateTrustStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTrustStoreRequest * AssociateTrustStoreResponse::request() const
{
    Q_D(const AssociateTrustStoreResponse);
    return static_cast<const AssociateTrustStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb AssociateTrustStore \a response.
 */
void AssociateTrustStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTrustStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateTrustStoreResponsePrivate
 * \brief The AssociateTrustStoreResponsePrivate class provides private implementation for AssociateTrustStoreResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateTrustStoreResponsePrivate object with public implementation \a q.
 */
AssociateTrustStoreResponsePrivate::AssociateTrustStoreResponsePrivate(
    AssociateTrustStoreResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb AssociateTrustStore response element from \a xml.
 */
void AssociateTrustStoreResponsePrivate::parseAssociateTrustStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTrustStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
