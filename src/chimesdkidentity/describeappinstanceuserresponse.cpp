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

#include "describeappinstanceuserresponse.h"
#include "describeappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserResponse
 * \brief The DescribeAppInstanceUserResponse class provides an interace for ChimeSdkIdentity DescribeAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceUser
 */

/*!
 * Constructs a DescribeAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppInstanceUserResponse::DescribeAppInstanceUserResponse(
        const DescribeAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new DescribeAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new DescribeAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppInstanceUserRequest * DescribeAppInstanceUserResponse::request() const
{
    Q_D(const DescribeAppInstanceUserResponse);
    return static_cast<const DescribeAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity DescribeAppInstanceUser \a response.
 */
void DescribeAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserResponsePrivate
 * \brief The DescribeAppInstanceUserResponsePrivate class provides private implementation for DescribeAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceUserResponsePrivate object with public implementation \a q.
 */
DescribeAppInstanceUserResponsePrivate::DescribeAppInstanceUserResponsePrivate(
    DescribeAppInstanceUserResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity DescribeAppInstanceUser response element from \a xml.
 */
void DescribeAppInstanceUserResponsePrivate::parseDescribeAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
