// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerappinstanceuserendpointresponse.h"
#include "registerappinstanceuserendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::RegisterAppInstanceUserEndpointResponse
 * \brief The RegisterAppInstanceUserEndpointResponse class provides an interace for ChimeSdkIdentity RegisterAppInstanceUserEndpoint responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::registerAppInstanceUserEndpoint
 */

/*!
 * Constructs a RegisterAppInstanceUserEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterAppInstanceUserEndpointResponse::RegisterAppInstanceUserEndpointResponse(
        const RegisterAppInstanceUserEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new RegisterAppInstanceUserEndpointResponsePrivate(this), parent)
{
    setRequest(new RegisterAppInstanceUserEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterAppInstanceUserEndpointRequest * RegisterAppInstanceUserEndpointResponse::request() const
{
    Q_D(const RegisterAppInstanceUserEndpointResponse);
    return static_cast<const RegisterAppInstanceUserEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity RegisterAppInstanceUserEndpoint \a response.
 */
void RegisterAppInstanceUserEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterAppInstanceUserEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::RegisterAppInstanceUserEndpointResponsePrivate
 * \brief The RegisterAppInstanceUserEndpointResponsePrivate class provides private implementation for RegisterAppInstanceUserEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a RegisterAppInstanceUserEndpointResponsePrivate object with public implementation \a q.
 */
RegisterAppInstanceUserEndpointResponsePrivate::RegisterAppInstanceUserEndpointResponsePrivate(
    RegisterAppInstanceUserEndpointResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity RegisterAppInstanceUserEndpoint response element from \a xml.
 */
void RegisterAppInstanceUserEndpointResponsePrivate::parseRegisterAppInstanceUserEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterAppInstanceUserEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
