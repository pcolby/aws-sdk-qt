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

#include "listbranchesresponse.h"
#include "listbranchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBranchesResponse
 * \brief The ListBranchesResponse class provides an interace for Amplify ListBranches responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listBranches
 */

/*!
 * Constructs a ListBranchesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBranchesResponse::ListBranchesResponse(
        const ListBranchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListBranchesResponsePrivate(this), parent)
{
    setRequest(new ListBranchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBranchesRequest * ListBranchesResponse::request() const
{
    return static_cast<const ListBranchesRequest *>(AmplifyResponse::request());
}

/*!
 * \reimp
 * Parses a successful Amplify ListBranches \a response.
 */
void ListBranchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBranchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListBranchesResponsePrivate
 * \brief The ListBranchesResponsePrivate class provides private implementation for ListBranchesResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBranchesResponsePrivate object with public implementation \a q.
 */
ListBranchesResponsePrivate::ListBranchesResponsePrivate(
    ListBranchesResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListBranches response element from \a xml.
 */
void ListBranchesResponsePrivate::parseListBranchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBranchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
