// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstanceuserresponse.h"
#include "updateappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserResponse
 * \brief The UpdateAppInstanceUserResponse class provides an interace for ChimeSdkIdentity UpdateAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstanceUser
 */

/*!
 * Constructs a UpdateAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppInstanceUserResponse::UpdateAppInstanceUserResponse(
        const UpdateAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new UpdateAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new UpdateAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppInstanceUserRequest * UpdateAppInstanceUserResponse::request() const
{
    Q_D(const UpdateAppInstanceUserResponse);
    return static_cast<const UpdateAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity UpdateAppInstanceUser \a response.
 */
void UpdateAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserResponsePrivate
 * \brief The UpdateAppInstanceUserResponsePrivate class provides private implementation for UpdateAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceUserResponsePrivate object with public implementation \a q.
 */
UpdateAppInstanceUserResponsePrivate::UpdateAppInstanceUserResponsePrivate(
    UpdateAppInstanceUserResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity UpdateAppInstanceUser response element from \a xml.
 */
void UpdateAppInstanceUserResponsePrivate::parseUpdateAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
