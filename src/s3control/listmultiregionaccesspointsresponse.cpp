// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultiregionaccesspointsresponse.h"
#include "listmultiregionaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsResponse
 * \brief The ListMultiRegionAccessPointsResponse class provides an interace for S3Control ListMultiRegionAccessPoints responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listMultiRegionAccessPoints
 */

/*!
 * Constructs a ListMultiRegionAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMultiRegionAccessPointsResponse::ListMultiRegionAccessPointsResponse(
        const ListMultiRegionAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListMultiRegionAccessPointsResponsePrivate(this), parent)
{
    setRequest(new ListMultiRegionAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMultiRegionAccessPointsRequest * ListMultiRegionAccessPointsResponse::request() const
{
    Q_D(const ListMultiRegionAccessPointsResponse);
    return static_cast<const ListMultiRegionAccessPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListMultiRegionAccessPoints \a response.
 */
void ListMultiRegionAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMultiRegionAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsResponsePrivate
 * \brief The ListMultiRegionAccessPointsResponsePrivate class provides private implementation for ListMultiRegionAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListMultiRegionAccessPointsResponsePrivate object with public implementation \a q.
 */
ListMultiRegionAccessPointsResponsePrivate::ListMultiRegionAccessPointsResponsePrivate(
    ListMultiRegionAccessPointsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListMultiRegionAccessPoints response element from \a xml.
 */
void ListMultiRegionAccessPointsResponsePrivate::parseListMultiRegionAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultiRegionAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
