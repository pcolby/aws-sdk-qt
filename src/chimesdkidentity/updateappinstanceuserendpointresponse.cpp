// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstanceuserendpointresponse.h"
#include "updateappinstanceuserendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserEndpointResponse
 * \brief The UpdateAppInstanceUserEndpointResponse class provides an interace for ChimeSdkIdentity UpdateAppInstanceUserEndpoint responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstanceUserEndpoint
 */

/*!
 * Constructs a UpdateAppInstanceUserEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppInstanceUserEndpointResponse::UpdateAppInstanceUserEndpointResponse(
        const UpdateAppInstanceUserEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new UpdateAppInstanceUserEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateAppInstanceUserEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppInstanceUserEndpointRequest * UpdateAppInstanceUserEndpointResponse::request() const
{
    Q_D(const UpdateAppInstanceUserEndpointResponse);
    return static_cast<const UpdateAppInstanceUserEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity UpdateAppInstanceUserEndpoint \a response.
 */
void UpdateAppInstanceUserEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppInstanceUserEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserEndpointResponsePrivate
 * \brief The UpdateAppInstanceUserEndpointResponsePrivate class provides private implementation for UpdateAppInstanceUserEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceUserEndpointResponsePrivate object with public implementation \a q.
 */
UpdateAppInstanceUserEndpointResponsePrivate::UpdateAppInstanceUserEndpointResponsePrivate(
    UpdateAppInstanceUserEndpointResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity UpdateAppInstanceUserEndpoint response element from \a xml.
 */
void UpdateAppInstanceUserEndpointResponsePrivate::parseUpdateAppInstanceUserEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppInstanceUserEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
