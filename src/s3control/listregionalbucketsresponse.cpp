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

#include "listregionalbucketsresponse.h"
#include "listregionalbucketsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListRegionalBucketsResponse
 * \brief The ListRegionalBucketsResponse class provides an interace for S3Control ListRegionalBuckets responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listRegionalBuckets
 */

/*!
 * Constructs a ListRegionalBucketsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRegionalBucketsResponse::ListRegionalBucketsResponse(
        const ListRegionalBucketsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListRegionalBucketsResponsePrivate(this), parent)
{
    setRequest(new ListRegionalBucketsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRegionalBucketsRequest * ListRegionalBucketsResponse::request() const
{
    Q_D(const ListRegionalBucketsResponse);
    return static_cast<const ListRegionalBucketsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListRegionalBuckets \a response.
 */
void ListRegionalBucketsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRegionalBucketsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListRegionalBucketsResponsePrivate
 * \brief The ListRegionalBucketsResponsePrivate class provides private implementation for ListRegionalBucketsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListRegionalBucketsResponsePrivate object with public implementation \a q.
 */
ListRegionalBucketsResponsePrivate::ListRegionalBucketsResponsePrivate(
    ListRegionalBucketsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListRegionalBuckets response element from \a xml.
 */
void ListRegionalBucketsResponsePrivate::parseListRegionalBucketsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegionalBucketsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
