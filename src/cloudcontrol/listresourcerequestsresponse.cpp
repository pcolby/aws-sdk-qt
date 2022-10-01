// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcerequestsresponse.h"
#include "listresourcerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::ListResourceRequestsResponse
 * \brief The ListResourceRequestsResponse class provides an interace for CloudControl ListResourceRequests responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::listResourceRequests
 */

/*!
 * Constructs a ListResourceRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceRequestsResponse::ListResourceRequestsResponse(
        const ListResourceRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new ListResourceRequestsResponsePrivate(this), parent)
{
    setRequest(new ListResourceRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceRequestsRequest * ListResourceRequestsResponse::request() const
{
    Q_D(const ListResourceRequestsResponse);
    return static_cast<const ListResourceRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl ListResourceRequests \a response.
 */
void ListResourceRequestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::ListResourceRequestsResponsePrivate
 * \brief The ListResourceRequestsResponsePrivate class provides private implementation for ListResourceRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a ListResourceRequestsResponsePrivate object with public implementation \a q.
 */
ListResourceRequestsResponsePrivate::ListResourceRequestsResponsePrivate(
    ListResourceRequestsResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl ListResourceRequests response element from \a xml.
 */
void ListResourceRequestsResponsePrivate::parseListResourceRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceRequestsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
