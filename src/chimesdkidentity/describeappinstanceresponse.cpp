// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceresponse.h"
#include "describeappinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceResponse
 * \brief The DescribeAppInstanceResponse class provides an interace for ChimeSdkIdentity DescribeAppInstance responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstance
 */

/*!
 * Constructs a DescribeAppInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppInstanceResponse::DescribeAppInstanceResponse(
        const DescribeAppInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DescribeAppInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeAppInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppInstanceRequest * DescribeAppInstanceResponse::request() const
{
    Q_D(const DescribeAppInstanceResponse);
    return static_cast<const DescribeAppInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DescribeAppInstance \a response.
 */
void DescribeAppInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceResponsePrivate
 * \brief The DescribeAppInstanceResponsePrivate class provides private implementation for DescribeAppInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceResponsePrivate object with public implementation \a q.
 */
DescribeAppInstanceResponsePrivate::DescribeAppInstanceResponsePrivate(
    DescribeAppInstanceResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DescribeAppInstance response element from \a xml.
 */
void DescribeAppInstanceResponsePrivate::parseDescribeAppInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
