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

#include "createappinstanceadminresponse.h"
#include "createappinstanceadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceAdminResponse
 * \brief The CreateAppInstanceAdminResponse class provides an interace for ChimeSdkIdentity CreateAppInstanceAdmin responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::createAppInstanceAdmin
 */

/*!
 * Constructs a CreateAppInstanceAdminResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppInstanceAdminResponse::CreateAppInstanceAdminResponse(
        const CreateAppInstanceAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new CreateAppInstanceAdminResponsePrivate(this), parent)
{
    setRequest(new CreateAppInstanceAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppInstanceAdminRequest * CreateAppInstanceAdminResponse::request() const
{
    Q_D(const CreateAppInstanceAdminResponse);
    return static_cast<const CreateAppInstanceAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity CreateAppInstanceAdmin \a response.
 */
void CreateAppInstanceAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppInstanceAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceAdminResponsePrivate
 * \brief The CreateAppInstanceAdminResponsePrivate class provides private implementation for CreateAppInstanceAdminResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a CreateAppInstanceAdminResponsePrivate object with public implementation \a q.
 */
CreateAppInstanceAdminResponsePrivate::CreateAppInstanceAdminResponsePrivate(
    CreateAppInstanceAdminResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity CreateAppInstanceAdmin response element from \a xml.
 */
void CreateAppInstanceAdminResponsePrivate::parseCreateAppInstanceAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppInstanceAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
