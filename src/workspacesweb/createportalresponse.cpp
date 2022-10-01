// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportalresponse.h"
#include "createportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreatePortalResponse
 * \brief The CreatePortalResponse class provides an interace for WorkSpacesWeb CreatePortal responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createPortal
 */

/*!
 * Constructs a CreatePortalResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePortalResponse::CreatePortalResponse(
        const CreatePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreatePortalResponsePrivate(this), parent)
{
    setRequest(new CreatePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePortalRequest * CreatePortalResponse::request() const
{
    Q_D(const CreatePortalResponse);
    return static_cast<const CreatePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreatePortal \a response.
 */
void CreatePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreatePortalResponsePrivate
 * \brief The CreatePortalResponsePrivate class provides private implementation for CreatePortalResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreatePortalResponsePrivate object with public implementation \a q.
 */
CreatePortalResponsePrivate::CreatePortalResponsePrivate(
    CreatePortalResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreatePortal response element from \a xml.
 */
void CreatePortalResponsePrivate::parseCreatePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
