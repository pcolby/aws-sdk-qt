// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedendpointsresponse.h"
#include "listsharedendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsResponse
 * \brief The ListSharedEndpointsResponse class provides an interace for S3Outposts ListSharedEndpoints responses.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listSharedEndpoints
 */

/*!
 * Constructs a ListSharedEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSharedEndpointsResponse::ListSharedEndpointsResponse(
        const ListSharedEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3OutpostsResponse(new ListSharedEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListSharedEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSharedEndpointsRequest * ListSharedEndpointsResponse::request() const
{
    Q_D(const ListSharedEndpointsResponse);
    return static_cast<const ListSharedEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Outposts ListSharedEndpoints \a response.
 */
void ListSharedEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSharedEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsResponsePrivate
 * \brief The ListSharedEndpointsResponsePrivate class provides private implementation for ListSharedEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListSharedEndpointsResponsePrivate object with public implementation \a q.
 */
ListSharedEndpointsResponsePrivate::ListSharedEndpointsResponsePrivate(
    ListSharedEndpointsResponse * const q) : S3OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a S3Outposts ListSharedEndpoints response element from \a xml.
 */
void ListSharedEndpointsResponsePrivate::parseListSharedEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSharedEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Outposts
} // namespace QtAws
