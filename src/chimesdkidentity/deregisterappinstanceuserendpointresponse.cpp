// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterappinstanceuserendpointresponse.h"
#include "deregisterappinstanceuserendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeregisterAppInstanceUserEndpointResponse
 * \brief The DeregisterAppInstanceUserEndpointResponse class provides an interace for ChimeSdkIdentity DeregisterAppInstanceUserEndpoint responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deregisterAppInstanceUserEndpoint
 */

/*!
 * Constructs a DeregisterAppInstanceUserEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterAppInstanceUserEndpointResponse::DeregisterAppInstanceUserEndpointResponse(
        const DeregisterAppInstanceUserEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DeregisterAppInstanceUserEndpointResponsePrivate(this), parent)
{
    setRequest(new DeregisterAppInstanceUserEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterAppInstanceUserEndpointRequest * DeregisterAppInstanceUserEndpointResponse::request() const
{
    Q_D(const DeregisterAppInstanceUserEndpointResponse);
    return static_cast<const DeregisterAppInstanceUserEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DeregisterAppInstanceUserEndpoint \a response.
 */
void DeregisterAppInstanceUserEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterAppInstanceUserEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeregisterAppInstanceUserEndpointResponsePrivate
 * \brief The DeregisterAppInstanceUserEndpointResponsePrivate class provides private implementation for DeregisterAppInstanceUserEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeregisterAppInstanceUserEndpointResponsePrivate object with public implementation \a q.
 */
DeregisterAppInstanceUserEndpointResponsePrivate::DeregisterAppInstanceUserEndpointResponsePrivate(
    DeregisterAppInstanceUserEndpointResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DeregisterAppInstanceUserEndpoint response element from \a xml.
 */
void DeregisterAppInstanceUserEndpointResponsePrivate::parseDeregisterAppInstanceUserEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterAppInstanceUserEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
