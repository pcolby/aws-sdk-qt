// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceuserendpointresponse.h"
#include "describeappinstanceuserendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserEndpointResponse
 * \brief The DescribeAppInstanceUserEndpointResponse class provides an interace for ChimeSdkIdentity DescribeAppInstanceUserEndpoint responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceUserEndpoint
 */

/*!
 * Constructs a DescribeAppInstanceUserEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppInstanceUserEndpointResponse::DescribeAppInstanceUserEndpointResponse(
        const DescribeAppInstanceUserEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DescribeAppInstanceUserEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeAppInstanceUserEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppInstanceUserEndpointRequest * DescribeAppInstanceUserEndpointResponse::request() const
{
    Q_D(const DescribeAppInstanceUserEndpointResponse);
    return static_cast<const DescribeAppInstanceUserEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DescribeAppInstanceUserEndpoint \a response.
 */
void DescribeAppInstanceUserEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppInstanceUserEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserEndpointResponsePrivate
 * \brief The DescribeAppInstanceUserEndpointResponsePrivate class provides private implementation for DescribeAppInstanceUserEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceUserEndpointResponsePrivate object with public implementation \a q.
 */
DescribeAppInstanceUserEndpointResponsePrivate::DescribeAppInstanceUserEndpointResponsePrivate(
    DescribeAppInstanceUserEndpointResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DescribeAppInstanceUserEndpoint response element from \a xml.
 */
void DescribeAppInstanceUserEndpointResponsePrivate::parseDescribeAppInstanceUserEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppInstanceUserEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
