// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappinstanceadminsresponse.h"
#include "listappinstanceadminsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceAdminsResponse
 * \brief The ListAppInstanceAdminsResponse class provides an interace for ChimeSdkIdentity ListAppInstanceAdmins responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstanceAdmins
 */

/*!
 * Constructs a ListAppInstanceAdminsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppInstanceAdminsResponse::ListAppInstanceAdminsResponse(
        const ListAppInstanceAdminsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkIdentityResponse(new ListAppInstanceAdminsResponsePrivate(this), parent)
{
    setRequest(new ListAppInstanceAdminsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppInstanceAdminsRequest * ListAppInstanceAdminsResponse::request() const
{
    Q_D(const ListAppInstanceAdminsResponse);
    return static_cast<const ListAppInstanceAdminsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkIdentity ListAppInstanceAdmins \a response.
 */
void ListAppInstanceAdminsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppInstanceAdminsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceAdminsResponsePrivate
 * \brief The ListAppInstanceAdminsResponsePrivate class provides private implementation for ListAppInstanceAdminsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstanceAdminsResponsePrivate object with public implementation \a q.
 */
ListAppInstanceAdminsResponsePrivate::ListAppInstanceAdminsResponsePrivate(
    ListAppInstanceAdminsResponse * const q) : ChimeSdkIdentityResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkIdentity ListAppInstanceAdmins response element from \a xml.
 */
void ListAppInstanceAdminsResponsePrivate::parseListAppInstanceAdminsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppInstanceAdminsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
