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

#include "updatebranchresponse.h"
#include "updatebranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateBranchResponse
 * \brief The UpdateBranchResponse class provides an interace for Amplify UpdateBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateBranch
 */

/*!
 * Constructs a UpdateBranchResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBranchResponse::UpdateBranchResponse(
        const UpdateBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateBranchResponsePrivate(this), parent)
{
    setRequest(new UpdateBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBranchRequest * UpdateBranchResponse::request() const
{
    Q_D(const UpdateBranchResponse);
    return static_cast<const UpdateBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateBranch \a response.
 */
void UpdateBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateBranchResponsePrivate
 * \brief The UpdateBranchResponsePrivate class provides private implementation for UpdateBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateBranchResponsePrivate object with public implementation \a q.
 */
UpdateBranchResponsePrivate::UpdateBranchResponsePrivate(
    UpdateBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateBranch response element from \a xml.
 */
void UpdateBranchResponsePrivate::parseUpdateBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
