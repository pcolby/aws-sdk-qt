// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentityproviderresponse.h"
#include "deleteidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteIdentityProviderResponse
 * \brief The DeleteIdentityProviderResponse class provides an interace for WorkSpacesWeb DeleteIdentityProvider responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityProviderResponse::DeleteIdentityProviderResponse(
        const DeleteIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DeleteIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityProviderRequest * DeleteIdentityProviderResponse::request() const
{
    Q_D(const DeleteIdentityProviderResponse);
    return static_cast<const DeleteIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DeleteIdentityProvider \a response.
 */
void DeleteIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteIdentityProviderResponsePrivate
 * \brief The DeleteIdentityProviderResponsePrivate class provides private implementation for DeleteIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteIdentityProviderResponsePrivate object with public implementation \a q.
 */
DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponsePrivate(
    DeleteIdentityProviderResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DeleteIdentityProvider response element from \a xml.
 */
void DeleteIdentityProviderResponsePrivate::parseDeleteIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
