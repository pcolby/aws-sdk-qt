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

#include "deletebranchresponse.h"
#include "deletebranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBranchResponse
 * \brief The DeleteBranchResponse class provides an interace for Amplify DeleteBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::deleteBranch
 */

/*!
 * Constructs a DeleteBranchResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBranchResponse::DeleteBranchResponse(
        const DeleteBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteBranchResponsePrivate(this), parent)
{
    setRequest(new DeleteBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBranchRequest * DeleteBranchResponse::request() const
{
    Q_D(const DeleteBranchResponse);
    return static_cast<const DeleteBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteBranch \a response.
 */
void DeleteBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteBranchResponsePrivate
 * \brief The DeleteBranchResponsePrivate class provides private implementation for DeleteBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBranchResponsePrivate object with public implementation \a q.
 */
DeleteBranchResponsePrivate::DeleteBranchResponsePrivate(
    DeleteBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteBranch response element from \a xml.
 */
void DeleteBranchResponsePrivate::parseDeleteBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
