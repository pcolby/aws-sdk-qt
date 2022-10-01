// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteportalresponse.h"
#include "deleteportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeletePortalResponse
 * \brief The DeletePortalResponse class provides an interace for WorkSpacesWeb DeletePortal responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deletePortal
 */

/*!
 * Constructs a DeletePortalResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePortalResponse::DeletePortalResponse(
        const DeletePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DeletePortalResponsePrivate(this), parent)
{
    setRequest(new DeletePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePortalRequest * DeletePortalResponse::request() const
{
    Q_D(const DeletePortalResponse);
    return static_cast<const DeletePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DeletePortal \a response.
 */
void DeletePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DeletePortalResponsePrivate
 * \brief The DeletePortalResponsePrivate class provides private implementation for DeletePortalResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeletePortalResponsePrivate object with public implementation \a q.
 */
DeletePortalResponsePrivate::DeletePortalResponsePrivate(
    DeletePortalResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DeletePortal response element from \a xml.
 */
void DeletePortalResponsePrivate::parseDeletePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
