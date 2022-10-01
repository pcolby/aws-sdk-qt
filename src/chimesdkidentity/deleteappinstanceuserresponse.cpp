// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappinstanceuserresponse.h"
#include "deleteappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceUserResponse
 * \brief The DeleteAppInstanceUserResponse class provides an interace for ChimeSdkIdentity DeleteAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstanceUser
 */

/*!
 * Constructs a DeleteAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppInstanceUserResponse::DeleteAppInstanceUserResponse(
        const DeleteAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DeleteAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new DeleteAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppInstanceUserRequest * DeleteAppInstanceUserResponse::request() const
{
    Q_D(const DeleteAppInstanceUserResponse);
    return static_cast<const DeleteAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DeleteAppInstanceUser \a response.
 */
void DeleteAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceUserResponsePrivate
 * \brief The DeleteAppInstanceUserResponsePrivate class provides private implementation for DeleteAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceUserResponsePrivate object with public implementation \a q.
 */
DeleteAppInstanceUserResponsePrivate::DeleteAppInstanceUserResponsePrivate(
    DeleteAppInstanceUserResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DeleteAppInstanceUser response element from \a xml.
 */
void DeleteAppInstanceUserResponsePrivate::parseDeleteAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
