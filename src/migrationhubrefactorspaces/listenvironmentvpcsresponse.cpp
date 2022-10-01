/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listenvironmentvpcsresponse.h"
#include "listenvironmentvpcsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentVpcsResponse
 * \brief The ListEnvironmentVpcsResponse class provides an interace for MigrationHubRefactorSpaces ListEnvironmentVpcs responses.
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
 * \sa MigrationHubRefactorSpacesClient::listEnvironmentVpcs
 */

/*!
 * Constructs a ListEnvironmentVpcsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEnvironmentVpcsResponse::ListEnvironmentVpcsResponse(
        const ListEnvironmentVpcsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new ListEnvironmentVpcsResponsePrivate(this), parent)
{
    setRequest(new ListEnvironmentVpcsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEnvironmentVpcsRequest * ListEnvironmentVpcsResponse::request() const
{
    Q_D(const ListEnvironmentVpcsResponse);
    return static_cast<const ListEnvironmentVpcsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces ListEnvironmentVpcs \a response.
 */
void ListEnvironmentVpcsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEnvironmentVpcsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::ListEnvironmentVpcsResponsePrivate
 * \brief The ListEnvironmentVpcsResponsePrivate class provides private implementation for ListEnvironmentVpcsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a ListEnvironmentVpcsResponsePrivate object with public implementation \a q.
 */
ListEnvironmentVpcsResponsePrivate::ListEnvironmentVpcsResponsePrivate(
    ListEnvironmentVpcsResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces ListEnvironmentVpcs response element from \a xml.
 */
void ListEnvironmentVpcsResponsePrivate::parseListEnvironmentVpcsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnvironmentVpcsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
