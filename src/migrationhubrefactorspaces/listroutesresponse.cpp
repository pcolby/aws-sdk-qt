// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listroutesresponse.h"
#include "listroutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListRoutesResponse
 * \brief The ListRoutesResponse class provides an interace for MigrationHubRefactorSpaces ListRoutes responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::listRoutes
 */

/*!
 * Constructs a ListRoutesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRoutesResponse::ListRoutesResponse(
        const ListRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new ListRoutesResponsePrivate(this), parent)
{
    setRequest(new ListRoutesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRoutesRequest * ListRoutesResponse::request() const
{
    Q_D(const ListRoutesResponse);
    return static_cast<const ListRoutesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces ListRoutes \a response.
 */
void ListRoutesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListRoutesResponsePrivate
 * \brief The ListRoutesResponsePrivate class provides private implementation for ListRoutesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListRoutesResponsePrivate object with public implementation \a q.
 */
ListRoutesResponsePrivate::ListRoutesResponsePrivate(
    ListRoutesResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces ListRoutes response element from \a xml.
 */
void ListRoutesResponsePrivate::parseListRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRoutesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
