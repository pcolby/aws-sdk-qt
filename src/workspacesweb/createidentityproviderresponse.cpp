// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createidentityproviderresponse.h"
#include "createidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateIdentityProviderResponse
 * \brief The CreateIdentityProviderResponse class provides an interace for WorkSpacesWeb CreateIdentityProvider responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createIdentityProvider
 */

/*!
 * Constructs a CreateIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIdentityProviderResponse::CreateIdentityProviderResponse(
        const CreateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new CreateIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIdentityProviderRequest * CreateIdentityProviderResponse::request() const
{
    Q_D(const CreateIdentityProviderResponse);
    return static_cast<const CreateIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreateIdentityProvider \a response.
 */
void CreateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateIdentityProviderResponsePrivate
 * \brief The CreateIdentityProviderResponsePrivate class provides private implementation for CreateIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateIdentityProviderResponsePrivate object with public implementation \a q.
 */
CreateIdentityProviderResponsePrivate::CreateIdentityProviderResponsePrivate(
    CreateIdentityProviderResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreateIdentityProvider response element from \a xml.
 */
void CreateIdentityProviderResponsePrivate::parseCreateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
