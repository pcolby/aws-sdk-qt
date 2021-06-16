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

#include "createbranchresponse.h"
#include "createbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateBranchResponse
 * \brief The CreateBranchResponse class provides an interace for Amplify CreateBranch responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::createBranch
 */

/*!
 * Constructs a CreateBranchResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBranchResponse::CreateBranchResponse(
        const CreateBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateBranchResponsePrivate(this), parent)
{
    setRequest(new CreateBranchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBranchRequest * CreateBranchResponse::request() const
{
    Q_D(const CreateBranchResponse);
    return static_cast<const CreateBranchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateBranch \a response.
 */
void CreateBranchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBranchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateBranchResponsePrivate
 * \brief The CreateBranchResponsePrivate class provides private implementation for CreateBranchResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateBranchResponsePrivate object with public implementation \a q.
 */
CreateBranchResponsePrivate::CreateBranchResponsePrivate(
    CreateBranchResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateBranch response element from \a xml.
 */
void CreateBranchResponsePrivate::parseCreateBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBranchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
