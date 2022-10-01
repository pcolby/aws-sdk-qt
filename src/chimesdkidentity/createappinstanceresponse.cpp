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

#include "createappinstanceresponse.h"
#include "createappinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceResponse
 * \brief The CreateAppInstanceResponse class provides an interace for ChimeSdkIdentity CreateAppInstance responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::createAppInstance
 */

/*!
 * Constructs a CreateAppInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppInstanceResponse::CreateAppInstanceResponse(
        const CreateAppInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new CreateAppInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateAppInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppInstanceRequest * CreateAppInstanceResponse::request() const
{
    Q_D(const CreateAppInstanceResponse);
    return static_cast<const CreateAppInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity CreateAppInstance \a response.
 */
void CreateAppInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceResponsePrivate
 * \brief The CreateAppInstanceResponsePrivate class provides private implementation for CreateAppInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a CreateAppInstanceResponsePrivate object with public implementation \a q.
 */
CreateAppInstanceResponsePrivate::CreateAppInstanceResponsePrivate(
    CreateAppInstanceResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity CreateAppInstance response element from \a xml.
 */
void CreateAppInstanceResponsePrivate::parseCreateAppInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
