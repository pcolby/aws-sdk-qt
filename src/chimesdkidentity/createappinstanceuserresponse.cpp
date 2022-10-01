// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappinstanceuserresponse.h"
#include "createappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceUserResponse
 * \brief The CreateAppInstanceUserResponse class provides an interace for ChimeSdkIdentity CreateAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::createAppInstanceUser
 */

/*!
 * Constructs a CreateAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppInstanceUserResponse::CreateAppInstanceUserResponse(
        const CreateAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new CreateAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new CreateAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppInstanceUserRequest * CreateAppInstanceUserResponse::request() const
{
    Q_D(const CreateAppInstanceUserResponse);
    return static_cast<const CreateAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity CreateAppInstanceUser \a response.
 */
void CreateAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceUserResponsePrivate
 * \brief The CreateAppInstanceUserResponsePrivate class provides private implementation for CreateAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a CreateAppInstanceUserResponsePrivate object with public implementation \a q.
 */
CreateAppInstanceUserResponsePrivate::CreateAppInstanceUserResponsePrivate(
    CreateAppInstanceUserResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity CreateAppInstanceUser response element from \a xml.
 */
void CreateAppInstanceUserResponsePrivate::parseCreateAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
