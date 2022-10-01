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

#include "deleteappinstanceadminresponse.h"
#include "deleteappinstanceadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceAdminResponse
 * \brief The DeleteAppInstanceAdminResponse class provides an interace for ChimeSdkIdentity DeleteAppInstanceAdmin responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstanceAdmin
 */

/*!
 * Constructs a DeleteAppInstanceAdminResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppInstanceAdminResponse::DeleteAppInstanceAdminResponse(
        const DeleteAppInstanceAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DeleteAppInstanceAdminResponsePrivate(this), parent)
{
    setRequest(new DeleteAppInstanceAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppInstanceAdminRequest * DeleteAppInstanceAdminResponse::request() const
{
    Q_D(const DeleteAppInstanceAdminResponse);
    return static_cast<const DeleteAppInstanceAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DeleteAppInstanceAdmin \a response.
 */
void DeleteAppInstanceAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppInstanceAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceAdminResponsePrivate
 * \brief The DeleteAppInstanceAdminResponsePrivate class provides private implementation for DeleteAppInstanceAdminResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceAdminResponsePrivate object with public implementation \a q.
 */
DeleteAppInstanceAdminResponsePrivate::DeleteAppInstanceAdminResponsePrivate(
    DeleteAppInstanceAdminResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DeleteAppInstanceAdmin response element from \a xml.
 */
void DeleteAppInstanceAdminResponsePrivate::parseDeleteAppInstanceAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppInstanceAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
