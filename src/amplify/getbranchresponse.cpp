/*
    Copyright 2013-2018 Paul Colby

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

#include "getbranchresponse.h"
#include "getbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBranchResponse
 * \brief The GetBranchResponse class provides an interace for Amplify GetBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getBranch
 */

/*!
 * Constructs a GetBranchResponse object for \a reply to \a request, with parent \a parent.
 */
GetBranchResponse::GetBranchResponse(
        const GetBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetBranchResponsePrivate(this), parent)
{
    setRequest(new GetBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBranchRequest * GetBranchResponse::request() const
{
    Q_D(const GetBranchResponse);
    return static_cast<const GetBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetBranch \a response.
 */
void GetBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetBranchResponsePrivate
 * \brief The GetBranchResponsePrivate class provides private implementation for GetBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBranchResponsePrivate object with public implementation \a q.
 */
GetBranchResponsePrivate::GetBranchResponsePrivate(
    GetBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetBranch response element from \a xml.
 */
void GetBranchResponsePrivate::parseGetBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
