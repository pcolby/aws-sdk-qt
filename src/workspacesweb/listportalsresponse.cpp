// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportalsresponse.h"
#include "listportalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListPortalsResponse
 * \brief The ListPortalsResponse class provides an interace for WorkSpacesWeb ListPortals responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listPortals
 */

/*!
 * Constructs a ListPortalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPortalsResponse::ListPortalsResponse(
        const ListPortalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListPortalsResponsePrivate(this), parent)
{
    setRequest(new ListPortalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPortalsRequest * ListPortalsResponse::request() const
{
    Q_D(const ListPortalsResponse);
    return static_cast<const ListPortalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListPortals \a response.
 */
void ListPortalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPortalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListPortalsResponsePrivate
 * \brief The ListPortalsResponsePrivate class provides private implementation for ListPortalsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListPortalsResponsePrivate object with public implementation \a q.
 */
ListPortalsResponsePrivate::ListPortalsResponsePrivate(
    ListPortalsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListPortals response element from \a xml.
 */
void ListPortalsResponsePrivate::parseListPortalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
