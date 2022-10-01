// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappinstancesresponse.h"
#include "listappinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstancesResponse
 * \brief The ListAppInstancesResponse class provides an interace for ChimeSdkIdentity ListAppInstances responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstances
 */

/*!
 * Constructs a ListAppInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppInstancesResponse::ListAppInstancesResponse(
        const ListAppInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new ListAppInstancesResponsePrivate(this), parent)
{
    setRequest(new ListAppInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppInstancesRequest * ListAppInstancesResponse::request() const
{
    Q_D(const ListAppInstancesResponse);
    return static_cast<const ListAppInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity ListAppInstances \a response.
 */
void ListAppInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstancesResponsePrivate
 * \brief The ListAppInstancesResponsePrivate class provides private implementation for ListAppInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstancesResponsePrivate object with public implementation \a q.
 */
ListAppInstancesResponsePrivate::ListAppInstancesResponsePrivate(
    ListAppInstancesResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity ListAppInstances response element from \a xml.
 */
void ListAppInstancesResponsePrivate::parseListAppInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
