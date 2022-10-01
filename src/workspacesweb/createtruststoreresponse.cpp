// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtruststoreresponse.h"
#include "createtruststoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateTrustStoreResponse
 * \brief The CreateTrustStoreResponse class provides an interace for WorkSpacesWeb CreateTrustStore responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createTrustStore
 */

/*!
 * Constructs a CreateTrustStoreResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrustStoreResponse::CreateTrustStoreResponse(
        const CreateTrustStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreateTrustStoreResponsePrivate(this), parent)
{
    setRequest(new CreateTrustStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrustStoreRequest * CreateTrustStoreResponse::request() const
{
    Q_D(const CreateTrustStoreResponse);
    return static_cast<const CreateTrustStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreateTrustStore \a response.
 */
void CreateTrustStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrustStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateTrustStoreResponsePrivate
 * \brief The CreateTrustStoreResponsePrivate class provides private implementation for CreateTrustStoreResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateTrustStoreResponsePrivate object with public implementation \a q.
 */
CreateTrustStoreResponsePrivate::CreateTrustStoreResponsePrivate(
    CreateTrustStoreResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreateTrustStore response element from \a xml.
 */
void CreateTrustStoreResponsePrivate::parseCreateTrustStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrustStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
