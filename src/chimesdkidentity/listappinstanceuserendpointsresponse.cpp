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

#include "listappinstanceuserendpointsresponse.h"
#include "listappinstanceuserendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUserEndpointsResponse
 * \brief The ListAppInstanceUserEndpointsResponse class provides an interace for ChimeSdkIdentity ListAppInstanceUserEndpoints responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstanceUserEndpoints
 */

/*!
 * Constructs a ListAppInstanceUserEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppInstanceUserEndpointsResponse::ListAppInstanceUserEndpointsResponse(
        const ListAppInstanceUserEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new ListAppInstanceUserEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListAppInstanceUserEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppInstanceUserEndpointsRequest * ListAppInstanceUserEndpointsResponse::request() const
{
    Q_D(const ListAppInstanceUserEndpointsResponse);
    return static_cast<const ListAppInstanceUserEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity ListAppInstanceUserEndpoints \a response.
 */
void ListAppInstanceUserEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppInstanceUserEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUserEndpointsResponsePrivate
 * \brief The ListAppInstanceUserEndpointsResponsePrivate class provides private implementation for ListAppInstanceUserEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstanceUserEndpointsResponsePrivate object with public implementation \a q.
 */
ListAppInstanceUserEndpointsResponsePrivate::ListAppInstanceUserEndpointsResponsePrivate(
    ListAppInstanceUserEndpointsResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity ListAppInstanceUserEndpoints response element from \a xml.
 */
void ListAppInstanceUserEndpointsResponsePrivate::parseListAppInstanceUserEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppInstanceUserEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
