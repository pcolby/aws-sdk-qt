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

#include "deleteappinstanceresponse.h"
#include "deleteappinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceResponse
 * \brief The DeleteAppInstanceResponse class provides an interace for ChimeSdkIdentity DeleteAppInstance responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstance
 */

/*!
 * Constructs a DeleteAppInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppInstanceResponse::DeleteAppInstanceResponse(
        const DeleteAppInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DeleteAppInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteAppInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppInstanceRequest * DeleteAppInstanceResponse::request() const
{
    Q_D(const DeleteAppInstanceResponse);
    return static_cast<const DeleteAppInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DeleteAppInstance \a response.
 */
void DeleteAppInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceResponsePrivate
 * \brief The DeleteAppInstanceResponsePrivate class provides private implementation for DeleteAppInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceResponsePrivate object with public implementation \a q.
 */
DeleteAppInstanceResponsePrivate::DeleteAppInstanceResponsePrivate(
    DeleteAppInstanceResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DeleteAppInstance response element from \a xml.
 */
void DeleteAppInstanceResponsePrivate::parseDeleteAppInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
